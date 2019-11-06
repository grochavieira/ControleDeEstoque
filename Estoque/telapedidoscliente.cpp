#include "telapedidoscliente.h"
#include "ui_telapedidoscliente.h"

static Produto produto;
static Compras compras;
static Pedidos pedido;
static LDDE<Pedidos> lddePedidos;
static LDDE<Produto> lddeProdutos;
static Fila<Produto> filaProdutos;
static LDDE<Compras> lddeCompras;
static Fila<Compras> filaCompras;
static int idCliente;
static QString nomeCliente;
static QString telefoneCliente;
static QString cepCliente;
static int numEnderecoCliente;

TelaPedidosCliente::TelaPedidosCliente(QWidget *parent, int idClienteCopia, QString nomeClienteCopia, QString telefoneClienteCopia, QString cepClienteCopia, int numEnderecoClienteCopia) : QDialog(parent),
                                                                                                                                                                                            ui(new Ui::TelaPedidosCliente)
{
    ui->setupUi(this);

    // Define a aba padrão a ser mostrada ao entrar na tela de Gerenciar Estoque
    ui->tabPedidosDoCliente->setCurrentIndex(0);

    idCliente = idClienteCopia;
    nomeCliente = nomeClienteCopia;
    telefoneCliente = telefoneClienteCopia;
    cepCliente = cepClienteCopia;
    numEnderecoCliente = numEnderecoClienteCopia;

    ui->lblNomeCliente->setText(nomeCliente);

    QSqlQuery query;
    query.prepare("select * from tb_produtos");
    if (query.exec())
    {
        while (query.next())
        {
            produto = new Produto(query.value(0).toInt(), query.value(1).toString(), ((query.value(2).toString()).replace(",", ".")).toDouble(), query.value(3).toInt(), query.value(4).toInt(), query.value(5).toInt());
            lddeProdutos.Insere(produto);
        }
    }
    else
    {
        qDebug() << "Banco de dados falhou!";
    }

    ui->twCompraCliente->setColumnCount(3);

    ui->twCompraCliente->verticalHeader()->setVisible(false);
    ui->twCompraCliente->horizontalHeader()->setFixedHeight(30);
    ui->twCompraCliente->setColumnWidth(0, 180);
    ui->twCompraCliente->setColumnWidth(1, 100);
    ui->twCompraCliente->setColumnWidth(2, 119);
    QStringList cabecalhoCompras = {"Nome", "Quantidade", "Preço Unitario"};
    ui->twCompraCliente->setHorizontalHeaderLabels(cabecalhoCompras);
    ui->twCompraCliente->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twCompraCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twCompraCliente->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    ui->twPedidosCliente->setColumnCount(4);
    ui->twPedidosCliente->verticalHeader()->setVisible(false);
    ui->twPedidosCliente->horizontalHeader()->setFixedHeight(30);
    ui->twPedidosCliente->setColumnWidth(0, 208);
    ui->twPedidosCliente->setColumnWidth(1, 100);
    ui->twPedidosCliente->setColumnWidth(2, 120);
    ui->twPedidosCliente->setColumnWidth(3, 120);
    QStringList cabecalhoPedidos = {"Nome", "Quantidade", "Preço unitario", "Preço Total"};
    ui->twPedidosCliente->setHorizontalHeaderLabels(cabecalhoPedidos);
    ui->twPedidosCliente->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twPedidosCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twPedidosCliente->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    ui->twStatusPedidosCliente->setColumnCount(4);
    ui->twStatusPedidosCliente->verticalHeader()->setVisible(false);
    ui->twStatusPedidosCliente->horizontalHeader()->setFixedHeight(30);
    ui->twStatusPedidosCliente->setColumnWidth(0, 250);
    ui->twStatusPedidosCliente->setColumnWidth(1, 100);
    ui->twStatusPedidosCliente->setColumnWidth(2, 137);
    ui->twStatusPedidosCliente->setColumnWidth(3, 235);
    QStringList cabecalhoStatusPedido = {"Produto", "Quantidade", "Preço Total", "Status de Entrega"};
    ui->twStatusPedidosCliente->setHorizontalHeaderLabels(cabecalhoStatusPedido);
    ui->twStatusPedidosCliente->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twStatusPedidosCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twStatusPedidosCliente->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    ui->twCompraCliente->setRowCount(0);
    int i = 0, linha = 0;
    produto = lddeProdutos[i];
    while (produto.getId() != -1)
    {
        if (!(produto.getQuantidade() == 0))
        {
            ui->twCompraCliente->insertRow(linha);
            ui->twCompraCliente->setItem(linha, 0, new QTableWidgetItem(produto.getNome()));
            ui->twCompraCliente->setItem(linha, 1, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twCompraCliente->setItem(linha, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
            linha++;
        }
        i++;
        produto = lddeProdutos[i];
    }
}

TelaPedidosCliente::~TelaPedidosCliente()
{
    lddeProdutos.Reseta();
    delete ui;
}

void TelaPedidosCliente::closeEvent(QCloseEvent *event){
    int qtdPedidosCesta = lddeCompras.getQtdCadastrados();
    if(qtdPedidosCesta > 0){
    QMessageBox::StandardButton dialog;
    dialog = QMessageBox::warning(this, "Confirmação de Saida",
                                  "Sua cesta de compras será excluida, deseja prosseguir?",
                                  QMessageBox::Ok | QMessageBox::Cancel);
    if (dialog == QMessageBox::Ok) {
        while(qtdPedidosCesta > 0){
            compras = lddeCompras[0];
            if (compras.getId() != -1)
            {
                lddeCompras.Remove(compras.getId());
                produto = lddeProdutos.Busca(compras.getId());

                //Altera a quantidade do produto atual do banco de dados
                int quantidadeNova = produto.getQuantidade() + compras.getQntProduto();
                QSqlQuery query;
                query.prepare("update tb_produtos set quantidade=" + QString::number(quantidadeNova) + " where id=" + QString::number(compras.getId()));
                if (query.exec())
                {
                    produto = lddeProdutos.Busca(compras.getNome());
                    produto.Atualiza(quantidadeNova);
                    lddeProdutos.Atualiza(produto, compras.getId());
                    qDebug("Os produtos foram estocados novamente!");
                }
                else
                {
                    qDebug("Não foi possível estocar os produtos!");
                }
            }
            else
            {
                qDebug("Esse pedido temporário não existe!");
            }
            qtdPedidosCesta--;
        }
        close();
    } else {
        event->ignore();
    }

    }
}

void TelaPedidosCliente::on_buttonAdiciona_clicked()
{
    int linha = ui->twCompraCliente->currentRow();
    if (linha != -1)
    {
        int qtdProduto = ui->spnQuantidade->value();
        produto = lddeProdutos.Busca(ui->twCompraCliente->item(linha, 0)->text());

        if (qtdProduto == 0)
        {
            QMessageBox::warning(this, "ERRO", "Quantidade 0 não permitido!");
        }
        else if (produto.getId() == -1)
        {
            QMessageBox::warning(this, "ERRO", "Erro ao escolher produto!");
        }
        else
        {
            compras = new Compras(produto.getId(), qtdProduto, produto.getNome(), produto.getPreco());
            lddeCompras.Insere(compras);
            filaCompras.Insere(compras);

            //Altera a quantidade do produto atual do banco de dados
            int quantidadeNova = produto.getQuantidade() - compras.getQntProduto();
            QSqlQuery query;
            query.prepare("update tb_produtos set quantidade=" + QString::number(quantidadeNova) + " where id=" + QString::number(compras.getId()));
            if (query.exec())
            {
                produto = lddeProdutos.Busca(compras.getNome());
                produto.Atualiza(quantidadeNova);
                lddeProdutos.Atualiza(produto, compras.getId());
            }
            else
            {
                QMessageBox::warning(this, "ERRO", "Erro ao atualizar produtos!");
            }

            QMessageBox::information(this, "OK", "Produto adicionado a cesta de compras!");
        }
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Selecione um produto para comprar!");
    }

    ui->twCompraCliente->setRowCount(0);
    int i = 0;
    linha = 0;
    produto = lddeProdutos[i];
    while (produto.getId() != -1)
    {
        if (!(produto.getQuantidade() == 0))
        {
            ui->twCompraCliente->insertRow(linha);
            ui->twCompraCliente->setItem(linha, 0, new QTableWidgetItem(produto.getNome()));
            ui->twCompraCliente->setItem(linha, 1, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twCompraCliente->setItem(linha, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
            linha++;
        }
        i++;
        produto = lddeProdutos[i];
    }
}

void TelaPedidosCliente::on_buttonListar_clicked()
{
    ui->twCompraCliente->setRowCount(0);
    int i = 0, linha = 0;
    produto = lddeProdutos[i];
    while (produto.getId() != -1)
    {
        if (!(produto.getQuantidade() == 0))
        {
            ui->twCompraCliente->insertRow(linha);
            ui->twCompraCliente->setItem(linha, 0, new QTableWidgetItem(produto.getNome()));
            ui->twCompraCliente->setItem(linha, 1, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twCompraCliente->setItem(linha, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
            linha++;
        }
        i++;
        produto = lddeProdutos[i];
    }
}

void TelaPedidosCliente::on_buttonPesquisar_clicked()
{
    QString nome = ui->txtPesquisar->text();
    produto = lddeProdutos.Busca(nome);
    if (produto.getId() == -1 || produto.getQuantidade() == 0)
    {
        QMessageBox::information(this, "ERRO", "O Nome pesquisado não existe!");
    }
    else
    {
        ui->twCompraCliente->clearContents();
        ui->twCompraCliente->setRowCount(0);
        ui->twCompraCliente->insertRow(0);
        ui->twCompraCliente->setItem(0, 0, new QTableWidgetItem(produto.getNome()));
        ui->twCompraCliente->setItem(0, 1, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twCompraCliente->setItem(0, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
    }
}

void TelaPedidosCliente::on_spnQuantidade_editingFinished()
{
    int linha = ui->twCompraCliente->currentRow();
    if (linha != -1)
    {
        ui->spnQuantidade->setMaximum((ui->twCompraCliente->item(linha, 1)->text()).toInt());
    }
}

void TelaPedidosCliente::on_twCompraCliente_itemSelectionChanged()
{
    int linha = ui->twCompraCliente->currentRow();
    if (linha != -1)
    {
        ui->spnQuantidade->setMaximum((ui->twCompraCliente->item(linha, 1)->text()).toInt());
    }
}

void TelaPedidosCliente::on_tabPedidosDoCliente_currentChanged(int index)
{
    if (index == 0)
    {
        ui->twCompraCliente->setRowCount(0);
        int i = 0, linha = 0;
        produto = lddeProdutos[i];
        while (produto.getId() != -1)
        {
            if (!(produto.getQuantidade() == 0))
            {
                ui->twCompraCliente->insertRow(linha);
                ui->twCompraCliente->setItem(linha, 0, new QTableWidgetItem(produto.getNome()));
                ui->twCompraCliente->setItem(linha, 1, new QTableWidgetItem(QString::number(produto.getQuantidade())));
                ui->twCompraCliente->setItem(linha, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
                linha++;
            }
            i++;
            produto = lddeProdutos[i];
        }
    }
    if (index == 1)
    {
        ui->twPedidosCliente->setRowCount(0);
        int i = 0;
        compras = lddeCompras[i];
        while (compras.getId() != -1)
        {
            ui->twPedidosCliente->insertRow(i);
            ui->twPedidosCliente->setItem(i, 0, new QTableWidgetItem(compras.getNome()));
            ui->twPedidosCliente->setItem(i, 1, new QTableWidgetItem(QString::number(compras.getQntProduto())));
            ui->twPedidosCliente->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(compras.getPreco())));
            ui->twPedidosCliente->setItem(i, 3, new QTableWidgetItem("R$ " + QString::number(compras.getPreco() * compras.getQntProduto())));
            i++;
            compras = lddeCompras[i];
        }
    }

    if (index == 2)
    {
        ui->twStatusPedidosCliente->setRowCount(0);

        QSqlQuery query;
        query.prepare("select * from tb_pedidos where id_cliente=" + QString::number(idCliente) + "");
        if (query.exec())
        {
            int i = 0;
            while (query.next())
            {
                pedido = new Pedidos(query.value(0).toInt(), query.value(1).toInt(), query.value(2).toString(),
                                     query.value(3).toString(), query.value(4).toInt(), query.value(5).toString(),
                                     query.value(6).toInt(), query.value(7).toString(), query.value(8).toInt(),
                                     ((query.value(9).toString()).replace(",",".")).toDouble(), query.value(10).toBool());
                lddePedidos.Insere(pedido);
                ui->twStatusPedidosCliente->insertRow(i);
                ui->twStatusPedidosCliente->setItem(i, 0, new QTableWidgetItem(pedido.getNomeProduto()));
                ui->twStatusPedidosCliente->setItem(i, 1, new QTableWidgetItem(QString::number(pedido.getQtdProduto())));
                ui->twStatusPedidosCliente->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(pedido.getPrecoTotalProduto())));
                ui->twStatusPedidosCliente->setItem(i, 3, new QTableWidgetItem((pedido.getPedidoEntregue() ? "Pedido entregado" : "Pedido em transição de entrega")));
                i++;
            }
        }
        else
        {
            qDebug() << "Banco de dados falhou!";
        }
    }
}

void TelaPedidosCliente::on_btnExcluirPedido_clicked()
{
    int linha = ui->twPedidosCliente->currentRow();
    if (linha != -1)
    {
        //QString id = ui->twPedidosCliente->item(linha, 0)->text();
        compras = lddeCompras[linha];
        if (compras.getId() != -1)
        {
            ui->twPedidosCliente->removeRow(linha);
            lddeCompras.Remove(compras.getId());
            produto = lddeProdutos.Busca(compras.getId());

            //Altera a quantidade do produto atual do banco de dados
            int quantidadeNova = produto.getQuantidade() + compras.getQntProduto();
            QSqlQuery query;
            query.prepare("update tb_produtos set quantidade=" + QString::number(quantidadeNova) + " where id=" + QString::number(compras.getId()));
            if (query.exec())
            {
                produto = lddeProdutos.Busca(compras.getNome());
                produto.Atualiza(quantidadeNova);
                lddeProdutos.Atualiza(produto, compras.getId());
            }
            else
            {
                QMessageBox::warning(this, "ERRO", "Erro ao atualizar produtos!");
            }

            QMessageBox::information(this, "", "Produto removido!");
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "Erro ao remover produto!");
        }
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Selecione um produto para remover!");
    }
    ui->twPedidosCliente->setRowCount(0);
    int i = 0;
    compras = lddeCompras[i];
    while (compras.getId() != -1)
    {
        ui->twPedidosCliente->insertRow(i);
        ui->twPedidosCliente->setItem(i, 0, new QTableWidgetItem(compras.getNome()));
        ui->twPedidosCliente->setItem(i, 1, new QTableWidgetItem(QString::number(compras.getQntProduto())));
        ui->twPedidosCliente->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(compras.getPreco())));
        ui->twPedidosCliente->setItem(i, 3, new QTableWidgetItem("R$ " + QString::number(compras.getPreco() * compras.getQntProduto())));
        i++;
        compras = lddeCompras[i];
    }
    ui->twCompraCliente->selectRow(0);
}

void TelaPedidosCliente::on_btnConfirmarPedido_clicked()
{
    if (lddeCompras.getQtdCadastrados() == 0)
        QMessageBox::information(this, "ERRO", "Não Existe Pedidos a Serem Enviados");

    else
    {
        int qtdPedidos = lddeCompras.getQtdCadastrados();
        bool pedidoEnviado = false;
        while (qtdPedidos != 0)
        { // Remove todos produtos das Compras e envia para fila de pedidos.
            compras = lddeCompras[0];

            QSqlQuery query;
            query.prepare("insert into tb_pedidos (id_cliente, nome_cliente, cep_cliente, num_endereco_cliente, telefone_cliente, id_produto, nome_produto, quantidade_produto, preco_total_produto, pedido_entregue) values"
                          "('" +
                          QString::number(idCliente) + "','" + nomeCliente + "','" + cepCliente + "','" + QString::number(numEnderecoCliente) + "','" + telefoneCliente + "','" + QString::number(compras.getId()) + "','" + compras.getNome() + "','" + QString::number(compras.getQntProduto()) + "','" + QString::number(compras.getPreco() * compras.getQntProduto()) + "','" + "false" + "')");
            if (query.exec())
            {
                pedidoEnviado = true;
                lddeCompras.Remove(compras.getId()); // Remove da lista de compras
            }
            else
            {
                pedidoEnviado = false;
            }
            qtdPedidos--;
        }
        if (pedidoEnviado)
        {
            qDebug() << "Pedidos Enviados";
            QMessageBox::information(this, "OK", "Pedido Enviado com Sucesso!");
            ui->twPedidosCliente->setRowCount(0);
        }
        else
        {
            qDebug() << "Erro ao enviar pedido: " << compras.getNome();
            QMessageBox::warning(this, "ERRO", "ERRO ao Enviar Pedido!");
        }
    }
}

void TelaPedidosCliente::on_pushButton_clicked()
{
}

void TelaPedidosCliente::on_buttonConfirma_clicked()
{
}

void TelaPedidosCliente::on_tabWidget_currentChanged(int index)
{
}

void TelaPedidosCliente::on_tabWidget_tabBarClicked(int index)
{
}


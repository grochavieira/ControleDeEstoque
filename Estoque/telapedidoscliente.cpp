#include "telapedidoscliente.h"
#include "ui_telapedidoscliente.h"

static Produto produto;
static Compras compras;
static LDDE<Produto> lddeProdutos;
static LDDE<Compras> lddeCompras;
static Conexao conexao;

static int id_client;
static QString nome_Client;
static QString telefone;
static QString cep;
static int num_endereco;

TelaPedidosCliente::TelaPedidosCliente(QWidget *parent, int IdCliente, QString nomeClient, QString tel, QString cep_rua, int numero_end) :
    QDialog(parent),
    ui(new Ui::TelaPedidosCliente)
{
    ui->setupUi(this);
    id_client = IdCliente;
    nome_Client = nomeClient;
    telefone = tel;
    cep = cep_rua;
    num_endereco = numero_end;

    QSqlQuery query;
    query.prepare("select * from tb_produtos");
    if(query.exec()){
        while(query.next()){
            produto = new Produto(query.value(0).toInt(), query.value(1).toString(), ((query.value(2).toString()).replace(",",".")).toDouble(), query.value(3).toInt(), query.value(4).toInt(), query.value(5).toInt());
            lddeProdutos.Insere(produto);
        }
    }
    else{
        qDebug() << "Banco de dados falhou!";
    }

    ui->twCompraCliente->setColumnCount(3);

    ui->twCompraCliente->verticalHeader()->setVisible(false);
    ui->twCompraCliente->setColumnWidth(0, 180);
    ui->twCompraCliente->setColumnWidth(1, 100);
    ui->twCompraCliente->setColumnWidth(2, 119);

    QStringList cabecalhos = {"Nome", "Quantidade", "Preço Unitario"};
    ui->twCompraCliente->setHorizontalHeaderLabels(cabecalhos);
    ui->twCompraCliente->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->twCompraCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twCompraCliente->setStyleSheet("QTableView{selection-background-color:blue}");

    ui->twPedidosCliente->setColumnCount(4);

    ui->twPedidosCliente->verticalHeader()->setVisible(false);
    ui->twPedidosCliente->setColumnWidth(0, 208);
    ui->twPedidosCliente->setColumnWidth(1, 100);
    ui->twPedidosCliente->setColumnWidth(2, 120);
    ui->twPedidosCliente->setColumnWidth(3, 120);

    QStringList cabecalhos2 = {"Nome", "Quantidade", "Preço unitario", "Preço Total"};
    ui->twPedidosCliente->setHorizontalHeaderLabels(cabecalhos2);
    ui->twPedidosCliente->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->twPedidosCliente->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twPedidosCliente->setStyleSheet("QTableView{selection-background-color:blue}");
}

TelaPedidosCliente::~TelaPedidosCliente()
{
    delete ui;
}

void TelaPedidosCliente::on_tabWidget_currentChanged(int index)
{

}

void TelaPedidosCliente::on_tabWidget_tabBarClicked(int index)
{
    if(index == 0){
        ui->twCompraCliente->setRowCount(0);
        int i = 0;
        produto = lddeProdutos[i];
        while(produto.getId() != -1){
            ui->twCompraCliente->insertRow(i);
            ui->twCompraCliente->setItem(i, 0, new QTableWidgetItem(produto.getNome()));
            ui->twCompraCliente->setItem(i, 1, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twCompraCliente->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco()) + ",00"));
            i++;
            produto = lddeProdutos[i];
        }
    }
    if(index == 1){
        ui->twPedidosCliente->setRowCount(0);
        int i = 0;
        compras = lddeCompras[i];
        while(compras.getId() != -1){
            ui->twPedidosCliente->insertRow(i);
            ui->twPedidosCliente->setItem(i, 0, new QTableWidgetItem(compras.getNome()));
            ui->twPedidosCliente->setItem(i, 1, new QTableWidgetItem(QString::number(compras.getQntProduto())));
            ui->twPedidosCliente->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(compras.getPreco()) + ",00"));
            ui->twPedidosCliente->setItem(i, 3, new QTableWidgetItem("R$ " + QString::number(compras.getPreco()*compras.getQntProduto()) + ",00"));
            i++;
            compras = lddeCompras[i];
        }
    }
}

void TelaPedidosCliente::on_buttonAdiciona_clicked()
{
    int linha = ui->twCompraCliente->currentRow();
    if(linha != -1)
    {
        int qntProduto = ui->spnQuantidade->value();
        produto = lddeProdutos.Busca(ui->twCompraCliente->item(linha, 0)->text());

        if(qntProduto == 0){
            QMessageBox::warning(this,"ERRO","Quantidade 0 não permetido!");
        }
        else if(qntProduto > produto.getQuantidade()){
            QMessageBox::warning(this,"ERRO","Não temos a quantidade desejada no estoque!");
        }
        else if(produto.getId() == -1){
            QMessageBox::warning(this,"ERRO","Erro ao escolher produto!");
        }
        else{
            compras = new Compras(produto.getId(), qntProduto, produto.getNome(), produto.getPreco());
            lddeCompras.Insere(compras);
            QMessageBox::information(this,"","Produto adicionado a compras!");
        }
    }
    else{
        QMessageBox::warning(this,"ERRO","Selecione um produto para comprar!");
    }

    ui->twCompraCliente->selectRow(0);
}

void TelaPedidosCliente::on_buttonListar_clicked()
{
    ui->twCompraCliente->setRowCount(0);
    int i = 0;
    produto = lddeProdutos[i];
    while(produto.getId() != -1){
        ui->twCompraCliente->insertRow(i);
        ui->twCompraCliente->setItem(i, 0, new QTableWidgetItem(produto.getNome()));
        ui->twCompraCliente->setItem(i, 1, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twCompraCliente->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
        i++;
        produto = lddeProdutos[i];
    }
}

void TelaPedidosCliente::on_buttonPesquisar_clicked()
{
    QString nome = ui->txtPesquisar->text();
    produto = lddeProdutos.Busca(nome);
    if(produto.getId() == -1){
        QMessageBox::information(this,"ERRO","O Nome pesquisado não existe!");
    }
    else{
        ui->twCompraCliente->clearContents();
        ui->twCompraCliente->setRowCount(0);
        ui->twCompraCliente->insertRow(0);
        ui->twCompraCliente->setItem(0, 0, new QTableWidgetItem(produto.getNome()));
        ui->twCompraCliente->setItem(0, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twCompraCliente->setItem(0, 1, new QTableWidgetItem("R$ " + QString::number(produto.getPreco()) + ",00"));
    }
}

void TelaPedidosCliente::on_pushButton_clicked()
{
    int linha = ui->twPedidosCliente->currentRow();
    if(linha != -1)
    {
        QString id = ui->twPedidosCliente->item(linha,0)->text();
        compras = lddeCompras.Busca(id);
        if(compras.getId() != -1){
            ui->twPedidosCliente->removeRow(linha);
            QMessageBox::information(this,"","Produto removido!");
            lddeCompras.Remove(compras.getId());
        }
        else{
            QMessageBox::warning(this,"ERRO","Erro ao remover produto!");
        }
    }
    else{
        QMessageBox::warning(this,"ERRO","Selecione um produto para remover!");
    }

    ui->twCompraCliente->selectRow(0);

    ui->twPedidosCliente->setRowCount(0);
    int i = 0;
    compras = lddeCompras[i];
    while(compras.getId() != -1){
        ui->twPedidosCliente->insertRow(i);
        ui->twPedidosCliente->setItem(i, 0, new QTableWidgetItem(compras.getNome()));
        ui->twPedidosCliente->setItem(i, 1, new QTableWidgetItem(QString::number(compras.getQntProduto())));
        ui->twPedidosCliente->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(compras.getPreco())));
        ui->twPedidosCliente->setItem(i, 3, new QTableWidgetItem("R$ " + QString::number(compras.getPreco()*compras.getQntProduto()) + ",00"));
        i++;
        compras = lddeCompras[i];
    }
}

void TelaPedidosCliente::on_buttonConfirma_clicked() // Clica e Salva no Banco
{
    if(lddeCompras.getQtdCadastrados() == 0)
       QMessageBox::information(this, "ERRO", "Não ha pedidos a serem enviados");
    else{
        while(lddeCompras.getQtdCadastrados() != 0){// Remove todos produtos das Compras e envia para fila de pedidos.
            compras = lddeCompras[0];
            QSqlQuery query;
            query.prepare("insert into tb_pedidos (id_cliente, cep, numero_end, telefone, id_produto, quantidade_produto) values""('" + QString::number(id_client) + "','" + cep + "','" + QString::number(num_endereco) + "','" + telefone + "','" + QString::number(compras.getId()) + "','" + QString::number(compras.getQntProduto()) + "')");
            if(query.exec()){
                qDebug() << "Pedidos enviados";
                QMessageBox::information(this, "OK", "Pedidos Enviados com sucesso!");
            }
            else{
                qDebug() << "Erro ao enviar pedido: " << compras.getNome();
                QMessageBox::warning(this,"ERRO","ERRO ao cadastrar pedido!");
            }

            lddeCompras.Remove(compras.getId());

            ui->twPedidosCliente->setRowCount(0);
            int i = 0;
            compras = lddeCompras[i];
            while(compras.getId() != -1){//Monta a tabela dos pedidos atuais do cliente
                ui->twPedidosCliente->insertRow(i);
                ui->twPedidosCliente->setItem(i, 0, new QTableWidgetItem(compras.getNome()));
                ui->twPedidosCliente->setItem(i, 1, new QTableWidgetItem(QString::number(compras.getQntProduto())));
                ui->twPedidosCliente->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(compras.getPreco())));
                ui->twPedidosCliente->setItem(i, 3, new QTableWidgetItem("R$ " + QString::number(compras.getPreco()*compras.getQntProduto()) + ",00"));
                i++;
                compras = lddeCompras[i];
            }
        }
    }
}

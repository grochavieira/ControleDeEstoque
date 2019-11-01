#include "telagerenciaestoque.h"
#include "ui_telagerenciaestoque.h"

static LDDE<Produto> lddeProdutos;
static PILHA<Produto> pilha;
static Fila<Pedidos> filaPedidos;
static Produto produto;
static Pedidos pedidos;

TelaGerenciaEstoque::TelaGerenciaEstoque(QWidget *parent) : QDialog(parent),
                                                            ui(new Ui::TelaGerenciaEstoque)
{
    ui->setupUi(this);
    // Define a aba padrão a ser mostrada ao entrar na tela de Gerenciar Estoque
    ui->tabGerenciadorDeEstoque->setCurrentIndex(0);

    /* Busca todos os dados dos produtos existentes no banco de dados (tabela de produtos)
     * e armazena eles dentro de um objeto do tipo LDDE<Produto>
     */
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

    query.prepare("select * from tb_pedidos");
    if (query.exec())
    {
        while (query.next())
        {
            pedidos = new Pedidos(query.value(0).toInt(), query.value(1).toInt(), query.value(2).toString(),
                                 query.value(3).toString(), query.value(4).toInt(), query.value(5).toString(),
                                 query.value(6).toInt(), query.value(7).toString(), query.value(8).toInt(),
                                 ((query.value(9).toString()).replace(",",".")).toDouble(), query.value(10).toBool());
            filaPedidos.Insere(pedidos);
        }
    }
    else
    {
        qDebug() << "Banco de dados falhou!";
    }

    //resgata o nome da tb_clientes

    QString vetor[1000]; //isso é temporario ok?so ate eu achar um jeito
                         //de comparar o id do cliente ,retornar o nome
                         // colocar o nome na tb_pedidos
                         // e listar tudo isso
    int i = 0;
    query.prepare("select nome_cliente from tb_clientes");
    if (query.exec())
    {
        while (query.next())
        {
            vetor[i] = query.value(0).toString();
            i++;
        }
    }
    else
    {
        qDebug() << "Banco de dados falhou!";
    }
    for (i = 0; i < 10; i++)
    {
        qDebug() << vetor[i];
    }

    // Configurações iniciais da tabela de produtos (cabeçalho, tamanho, num. de colunas, etc.)
    ui->twProdutos->setColumnCount(6);
    ui->twProdutos->verticalHeader()->setVisible(false);
    ui->twProdutos->horizontalHeader()->setFixedHeight(30);
    ui->twProdutos->setColumnWidth(0, 80);
    ui->twProdutos->setColumnWidth(1, 200);
    ui->twProdutos->setColumnWidth(2, 100);
    ui->twProdutos->setColumnWidth(3, 117);
    ui->twProdutos->setColumnWidth(4, 120);
    ui->twProdutos->setColumnWidth(5, 120);
    QStringList cabecalhos = {"ID", "Nome", "Preço", "Quantidade", "Qtd. Mínima", "Qtd. Máxima"};
    ui->twProdutos->setHorizontalHeaderLabels(cabecalhos);
    ui->twProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twProdutos->setStyleSheet("QTableView{selection-background-color: #FF6633}");

    // Configurações iniciais da lista de compras (cabeçalho, tamanho, num. de colunas, etc..)
    ui->twListaDeCompras->setColumnCount(5);
    ui->twListaDeCompras->verticalHeader()->setVisible(false);
    ui->twListaDeCompras->horizontalHeader()->setFixedHeight(30);
    ui->twListaDeCompras->setColumnWidth(0, 80);
    ui->twListaDeCompras->setColumnWidth(1, 290);
    ui->twListaDeCompras->setColumnWidth(2, 125);
    ui->twListaDeCompras->setColumnWidth(3, 125);
    ui->twListaDeCompras->setColumnWidth(4, 125);
    QStringList cabecalhosLista = {"ID", "Nome", "Quantidade", "Qtd. Máxima", "Prioridade"};
    ui->twListaDeCompras->setHorizontalHeaderLabels(cabecalhosLista);
    ui->twListaDeCompras->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twListaDeCompras->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twListaDeCompras->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    // Configurações iniciais da lista de Pedidos (cabeçalho, tamanho, num. de colunas, etc..)
    ui->twPedidos->setColumnCount(10);
    ui->twPedidos->verticalHeader()->setVisible(false);
    ui->twPedidos->horizontalHeader()->setFixedHeight(30);
    ui->twPedidos->setColumnWidth(0, 80);
    ui->twPedidos->setColumnWidth(1, 80);
    ui->twPedidos->setColumnWidth(2, 300);
    ui->twPedidos->setColumnWidth(3, 90);
    ui->twPedidos->setColumnWidth(4, 150);
    ui->twPedidos->setColumnWidth(5, 130);
    ui->twPedidos->setColumnWidth(6, 100);
    ui->twPedidos->setColumnWidth(7, 300);
    ui->twPedidos->setColumnWidth(8, 120);
    ui->twPedidos->setColumnWidth(9, 120);
    QStringList cabecalhosPedidos = {"Id Pedido", "Id Cliente", "Cliente", "CEP", "Num. de endereço",
                                     "Telefone", "Id Produto", "Produto", "Qtd. Produto", "Preço Total"};
    ui->twPedidos->setHorizontalHeaderLabels(cabecalhosPedidos);
    ui->twPedidos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twPedidos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twPedidos->setStyleSheet("QTableView{selection-background-color:#FF6633}");
}

TelaGerenciaEstoque::~TelaGerenciaEstoque()
{
    lddeProdutos.Reseta();
    filaPedidos.Reseta();
    delete ui;
}

void TelaGerenciaEstoque::on_btnCadastrarProduto_clicked()
{
    // Contador da quantidade de erros no cadastro de produtos
    int verificador = 0;
    // Pega os dados digitados pelo funcionário
    int idProduto = ui->spnIdProduto->value();
    QString nomeProduto = ui->txtNomeProduto->text();
    double precoProduto = ui->spnPrecoProduto->value();
    int quantidadeProduto = ui->spnQuantidadeProduto->value();
    int quantidadeMinProduto = ui->spnQuantidadeMinProduto->value();
    int quantidadeMaxProduto = ui->spnQuantidadeMaxProduto->value();

    /* Verifica se o que foi digitado pelo funcionário está correto
     * para poder efetivamente cadastrar os produtos
     */
    if ((lddeProdutos.Busca(idProduto)).getId() != -1)
    {
        verificador++;
        ui->lblErroId->setText("Esse ID já foi cadastrado.");
    }

    if (nomeProduto == "")
    {
        verificador++;
        ui->lblErroNome->setText("Favor preencher o campo.");
    }

    if (precoProduto == 0.0)
    {
        verificador++;
        ui->lblErroPreco->setText("Favor não venda de graça.");
    }

    // Se não existirem erros, o produto será cadastrado
    if (verificador == 0)
    {
        produto = new Produto(idProduto, nomeProduto, precoProduto, quantidadeProduto, quantidadeMinProduto, quantidadeMaxProduto);
        // Manda os dados do produto para a lddeProdutos
        lddeProdutos.Insere(produto);

        // Manda os dados para o banco de dados (tabela de produtos)
        QSqlQuery query;
        query.prepare("insert into tb_produtos (id, nome, preco, quantidade, quantidade_minima, quantidade_maxima, prioridade) values"
                      "('" +
                      ui->spnIdProduto->text() + "','" + ui->txtNomeProduto->text() + "','" + ui->spnPrecoProduto->text() + "','" + ui->spnQuantidadeProduto->text() + "','" + ui->spnQuantidadeMinProduto->text() + "','" + ui->spnQuantidadeMaxProduto->text() + "','" + QString::number(produto.getPrioridade()) + "')");
        if (query.exec())
        {
            qDebug() << "Produto cadastrado";
            QMessageBox::information(this, "OK", "Produto cadastrado com sucesso!");
        }
        else
        {
            qDebug() << "Erro ao cadastrar produto";
            QMessageBox::warning(this, "ERRO", "ERRO ao cadastrar produto!");
        }
        // Reseta os dados digitados para poder inserir um novo produto
        ui->txtNomeProduto->clear();
        ui->spnPrecoProduto->setValue(0.00);
        ui->spnQuantidadeProduto->setValue(1);
        ui->spnQuantidadeMinProduto->setMaximum(0);
        ui->spnQuantidadeMaxProduto->setMinimum(1);
        ui->spnQuantidadeMaxProduto->setValue(1);
    }
}

void TelaGerenciaEstoque::on_btnEncontrarId_clicked()
{
    // Busca o primeiro id disponível para cadastrar um novo produto
    int i = 1;
    while ((lddeProdutos.Busca(i)).getId() != -1)
    {
        i++;
    }
    ui->spnIdProduto->setValue(i);
    ui->lblErroId->setText("");
}

/* Abaixo são apenas funções que apagam as mensagens de erro ao
 * editar as caixas de texto, e também que impedem certos erros do
 * usuário, como ter uma quantidade inicial de produtos maior que
 * a quantidade máxima.
 */
void TelaGerenciaEstoque::on_spnQuantidadeProduto_editingFinished()
{
    ui->spnQuantidadeMinProduto->setMaximum(ui->spnQuantidadeProduto->value() - 1);
    ui->spnQuantidadeMaxProduto->setMinimum(ui->spnQuantidadeProduto->value());
}

void TelaGerenciaEstoque::on_spnIdProduto_editingFinished()
{
    ui->lblErroId->setText("");
}

void TelaGerenciaEstoque::on_txtNomeProduto_editingFinished()
{
    ui->lblErroNome->setText("");
}

void TelaGerenciaEstoque::on_spnPrecoProduto_editingFinished()
{
    ui->lblErroPreco->setText("");
}

void TelaGerenciaEstoque::on_btnPesquisar_clicked()
{
    // Pega o nome do produto que foi digitado na caixa de texto
    QString nome = ui->txtPesquisarProduto->text();

    // Busca um produto equivalente ao que foi pesquisado
    produto = lddeProdutos.Busca(nome);
    if (produto.getId() == -1)
    { // Se não existir, seu ID será -1
        QMessageBox::information(this, "ERRO", "O Nome pesquisado não existe!");
    }
    else
    { // Caso exista, ele é mostrado na tabela
        ui->twProdutos->clearContents();
        ui->twProdutos->setRowCount(0);
        ui->twProdutos->insertRow(0);
        ui->twProdutos->setItem(0, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twProdutos->setItem(0, 1, new QTableWidgetItem(produto.getNome()));
        ui->twProdutos->setItem(0, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
        ui->twProdutos->setItem(0, 3, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twProdutos->setItem(0, 4, new QTableWidgetItem(QString::number(produto.getQuantidadeMin())));
        ui->twProdutos->setItem(0, 5, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
    }
}

void TelaGerenciaEstoque::on_btnExcluir_clicked()
{
    // Pega o index da linha que foi selecionada
    int linha = ui->twProdutos->currentRow();
    if (linha != -1) // Se essa linha existe
    {
        /* Seus dados são pegados para serem excluidos na lddeProdutos, no banco de dados
         * e na tabela de produtos
         */
        int id = ui->twProdutos->item(linha, 0)->text().toInt();
        QSqlQuery query;
        query.prepare("delete from tb_produtos where id=" + QString::number(id));
        if (query.exec())
        {
            ui->twProdutos->removeRow(linha);
            QMessageBox::information(this, "", "Registro excluido!");
            lddeProdutos.Remove(id);
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "Erro ao excluir registro!");
        }
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Selecione um produto para ser excluído!");
    }

    ui->twProdutos->selectRow(0);
}

void TelaGerenciaEstoque::on_btnListarTodosProdutos_clicked()
{
    ui->twProdutos->setRowCount(0); // Reseta a tabela de produtos
    int i = 0;
    produto = lddeProdutos[i];
    /* Realiza a busca de produtos enquanto eles existirem, e manda seus dados para a tabela
     * para poder listar todos os produtos que já foram cadastrados
     */
    while (produto.getId() != -1)
    {
        ui->twProdutos->insertRow(i);
        ui->twProdutos->setItem(i, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twProdutos->setItem(i, 1, new QTableWidgetItem(produto.getNome()));
        ui->twProdutos->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
        ui->twProdutos->setItem(i, 3, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twProdutos->setItem(i, 4, new QTableWidgetItem(QString::number(produto.getQuantidadeMin())));
        ui->twProdutos->setItem(i, 5, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
        i++;
        produto = lddeProdutos[i];
    }
}

void TelaGerenciaEstoque::on_tabGerenciadorDeEstoque_tabBarClicked(int index)
{
    // index igual a 1, equivale a tab Excluir Produtos
    if (index == 1)
    { // Logo, se essa tab for clicada, ela lista todos os produtos
        ui->twProdutos->setRowCount(0);
        int i = 0;
        produto = lddeProdutos[i];
        while (produto.getId() != -1)
        {
            ui->twProdutos->insertRow(i);
            ui->twProdutos->setItem(i, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twProdutos->setItem(i, 1, new QTableWidgetItem(produto.getNome()));
            ui->twProdutos->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
            ui->twProdutos->setItem(i, 3, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twProdutos->setItem(i, 4, new QTableWidgetItem(QString::number(produto.getQuantidadeMin())));
            ui->twProdutos->setItem(i, 5, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            i++;
            produto = lddeProdutos[i];
        }
    }

    // index igual a 2, equivale a tab Lista de Compras
    if (index == 2)
    { // Se essa tab for clicada, ela lista, em ordem de prioridade, os produtos que precisam ser estocados novamente
        ui->twListaDeCompras->setRowCount(0);
        LES<Produto> listaDeCompras(lddeProdutos.getQtdCadastrados()); // Cria lista de prioridade para guardar os produtos
        int i = 0;
        while (i < lddeProdutos.getQtdCadastrados())
        {                                   // Salva todos produtos na lista
            produto = lddeProdutos[i];      // variavel produto pega cada produto da ldde um de cada vez
            listaDeCompras.Insere(produto); // Funcao para inserir
            i++;
        }

        int j = 0;
        while (j < i)
        {                                // Cria a tabela com todos produtos em ordem de prioridade
            produto = listaDeCompras[j]; // Variavel produto pega cada produto da lista
            qDebug() << "Produto: " << produto.getNome();
            ui->twListaDeCompras->insertRow(j);
            ui->twListaDeCompras->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twListaDeCompras->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
            ui->twListaDeCompras->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twListaDeCompras->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twListaDeCompras->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
            j++;
        }

        /* Manda os produtos em ordem de prioridade para um objeto do tipo PILHA<Produto>
         * para que ele seja usado para repor os itens de maior prioridade
         */
        for (int k = 0; k < lddeProdutos.getQtdCadastrados(); k++)
        {
            produto = listaDeCompras[k];
            pilha.Empilha(produto);
        }
    }

    // index igual a 3, equivale a tab Pedidos
    if (index == 3)
    { // Se essa tab for clicada, ela lista os pedidos em fila.
        ui->twPedidos->setRowCount(0);

        if (filaPedidos.Tamanho() == 0)
        {
            qDebug() << "fila vazia!";
        }
        else
        {
            pedidos = filaPedidos[0];

            int i = 0, linha = 0;
            while (i < filaPedidos.Tamanho())
            { // Cria a tabela com todos os produtos em ordem de prioridade de pedidos
                pedidos = filaPedidos[i];
                if(!(pedidos.getPedidoEntregue()))
                {
                    ui->twPedidos->insertRow(linha);
                    ui->twPedidos->setItem(linha, 0, new QTableWidgetItem(QString::number(pedidos.getId())));
                    ui->twPedidos->setItem(linha, 1, new QTableWidgetItem(QString::number(pedidos.getIdCliente())));
                    ui->twPedidos->setItem(linha, 2, new QTableWidgetItem(pedidos.getNomeCliente()));
                    ui->twPedidos->setItem(linha, 3, new QTableWidgetItem(pedidos.getCepCliente()));
                    ui->twPedidos->setItem(linha, 4, new QTableWidgetItem(QString::number(pedidos.getNumEnderecoCliente())));
                    ui->twPedidos->setItem(linha, 5, new QTableWidgetItem(pedidos.getTelefoneCliente()));
                    ui->twPedidos->setItem(linha, 6, new QTableWidgetItem(QString::number(pedidos.getIdProduto())));
                    ui->twPedidos->setItem(linha, 7, new QTableWidgetItem(pedidos.getNomeProduto()));
                    ui->twPedidos->setItem(linha, 8, new QTableWidgetItem(QString::number(pedidos.getQtdProduto())));
                    ui->twPedidos->setItem(linha, 9, new QTableWidgetItem("R$ " + QString::number(pedidos.getPrecoTotalProduto())));
                    linha++;
                }
                i++;
            }
        }
    }
}

void TelaGerenciaEstoque::on_btnEnviarPedido_clicked()
{
    // Pega o index da linha que foi selecionada
    int linha = ui->twPedidos->currentRow();
    if (linha == 0) // Se o primeiro pedido foi selecionado
    {
        int id = ui->twPedidos->item(linha, 0)->text().toInt();

        // Atualiza o status do pedido e retira o pedido da lista
        QSqlQuery query;
        query.prepare("update tb_pedidos set pedido_entregue= true where id=" + QString::number(id));
        if (query.exec())
        {
            ui->twPedidos->removeRow(linha);
            QMessageBox::information(this, "OK", "Pedido enviado e entregue com sucesso!");
            filaPedidos.Deleta();
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "Não foi possível enviar o pedido!");
        }
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Os pedidos devem ser entregues na ordem que foram realizados!");
    }

    ui->twPedidos->selectRow(0);
}

void TelaGerenciaEstoque::on_btnReporEstoque_clicked()
{
    telaEstocaProdutos telaEstocaProdutos;
    telaEstocaProdutos.setModal(true);
    telaEstocaProdutos.exec();
}

void TelaGerenciaEstoque::on_btnEntregarPedido_clicked()
{
}

void TelaGerenciaEstoque::on_tabCadastrarProdutos_tabBarClicked(int index)
{
}

void TelaGerenciaEstoque::on_twListaDeCompras_cellActivated(int row, int column)
{
}

void TelaGerenciaEstoque::on_pushButton_clicked()
{
}

void TelaGerenciaEstoque::AddRoot()
{
}

void TelaGerenciaEstoque::AddChild(QTreeWidgetItem *parent)
{
}

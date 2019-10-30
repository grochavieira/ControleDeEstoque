#include "telagerenciaestoque.h"
#include "ui_telagerenciaestoque.h"
static LDDE<Produto> lddeProdutos; //fila<class F>
static Fila<Produto> filaProdutos;
static Produto produto;
static Pedidos pedidos12;//pedidos
static Conexao conexao;
static PILHA<Produto> pilha;
static Fila<Produto> fila; //fila<class F>
static Fila<Pedidos> filaPedidos; //fila<class F>


TelaGerenciaEstoque::TelaGerenciaEstoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaGerenciaEstoque){

    ui->setupUi(this);


    /* Busca todos os dados dos produtos existentes no banco de dados (tabela de produtos)
     * e armazena eles dentro de um objeto do tipo LDDE<Produto>
     */

    //importante para usar em pedidos   --------------------
    QSqlQuery query;
    query.prepare("select * from tb_produtos");
    if(query.exec()){
        while(query.next()){
            produto = new Produto(query.value(0).toInt(), query.value(1).toString(), ((query.value(2).toString()).replace(",",".")).toDouble(), query.value(3).toInt(), query.value(4).toInt(), query.value(5).toInt());
            lddeProdutos.Insere(produto);
            //filaProdutos.Insere(produto);
        }
    }
    else{
        qDebug() << "Banco de dados falhou!";
    }
    //importante para usar em pedidos   --------------------
    QSqlQuery query12;
    query12.prepare("select * from tb_pedidos");
    if(query12.exec()){
        while(query12.next()){
            pedidos12 = new Pedidos(query12.value(0).toInt() ,query12.value(1).toInt() ,query12.value(2).toString() ,query12.value(3).toInt() ,query12.value(0).toString() ,query12.value(0).toString() ,query12.value(0).toString() ,query12.value(0).toInt()  );
            filaPedidos.Insere(pedidos12);

        }
    }
    else{
        qDebug() << "Banco de dados falhou!";
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
    ui->twListaDeCompras->setColumnWidth(1, 200);
    ui->twListaDeCompras->setColumnWidth(2, 119);
    ui->twListaDeCompras->setColumnWidth(3, 119);
    ui->twListaDeCompras->setColumnWidth(4, 100);
    QStringList cabecalhosLista = {"ID", "Nome", "Quantidade", "Qtd. Máxima", "Prioridade"};
    ui->twListaDeCompras->setHorizontalHeaderLabels(cabecalhosLista);
    ui->twListaDeCompras->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twListaDeCompras->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twListaDeCompras->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    /*
            ui->pedidos_2->insertRow(i);
            ui->pedidos_2->setItem(i, 0, new QTableWidgetItem(QString::number( pedidos12.getId()  )));
            ui->pedidos_2->setItem(i, 1, new QTableWidgetItem(( pedidos12.getCep()  )));
            ui->pedidos_2->setItem(i, 2, new QTableWidgetItem(( pedidos12.getTelefone()  )));
            ui->pedidos_2->setItem(i, 3, new QTableWidgetItem(QString::number( pedidos12.getIdCliente()  )));
            ui->pedidos_2->setItem(i, 4, new QTableWidgetItem(QString::number( pedidos12.getQntProduto()  )));
            ui->pedidos_2->setItem(i, 5, new QTableWidgetItem(( pedidos12.getNomeCliente()  )));
            ui->pedidos_2->setItem(i, 6, new QTableWidgetItem(( pedidos12.getNomeProduto()  )));
            ui->pedidos_2->setItem(i, 7, new QTableWidgetItem(QString::number( pedidos12.getNumeroEndereco() )));

*/



    //para pedidos_2

    // Configurações iniciais da aba pedidos_2 (cabeçalho, tamanho, num. de colunas, etc..)
    ui->pedidos_2->setColumnCount(6);
    ui->pedidos_2->verticalHeader()->setVisible(false);
    ui->pedidos_2->horizontalHeader()->setFixedHeight(30);
    ui->pedidos_2->setColumnWidth(0, 80);
    ui->pedidos_2->setColumnWidth(1, 80);
    ui->pedidos_2->setColumnWidth(2, 80);
    ui->pedidos_2->setColumnWidth(3, 80);
    ui->pedidos_2->setColumnWidth(4, 80);
    ui->pedidos_2->setColumnWidth(1, 80);
    ui->pedidos_2->setColumnWidth(2, 80);
    ui->pedidos_2->setColumnWidth(3, 80);
    ui->pedidos_2->setColumnWidth(4, 80);
    QStringList cabecalhosLista1 = {"ID PRODUTO","ID CLIENTE", "CEP", "ENDEREÇO", "TELEFONE", "QT PRODUTO"};
    ui->pedidos_2->setHorizontalHeaderLabels(cabecalhosLista1);
    ui->pedidos_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->pedidos_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->pedidos_2->setStyleSheet("QTableView{selection-background-color:#FF6633}");


    //definir para treeWidget
    ui->treeWidget->setColumnCount(5);
    ui->treeWidget->setColumnWidth(0, 80);
    ui->treeWidget->setColumnWidth(1, 100);
    ui->treeWidget->setColumnWidth(2, 100);
    ui->treeWidget->setColumnWidth(3, 100);
    ui->treeWidget->setColumnWidth(4, 100);
    QStringList cabecalhosLista1000 = {"ID", "Nome", "Quantidade", "Qtd. Máxima", "Prioridade"};
    //ui->treeWidget->setHorizontalHeaderLabels(cabecalhosLista1000);
    ui->treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeWidget->setStyleSheet("QTableView{selection-background-color:#FF6633}");



}

TelaGerenciaEstoque::~TelaGerenciaEstoque(){
    delete ui;
}





void TelaGerenciaEstoque::AddRoot(){


    QTreeWidgetItem * itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0,"Pedido");
    itm->setText(1,"Nome");
    itm->setText(2,"Telefone");
    itm->setText(3,"ID");
    itm->setText(4,"Description4");
    //ui->treeWidget->addTopLevelItem(itm);
    /*
    for (int i=0;i<filaProdutos.Tamanho();i++) { //for loop pra analisar todos os pedidos e colocar em sub arvores
        AddChild(itm);
    }
    */
    for (int i=0;i<10;i++) { //for loop pra analisar todos os pedidos e colocar em sub arvores
        AddChild(itm);
    }




}


void TelaGerenciaEstoque::AddChild(QTreeWidgetItem *parent){
    QTreeWidgetItem * itm = new QTreeWidgetItem();
    itm->setText(0,"name");
    itm->setText(1,"Description1");
    itm->setText(2,"Description2");
    itm->setText(3,"Description3");
    itm->setText(4,"Description4");
    parent->addChild(itm);

    /*
    produto.getId();
    produto.getNome();
    produto.getPreco();
    produto.getQuantidade();
    produto.getQuantidade();
    */
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
    if((lddeProdutos.Busca(idProduto)).getId() != -1){
        verificador++;
        ui->lblErroId->setText("Esse ID já foi cadastrado.");
    }

    if(nomeProduto == ""){
        verificador++;
        ui->lblErroNome->setText("Favor preencher o campo.");
    }

    if(precoProduto == 0.0){
        verificador++;
        ui->lblErroPreco->setText("Favor não venda de graça.");
    }

    // Se não existirem erros, o produto será cadastrado
    if(verificador == 0){
        produto = new Produto(idProduto, nomeProduto, precoProduto, quantidadeProduto, quantidadeMinProduto, quantidadeMaxProduto);
        // Manda os dados do produto para a lddeProdutos
        lddeProdutos.Insere(produto);

        // Manda os dados para o banco de dados (tabela de produtos)
        QSqlQuery query;
        query.prepare("insert into tb_produtos (id, nome, preco, quantidade, quantidade_minima, quantidade_maxima, prioridade) values""('" + ui->spnIdProduto->text() + "','" + ui->txtNomeProduto->text() + "','" + ui->spnPrecoProduto->text() + "','" + ui->spnQuantidadeProduto->text() + "','" + ui->spnQuantidadeMinProduto->text() + "','" + ui->spnQuantidadeMaxProduto->text() + "','" + QString::number(produto.getPrioridade()) + "')");
        if(query.exec()){
            qDebug() << "Produto cadastrado";
            QMessageBox::information(this, "OK", "Produto cadastrado com sucesso!");
        }
        else{
            qDebug() << "Erro ao cadastrar produto";
            QMessageBox::warning(this,"ERRO","ERRO ao cadastrar produto!");
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
    while((lddeProdutos.Busca(i)).getId() != -1){
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
    if(produto.getId() == -1){// Se não existir, seu ID será -1
        QMessageBox::information(this,"ERRO","O Nome pesquisado não existe!");
    }
    else{// Caso exista, ele é mostrado na tabela
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

void TelaGerenciaEstoque::on_tabCadastrarProdutos_tabBarClicked(int index)
{

}

void TelaGerenciaEstoque::on_btnExcluir_clicked()
{
    // Pega o index da linha que foi selecionada
    int linha = ui->twProdutos->currentRow();
    if(linha != -1)// Se essa linha existe
    {
        /* Seus dados são pegados para serem excluidos na lddeProdutos, no banco de dados
         * e na tabela de produtos
         */
        int id = ui->twProdutos->item(linha,0)->text().toInt();
        QSqlQuery query;
        query.prepare("delete from tb_produtos where id=" + QString::number(id));
        if(query.exec()){
            ui->twProdutos->removeRow(linha);
            QMessageBox::information(this,"","Registro excluido!");
            lddeProdutos.Remove(id);
        }
        else{
            QMessageBox::warning(this,"ERRO","Erro ao excluir registro!");
        }
    }
    else{
        QMessageBox::warning(this,"ERRO","Selecione um produto para ser excluído!");
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
    while(produto.getId() != -1){
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
    if(index == 1){// Logo, se essa tab for clicada, ela lista todos os produtos
        ui->twProdutos->setRowCount(0);
        int i = 0;
        produto = lddeProdutos[i];
        while(produto.getId() != -1){
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
    if(index == 2){// Se essa tab for clicada, ela lista, em ordem de prioridade, os produtos que precisam ser estocados novamente
        ui->twListaDeCompras->setRowCount(0);
        LES<Produto> listaDeCompras(lddeProdutos.getQtdCadastrados()); // Cria lista de prioridade para guardar os produtos
        int i=0;
        while(i < lddeProdutos.getQtdCadastrados()){ // Salva todos produtos na lista
            produto = lddeProdutos[i]; // variavel produto pega cada produto da ldde um de cada vez
            listaDeCompras.Insere(produto); // Funcao para inserir
            i++;
        }

        int j = 0;
        while(j < i){ // Cria a tabela com todos produtos em ordem de prioridade
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
        for(int k=0; k<lddeProdutos.getQtdCadastrados(); k++){
            produto = listaDeCompras[k];
            pilha.Empilha(produto);
        }
    }
    //tab 3 pra automaticamente mostrar tudo
    // index igual a 3, equivale a tab ---------------> PEDIDOS <--------------
    if(index == 3){// Se essa tab for clicada, ela lista os pedidos em fila.
/*
        ui->pedidos_2->insertRow(0);
        ui->pedidos_2->setItem(0, 0, new QTableWidgetItem("MEMES"  ));
        ui->pedidos_2->setItem(0, 1, new QTableWidgetItem("MEMES"  ));
        ui->pedidos_2->setItem(0, 2, new QTableWidgetItem("MEMES"  ));
        ui->pedidos_2->setItem(0, 3, new QTableWidgetItem("MEMES"  ));
        ui->pedidos_2->setItem(0, 4, new QTableWidgetItem("MEMES"  ));
        ui->pedidos_2->setItem(0, 5, new QTableWidgetItem("MEMES"  ));
        ui->pedidos_2->setItem(0, 6, new QTableWidgetItem("MEMES"  ));
        ui->pedidos_2->setItem(0, 7, new QTableWidgetItem("MEMES"  ));
*/

        Pedidos pedidos;




        ui->pedidos_2->setRowCount(0);

        if(filaPedidos.Tamanho() == 0){
            qDebug()<<"fila vazia!";
        }
        else{

            //pedidos12 = filaPedidos[0];
            //produto = lddeProdutos[i];

            int i = 0;
            while(i < filaPedidos.Tamanho()){ // Cria a tabela com todos produtos em ordem de prioridade
                pedidos = filaPedidos[i];
                ui->pedidos_2->insertRow(i);
                ui->pedidos_2->setItem(i, 0, new QTableWidgetItem(QString::number( pedidos.getIdCliente()  )));
                ui->pedidos_2->setItem(i, 1, new QTableWidgetItem(pedidos.getCep() ));
                ui->pedidos_2->setItem(i, 2, new QTableWidgetItem(QString::number( pedidos.getNumeroEndereco() )));
                ui->pedidos_2->setItem(i, 3, new QTableWidgetItem(( pedidos.getTelefone()  )));
                ui->pedidos_2->setItem(i, 4, new QTableWidgetItem(QString::number( pedidos.getQntProduto()  )));
                ui->pedidos_2->setItem(i, 5, new QTableWidgetItem(QString::number(pedidos.getId()  )));
                i++;


            }
        }//fim else

        /*
{"ID","ID CLIENTE", "CEP", "ENDEREÇO", "TELEFONE", "QT PRODUTO","ID PRODUTO"};
        */





    }


}








void TelaGerenciaEstoque::on_twListaDeCompras_cellActivated(int row, int column){

}

void TelaGerenciaEstoque::on_pushButton_clicked(){
    //AddRoot();
    //limpar tudo

}//aki

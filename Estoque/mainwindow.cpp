#include "mainwindow.h"
#include "ui_mainwindow.h"
LDDE<Produto> lddeProdutos;
Produto produto;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("C:/Users/guiro/OneDrive/Documentos/Estoque/ControleDeEstoque.db");

    if(!bancoDeDados.open()){
        qDebug() << "Não foi possível abrir o banco de dados!";
    }
    else{
        qDebug() << "Banco de Dados foi aberto com sucesso!";
    }

    QSqlQuery query;
    query.prepare("select * from tb_produtos");
    if(query.exec()){
        int cont = 0;
        while(query.next()){
            produto = new Produto(query.value(0).toInt(), query.value(1).toString(), ((query.value(2).toString()).replace(",",".")).toDouble(), query.value(3).toInt(), query.value(4).toInt(), query.value(5).toInt());
            lddeProdutos.Insere(produto);
            cont++;
        }
    }
    else{
        qDebug("banco de dados falhou");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCadastrarProduto_clicked()
{


}

void MainWindow::on_spnIdProduto_editingFinished()
{

}

void MainWindow::on_txtNomeProduto_editingFinished()
{

}

void MainWindow::on_spnPrecoProduto_editingFinished()
{

}

void MainWindow::on_spnQuantidadeProduto_editingFinished()
{

}

void MainWindow::on_btnEncontrarId_clicked()
{

}

void MainWindow::on_btnCadastrarProdutosJanela_clicked()
{
    this->setVisible(false);
    telaCadastroProdutos telaCadastroProdutos(this,&lddeProdutos);
    telaCadastroProdutos.exec();
    this->setVisible(true);
}

void MainWindow::on_btnRemoverProdutosTela_clicked()
{
    this->setVisible(false);
    telaRemoverProduto telaRemoverProduto(this, &lddeProdutos);
    telaRemoverProduto.exec();
    this->setVisible(true);
}

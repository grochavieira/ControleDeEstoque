#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    telaCadastroProdutos telaCadastroProdutos;
    telaCadastroProdutos.exec();
    this->setVisible(true);
}

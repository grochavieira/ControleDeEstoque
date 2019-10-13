#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "conexao.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Conexao conexao;
    conexao.abrir();
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

}

void MainWindow::on_btnRemoverProdutosTela_clicked()
{
}

void MainWindow::on_btnRemoverProdutosJanela_clicked()
{
}

void MainWindow::on_btnCadastrarProdutosTela_clicked()
{
}

void MainWindow::on_btnListaDeComprasTela_clicked()
{
}

void MainWindow::on_btnAreaDeEstoque_clicked()
{
    this->setVisible(false);
    telaLoginFuncionario telaLoginFuncionario;
    telaLoginFuncionario.exec();
    this->setVisible(true);
}

void MainWindow::on_btnAreaDoCliente_clicked()
{
    this->setVisible(false);
    TelaLoginCliente telaLoginCliente;
    telaLoginCliente.exec();
    this->setVisible(true);


}

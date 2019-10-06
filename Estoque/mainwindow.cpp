#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    TelaLoginEstoque telaLoginEstoque;
    close();
    telaLoginEstoque.exec();
}

void MainWindow::on_btnAreaDoCliente_clicked()
{
    TelaLoginCliente telaLoginCliente;
    close();
    telaLoginCliente.exec();
}

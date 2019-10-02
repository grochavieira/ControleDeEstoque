#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ldde.h"
#include <QMessageBox>
#include <QString>

LDDE<Produto> lddeProdutos;

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
    int verificador = 0;
    int idProduto = ui->spnIdProduto->value();
    QString nomeProduto = ui->txtNomeProduto->text();
    double precoProduto = ui->spnPrecoProduto->value();
    int quantidadeProduto = ui->spnQuantidadeProduto->value();
    int quantidadeMinProduto = ui->spnQuantidadeMinProduto->value();
    int quantidadeMaxProduto = ui->spnQuantidadeMaxProduto->value();

    if(lddeProdutos.Busca(idProduto) != -1){
        verificador++;
        ui->lblErroId->setText("Esse ID já foi cadastrado.");
    }

    if(nomeProduto == ""){
        verificador++;
        ui->lblErroNome->setText("Favor preencher o campo.");
    }

    if(precoProduto == 0.0){
        verificador++;
        ui->lblErroPreco->setText("Vai vender de graça é?");
    }

    if(verificador == 0){
        Produto produto(idProduto, nomeProduto, precoProduto, quantidadeProduto, quantidadeMinProduto, quantidadeMaxProduto);
        lddeProdutos.Insere(produto);
        QMessageBox::information(this, "OK", "Produto cadastrado com sucesso!");
    }
    else{
        QMessageBox::warning(this, "ERRO", "Não foi possível cadastrar o produto!");
    }

}

void MainWindow::on_spnIdProduto_editingFinished()
{
    ui->lblErroId->setText("");
}

void MainWindow::on_txtNomeProduto_editingFinished()
{
    ui->lblErroNome->setText("");
}

void MainWindow::on_spnPrecoProduto_editingFinished()
{
    ui->lblErroPreco->setText("");
}

void MainWindow::on_spnQuantidadeProduto_editingFinished()
{
    ui->spnQuantidadeMinProduto->setMaximum(ui->spnQuantidadeProduto->value() - 1);
    ui->spnQuantidadeMaxProduto->setMinimum(ui->spnQuantidadeProduto->value());
}

void MainWindow::on_btnEncontrarId_clicked()
{
    int i = 1;
    while(lddeProdutos.Busca(i) != -1){
        i++;
    }
    ui->spnIdProduto->setValue(i);
    ui->lblErroId->setText("");
}

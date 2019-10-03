#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ldde.h"
#include <QMessageBox>
#include <QString>

static LDDE<Produto> lddeProdutos;
static Produto produto;
static int idProduto;
static QString nomeProduto;
static double precoProduto;
static int quantidadeProduto;
static int quantidadeMinProduto;
static int quantidadeMaxProduto;


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
            idProduto = query.value(0).toInt();
            nomeProduto = query.value(1).toString();
            precoProduto = query.value(2).toDouble();
            quantidadeProduto = query.value(3).toInt();
            quantidadeMinProduto = query.value(4).toInt();
            quantidadeMaxProduto = query.value(5).toInt();
            produto = new Produto(idProduto, nomeProduto, precoProduto, quantidadeProduto, quantidadeMinProduto, quantidadeMaxProduto);
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
    int verificador = 0;
    idProduto = ui->spnIdProduto->value();
    nomeProduto = ui->txtNomeProduto->text();
    precoProduto = ui->spnPrecoProduto->value();
    quantidadeProduto = ui->spnQuantidadeProduto->value();
    quantidadeMinProduto = ui->spnQuantidadeMinProduto->value();
    quantidadeMaxProduto = ui->spnQuantidadeMaxProduto->value();

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
        produto = new Produto(idProduto, nomeProduto, precoProduto, quantidadeProduto, quantidadeMinProduto, quantidadeMaxProduto);
        lddeProdutos.Insere(produto);

        QSqlQuery query;
        query.prepare("insert into tb_produtos (id, nome, preco, quantidade, quantidade_minima, quantidade_maxima) values""('" + ui->spnIdProduto->text() + "','" + ui->txtNomeProduto->text() + "','" + ui->spnPrecoProduto->text() + "','" + ui->spnQuantidadeProduto->text() + "','" + ui->spnQuantidadeMinProduto->text() + "','" + ui->spnQuantidadeMaxProduto->text() + "')");
        if(query.exec()){
            qDebug() << "Produto cadastrado";
        }
        else{
            qDebug() << "Erro ao cadastrar produto";
        }
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

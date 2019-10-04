#include "telaremoverproduto.h"
#include "ui_telaremoverproduto.h"
#include <QLocale>

static LDDE<Produto> lddeProdutos;
static Produto produto;
static int idProduto;
static QString nomeProduto;
static double precoProduto;
static int quantidadeProduto;
static int quantidadeMinProduto;
static int quantidadeMaxProduto;

telaRemoverProduto::telaRemoverProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaRemoverProduto)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_produtos");
    if(query.exec()){
        int cont = 0;
        ui->twProdutos->setColumnCount(6);
        while(query.next()){
            idProduto = query.value(0).toInt();
            nomeProduto = query.value(1).toString();
            precoProduto = query.value(2).toDouble();
            quantidadeProduto = query.value(3).toInt();
            quantidadeMinProduto = query.value(4).toInt();
            quantidadeMaxProduto = query.value(5).toInt();
            produto = new Produto(idProduto, nomeProduto, precoProduto, quantidadeProduto, quantidadeMinProduto, quantidadeMaxProduto);
            lddeProdutos.Insere(produto);
            ui->twProdutos->insertRow(cont);
            ui->twProdutos->setItem(cont, 0, new QTableWidgetItem(QString::number(idProduto)));
            ui->twProdutos->setItem(cont, 1, new QTableWidgetItem(nomeProduto));
            ui->twProdutos->setItem(cont, 2, new QTableWidgetItem(precoProduto));
            ui->twProdutos->setItem(cont, 3, new QTableWidgetItem(QString::number(quantidadeProduto)));
            ui->twProdutos->setItem(cont, 4, new QTableWidgetItem(QString::number(quantidadeMinProduto)));
            ui->twProdutos->setItem(cont, 5, new QTableWidgetItem(QString::number(quantidadeMaxProduto)));
            ui->twProdutos->setRowHeight(cont, 25);
            cont++;
        }
    }
    else{
        qDebug("banco de dados falhou");
    }

    ui->twProdutos->setColumnWidth(0, 40);
    ui->twProdutos->setColumnWidth(1, 200);
    ui->twProdutos->setColumnWidth(2, 50);

    QStringList cabecalhos = {"ID", "Nome", "Preço", "Quantidade", "Quantidade Mínima", "Quantidade Máxima"};
    ui->twProdutos->setHorizontalHeaderLabels(cabecalhos);
    

    /*
    No<Produto> *NoProduto = nullptr;
    produto = lddeProdutos.Busca(NoProduto);
    int i = 0;
    while(produto.getId() != -1){
        ui->twProdutos->insertRow(i);
        ui->twProdutos->setItem(i, 0, new QTableWidgetItem(produto.getId()));
        i++;
        produto = lddeProdutos.Busca(NoProduto);
    }*/
    
}

telaRemoverProduto::~telaRemoverProduto()
{
    delete ui;
}

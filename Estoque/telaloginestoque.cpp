#include "telaloginestoque.h"
#include "ui_telaloginestoque.h"

TelaLoginEstoque::TelaLoginEstoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaLoginEstoque)
{
    ui->setupUi(this);
}

TelaLoginEstoque::~TelaLoginEstoque()
{
    delete ui;
}

void TelaLoginEstoque::on_btnEntrarEstoque_clicked()
{
    TelaGerenciaEstoque telaGerenciaEstoque;
    close();
    telaGerenciaEstoque.exec();
}

#include "telaestocaprodutos.h"
#include "ui_telaestocaprodutos.h"

telaEstocaProdutos::telaEstocaProdutos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaEstocaProdutos)
{
    ui->setupUi(this);
}

telaEstocaProdutos::~telaEstocaProdutos()
{
    delete ui;
}

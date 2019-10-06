#include "telapedidoscliente.h"
#include "ui_telapedidoscliente.h"

TelaPedidosCliente::TelaPedidosCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaPedidosCliente)
{
    ui->setupUi(this);
}

TelaPedidosCliente::~TelaPedidosCliente()
{
    delete ui;
}

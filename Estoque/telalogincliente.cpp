#include "telalogincliente.h"
#include "ui_telalogincliente.h"

TelaLoginCliente::TelaLoginCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaLoginCliente)
{
    ui->setupUi(this);
}

TelaLoginCliente::~TelaLoginCliente()
{
    delete ui;
}

void TelaLoginCliente::on_btnEntrarCliente_clicked()
{
    this->setVisible(false);
    TelaPedidosCliente telaPedidosCliente;
    telaPedidosCliente.exec();
    this->setVisible(true);
}

void TelaLoginCliente::on_btnAreaCadastroCliente_clicked()
{
    this->setVisible(false);
    TelaCadastroCliente telaCadastroCliente;
    telaCadastroCliente.exec();
    this->setVisible(true);
}

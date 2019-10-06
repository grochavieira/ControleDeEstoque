#include "telacadastrocliente.h"
#include "ui_telacadastrocliente.h"

TelaCadastroCliente::TelaCadastroCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaCadastroCliente)
{
    ui->setupUi(this);
}

TelaCadastroCliente::~TelaCadastroCliente()
{
    delete ui;
}

void TelaCadastroCliente::on_btnCadastrarCliente_clicked()
{
    close();
}

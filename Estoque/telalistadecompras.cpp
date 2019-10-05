#include "telalistadecompras.h"
#include "ui_telalistadecompras.h"

telaListaDeCompras::telaListaDeCompras(QWidget *parent, LDDE<Produto>* lddeProdutosCopia) :
    QDialog(parent),
    ui(new Ui::telaListaDeCompras)
{
    ui->setupUi(this);
}

telaListaDeCompras::~telaListaDeCompras()
{
    delete ui;
}

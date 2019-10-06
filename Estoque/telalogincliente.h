#ifndef TELALOGINCLIENTE_H
#define TELALOGINCLIENTE_H

#include "telapedidoscliente.h"
#include "telacadastrocliente.h"
#include <QDialog>

namespace Ui {
class TelaLoginCliente;
}

class TelaLoginCliente : public QDialog
{
    Q_OBJECT

public:
    explicit TelaLoginCliente(QWidget *parent = nullptr);
    ~TelaLoginCliente();

private slots:
    void on_btnEntrarCliente_clicked();

    void on_btnAreaCadastroCliente_clicked();

private:
    Ui::TelaLoginCliente *ui;
};

#endif // TELALOGINCLIENTE_H

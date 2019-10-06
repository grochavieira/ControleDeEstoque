#ifndef TELAPEDIDOSCLIENTE_H
#define TELAPEDIDOSCLIENTE_H

#include <QDialog>

namespace Ui {
class TelaPedidosCliente;
}

class TelaPedidosCliente : public QDialog
{
    Q_OBJECT

public:
    explicit TelaPedidosCliente(QWidget *parent = nullptr);
    ~TelaPedidosCliente();

private:
    Ui::TelaPedidosCliente *ui;
};

#endif // TELAPEDIDOSCLIENTE_H

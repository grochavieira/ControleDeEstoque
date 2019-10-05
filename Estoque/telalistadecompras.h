#ifndef TELALISTADECOMPRAS_H
#define TELALISTADECOMPRAS_H

#include <QDialog>
#include "ldde.h"
#include "les.h"

namespace Ui {
class telaListaDeCompras;
}

class telaListaDeCompras : public QDialog
{
    Q_OBJECT

public:
    explicit telaListaDeCompras(QWidget *parent = nullptr, LDDE<Produto>* lddeProdutos = nullptr);
    ~telaListaDeCompras();

private:
    Ui::telaListaDeCompras *ui;
};

#endif // TELALISTADECOMPRAS_H

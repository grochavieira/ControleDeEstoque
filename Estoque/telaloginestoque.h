#ifndef TELALOGINESTOQUE_H
#define TELALOGINESTOQUE_H

#include "telagerenciaestoque.h"
#include <QDialog>

namespace Ui {
class TelaLoginEstoque;
}

class TelaLoginEstoque : public QDialog
{
    Q_OBJECT

public:
    explicit TelaLoginEstoque(QWidget *parent = nullptr);
    ~TelaLoginEstoque();

private slots:
    void on_btnEntrarEstoque_clicked();

private:
    Ui::TelaLoginEstoque *ui;
};

#endif // TELALOGINESTOQUE_H

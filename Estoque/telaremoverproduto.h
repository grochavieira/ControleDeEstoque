#ifndef TELAREMOVERPRODUTO_H
#define TELAREMOVERPRODUTO_H

#include "ldde.h"
#include <QDialog>
#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QtSql>

namespace Ui {
class telaRemoverProduto;
}

class telaRemoverProduto : public QDialog
{
    Q_OBJECT

public:
    explicit telaRemoverProduto(QWidget *parent = nullptr);
    ~telaRemoverProduto();

private:
    Ui::telaRemoverProduto *ui;
};

#endif // TELAREMOVERPRODUTO_H

#ifndef TELAREMOVERPRODUTO_H
#define TELAREMOVERPRODUTO_H

#include "ldde.h"
#include <QDialog>
#include <QDebug>
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
    explicit telaRemoverProduto(QWidget *parent = nullptr, LDDE<Produto>* lddeProdutos = nullptr);
    ~telaRemoverProduto();

private slots:
    void on_btnPesquisar_clicked();

    void on_btnPesquisarTudo_clicked();

    void on_btnExcluir_clicked();

private:
    Ui::telaRemoverProduto *ui;
};

#endif // TELAREMOVERPRODUTO_H

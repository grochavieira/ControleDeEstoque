#ifndef TELACADASTROPRODUTOS_H
#define TELACADASTROPRODUTOS_H

#include "ldde.h"
#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QtSql>

namespace Ui {
class telaCadastroProdutos;
}

class telaCadastroProdutos : public QDialog
{
    Q_OBJECT

public:
    explicit telaCadastroProdutos(QWidget *parent = nullptr, LDDE<Produto>* lddeProdutos = nullptr);
    ~telaCadastroProdutos();

private slots:
    void on_btnCadastrarProduto_clicked();

    void on_btnEncontrarId_clicked();

    void on_spnQuantidadeProduto_editingFinished();

    void on_spnIdProduto_editingFinished();

    void on_txtNomeProduto_editingFinished();

    void on_spnPrecoProduto_editingFinished();

private:
    Ui::telaCadastroProdutos *ui;
};

#endif // TELACADASTROPRODUTOS_H

#ifndef TELAESTOCAPRODUTOS_H
#define TELAESTOCAPRODUTOS_H

#include "pilha.h"
#include "les.h"
#include "produto.h"
#include "ldde.h"
#include <QDialog>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class telaEstocaProdutos;
}

class telaEstocaProdutos : public QDialog
{
    Q_OBJECT

public:
    explicit telaEstocaProdutos(QWidget *parent = nullptr, LES<Produto> *listaDePrioridade = nullptr, LDDE<Produto> *lddeProdutos = nullptr);
    ~telaEstocaProdutos();

private slots:
    void on_buttonEnviaProduto_clicked();

    void on_buttonEnviaTudo_clicked();

    void on_buttonEnviaCaminhao_clicked();

private:
    Ui::telaEstocaProdutos *ui;
};

#endif // TELAESTOCAPRODUTOS_H

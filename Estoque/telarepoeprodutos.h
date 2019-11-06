#ifndef TELAREPOEPRODUTOS_H
#define TELAREPOEPRODUTOS_H

#include "produto.h"
#include "pilha.h"
#include "les.h"
#include "produto.h"
#include "ldde.h"
#include <QDialog>
#include <QMessageBox>
#include <QCloseEvent>

namespace Ui
{
class TelaRepoeProdutos;
}

class TelaRepoeProdutos : public QDialog
{
    Q_OBJECT

public:
    explicit TelaRepoeProdutos(QWidget *parent = nullptr, PILHA<Produto> *pilha = nullptr, LDDE<Produto> *ldde = nullptr);
    ~TelaRepoeProdutos();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_btnEnviarEstoque_clicked();

    void on_btnConcluirDescarga_clicked();

    void on_btnEnviarTudoEstoque_clicked();

private:
    Ui::TelaRepoeProdutos *ui;
};

#endif // TELAREPOEPRODUTOS_H

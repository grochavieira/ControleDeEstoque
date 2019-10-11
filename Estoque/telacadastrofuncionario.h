#ifndef TELACADASTROFUNCIONARIO_H
#define TELACADASTROFUNCIONARIO_H

#include "telaloginfuncionario.h"
#include "ldde.h"
#include <QDialog>

namespace Ui {
class telaCadastroFuncionario;
}

class telaCadastroFuncionario : public QDialog
{
    Q_OBJECT

public:
    explicit telaCadastroFuncionario(QWidget *parent = nullptr, LDDE<Funcionario>* lddeFuncionarios = nullptr);
    ~telaCadastroFuncionario();

private slots:
    void on_btnCadastrarFuncionario_clicked();

private:
    Ui::telaCadastroFuncionario *ui;
};

#endif // TELACADASTROFUNCIONARIO_H

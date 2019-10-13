#ifndef TELALOGINFUNCIONARIO_H
#define TELALOGINFUNCIONARIO_H

#include "telagerenciaestoque.h"
#include "telacadastrofuncionario.h"
#include "ldde.h"
#include <QDialog>

namespace Ui {
class telaLoginFuncionario;
}

class telaLoginFuncionario : public QDialog
{
    Q_OBJECT

public:
    explicit telaLoginFuncionario(QWidget *parent = nullptr);
    ~telaLoginFuncionario();

private slots:
    void on_btnEntrarFuncionario_clicked();

    void on_btnCadastrarNovoFuncionario_clicked();

    void on_pushButton_clicked();

private:
    Ui::telaLoginFuncionario *ui;
};

#endif // TELALOGINFUNCIONARIO_H

#ifndef TELACADASTROCLIENTE_H
#define TELACADASTROCLIENTE_H

#include "telalogincliente.h"
#include "ldde.h"
#include <QDialog>

namespace Ui
{
class TelaCadastroCliente;
}

class TelaCadastroCliente : public QDialog
{
    Q_OBJECT

public:
    explicit TelaCadastroCliente(QWidget *parent = nullptr, LDDE<Cliente> *lddeClientes = nullptr);
    ~TelaCadastroCliente();

private slots:
    void on_btnCadastrarCliente_clicked();

    void on_txtNomeCliente_editingFinished();

    void on_txtEmailCliente_editingFinished();

    void on_txtTelefoneCliente_editingFinished();

    void on_txtCepCliente_editingFinished();

    void on_spnNumEnderecoCliente_editingFinished();

    void on_txtUsuarioCliente_editingFinished();

    void on_txtSenhaCliente_editingFinished();

    void on_txtConfirmarSenhaCliente_editingFinished();

private:
    Ui::TelaCadastroCliente *ui;
};

#endif // TELACADASTROCLIENTE_H

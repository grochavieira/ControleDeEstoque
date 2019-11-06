#ifndef TELAGERENCIAESTOQUE_H
#define TELAGERENCIAESTOQUE_H

#include "ldde.h"
#include "les.h"
#include "fila.h"
#include "conexao.h"
#include "pilha.h"
#include "telaestocaprodutos.h"
#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>
#include <QMessageBox>
#include <QString>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QTreeWidgetItem>
#include <QSplashScreen>
#include <QTimer>

namespace Ui
{
class TelaGerenciaEstoque;
}

class TelaGerenciaEstoque : public QDialog
{
    Q_OBJECT

public:
    explicit TelaGerenciaEstoque(QWidget *parent = nullptr);
    ~TelaGerenciaEstoque();

private slots:
    void on_btnCadastrarProduto_clicked();

    void on_btnEncontrarId_clicked();

    void on_spnQuantidadeProduto_editingFinished();

    void on_spnIdProduto_editingFinished();

    void on_txtNomeProduto_editingFinished();

    void on_spnPrecoProduto_editingFinished();

    void on_btnPesquisar_clicked();

    void on_tabCadastrarProdutos_tabBarClicked(int index);

    void on_btnExcluir_clicked();

    void on_btnListarTodosProdutos_clicked();

    void on_tabGerenciadorDeEstoque_tabBarClicked(int index);

    void on_twListaDeCompras_cellActivated(int row, int column);

    void AddRoot();

    void AddChild(QTreeWidgetItem *parent);

    void on_pushButton_clicked();

    void on_btnEntregarPedido_clicked();

    void on_btnEnviarPedido_clicked();

    void on_btnReporEstoque_clicked();

private:
    Ui::TelaGerenciaEstoque *ui;
};

#endif // TELAGERENCIAESTOQUE_H

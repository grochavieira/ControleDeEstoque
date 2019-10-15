#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ldde.h"
#include "telaloginfuncionario.h"
#include "telalogincliente.h"
#include <QMainWindow>
#include <QFileInfo>
#include <QSystemTrayIcon> //.h

class QComboBox; //.h

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCadastrarProduto_clicked();

    void on_spnIdProduto_editingFinished();

    void on_txtNomeProduto_editingFinished();

    void on_spnPrecoProduto_editingFinished();

    void on_spnQuantidadeProduto_editingFinished();

    void on_btnEncontrarId_clicked();

    void on_btnCadastrarProdutosJanela_clicked();

    void on_btnRemoverProdutosTela_clicked();

    void on_btnRemoverProdutosJanela_clicked();

    void on_btnCadastrarProdutosTela_clicked();

    void on_btnListaDeComprasTela_clicked();

    void on_btnAreaDeEstoque_clicked();

    void on_btnAreaDoCliente_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_iconDisplay_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

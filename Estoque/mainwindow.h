#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ldde.h"
#include "telacadastroprodutos.h"
#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>
#include <QMessageBox>
#include <QString>

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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

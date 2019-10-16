#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "conexao.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , trayIcon(new QSystemTrayIcon(this))
{

    // Tray icon menu
    auto menu = this->createMenu();
    this->trayIcon->setContextMenu(menu);

    // App icon
    auto appIcon = QIcon(":/src/fox2.png");
    this->trayIcon->setIcon(appIcon);
    this->setWindowIcon(appIcon);

    // Displaying the tray icon
    this->trayIcon->show();     // Note: without explicitly calling show(), QSystemTrayIcon::activated signal will never be emitted!

    //Interaction
    connect(trayIcon, &QSystemTrayIcon::activated, this, &MainWindow::iconActivated);


    ui->setupUi(this);
    Conexao conexao;
    conexao.abrir();



}
//------added
QMenu* MainWindow::createMenu()
{
  // App can exit via Quit menu
  auto quitAction = new QAction("&Quit", this);
  connect(quitAction, &QAction::triggered, qApp, &QCoreApplication::quit);

  auto menu = new QMenu(this);
  menu->addAction(quitAction);

  return menu;
}

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason_)
{
  switch (reason_) {
  case QSystemTrayIcon::Trigger:
    this->trayIcon->showMessage("Hello", "You clicked me!");
    break;
  default:
    ;
  }
}
//-----added


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCadastrarProduto_clicked()
{


}

void MainWindow::on_spnIdProduto_editingFinished()
{

}

void MainWindow::on_txtNomeProduto_editingFinished()
{

}

void MainWindow::on_spnPrecoProduto_editingFinished()
{

}

void MainWindow::on_spnQuantidadeProduto_editingFinished()
{

}

void MainWindow::on_btnEncontrarId_clicked()
{

}

void MainWindow::on_btnCadastrarProdutosJanela_clicked()
{

}

void MainWindow::on_btnRemoverProdutosTela_clicked()
{
}

void MainWindow::on_btnRemoverProdutosJanela_clicked()
{
}

void MainWindow::on_btnCadastrarProdutosTela_clicked()
{
}

void MainWindow::on_btnListaDeComprasTela_clicked()
{
}

void MainWindow::on_btnAreaDeEstoque_clicked()
{
    this->setVisible(false);
    telaLoginFuncionario telaLoginFuncionario;
    telaLoginFuncionario.exec();
    this->setVisible(true);
}

void MainWindow::on_btnAreaDoCliente_clicked()
{
    this->setVisible(false);
    TelaLoginCliente telaLoginCliente;
    telaLoginCliente.exec();
    this->setVisible(true);


}

void MainWindow::on_pushButton_clicked()
{
    this->setVisible(false);
    TelaGerenciaEstoque TelaGerenciaEstoque;
    TelaGerenciaEstoque.exec();
    this->setVisible(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    this->setVisible(false);
    TelaPedidosCliente TelaPedidos;
    TelaPedidos.exec();
    this->setVisible(true);
}

void MainWindow::on_iconDisplay_clicked()
{
}

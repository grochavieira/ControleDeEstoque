/********************************************************************************
** Form generated from reading UI file 'telapedidoscliente.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPEDIDOSCLIENTE_H
#define UI_TELAPEDIDOSCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPedidosCliente
{
public:
    QTabWidget *tabPedidosDoCliente;
    QWidget *tabProd;
    QTableWidget *twCompraCliente;
    QPushButton *buttonAdiciona;
    QPushButton *buttonListar;
    QPushButton *buttonPesquisar;
    QLabel *label;
    QLineEdit *txtPesquisar;
    QSpinBox *spnQuantidade;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *tabComp;
    QTableWidget *twPedidosCliente;
    QPushButton *btnConfirmarPedido;
    QPushButton *btnExcluirPedido;
    QLabel *label_3;
    QWidget *tabStatusPedidos;
    QLabel *label_6;
    QTableWidget *twStatusPedidosCliente;
    QLabel *label_2;
    QLabel *lblNomeCliente;

    void setupUi(QDialog *TelaPedidosCliente)
    {
        if (TelaPedidosCliente->objectName().isEmpty())
            TelaPedidosCliente->setObjectName(QString::fromUtf8("TelaPedidosCliente"));
        TelaPedidosCliente->resize(800, 600);
        TelaPedidosCliente->setMinimumSize(QSize(800, 600));
        TelaPedidosCliente->setMaximumSize(QSize(800, 600));
        tabPedidosDoCliente = new QTabWidget(TelaPedidosCliente);
        tabPedidosDoCliente->setObjectName(QString::fromUtf8("tabPedidosDoCliente"));
        tabPedidosDoCliente->setGeometry(QRect(10, 10, 771, 541));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(13);
        tabPedidosDoCliente->setFont(font);
        tabProd = new QWidget();
        tabProd->setObjectName(QString::fromUtf8("tabProd"));
        twCompraCliente = new QTableWidget(tabProd);
        twCompraCliente->setObjectName(QString::fromUtf8("twCompraCliente"));
        twCompraCliente->setGeometry(QRect(180, 40, 401, 341));
        QFont font1;
        font1.setPointSize(12);
        twCompraCliente->setFont(font1);
        twCompraCliente->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        buttonAdiciona = new QPushButton(tabProd);
        buttonAdiciona->setObjectName(QString::fromUtf8("buttonAdiciona"));
        buttonAdiciona->setGeometry(QRect(220, 390, 321, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Caviar Dreams"));
        font2.setPointSize(10);
        buttonAdiciona->setFont(font2);
        buttonAdiciona->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:3px;\n"
"	border-color: white;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:4px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        buttonListar = new QPushButton(tabProd);
        buttonListar->setObjectName(QString::fromUtf8("buttonListar"));
        buttonListar->setGeometry(QRect(590, 10, 151, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Caviar Dreams"));
        font3.setPointSize(9);
        buttonListar->setFont(font3);
        buttonListar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:3px;\n"
"	border-color: white;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:4px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        buttonPesquisar = new QPushButton(tabProd);
        buttonPesquisar->setObjectName(QString::fromUtf8("buttonPesquisar"));
        buttonPesquisar->setGeometry(QRect(440, 10, 121, 21));
        buttonPesquisar->setFont(font2);
        buttonPesquisar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:3px;\n"
"	border-color: white;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:4px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        label = new QLabel(tabProd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 21));
        label->setFont(font2);
        txtPesquisar = new QLineEdit(tabProd);
        txtPesquisar->setObjectName(QString::fromUtf8("txtPesquisar"));
        txtPesquisar->setGeometry(QRect(140, 10, 291, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(10);
        txtPesquisar->setFont(font4);
        spnQuantidade = new QSpinBox(tabProd);
        spnQuantidade->setObjectName(QString::fromUtf8("spnQuantidade"));
        spnQuantidade->setGeometry(QRect(380, 440, 91, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Caviar Dreams"));
        font5.setPointSize(14);
        spnQuantidade->setFont(font5);
        spnQuantidade->setMaximum(99999);
        label_4 = new QLabel(tabProd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-10, 0, 791, 521));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Gerencia 1.png")));
        label_5 = new QLabel(tabProd);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 440, 91, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font6.setPointSize(12);
        label_5->setFont(font6);
        tabPedidosDoCliente->addTab(tabProd, QString());
        label_4->raise();
        twCompraCliente->raise();
        buttonAdiciona->raise();
        buttonListar->raise();
        buttonPesquisar->raise();
        label->raise();
        txtPesquisar->raise();
        spnQuantidade->raise();
        label_5->raise();
        tabComp = new QWidget();
        tabComp->setObjectName(QString::fromUtf8("tabComp"));
        twPedidosCliente = new QTableWidget(tabComp);
        twPedidosCliente->setObjectName(QString::fromUtf8("twPedidosCliente"));
        twPedidosCliente->setGeometry(QRect(110, 20, 551, 391));
        twPedidosCliente->setFont(font1);
        twPedidosCliente->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        btnConfirmarPedido = new QPushButton(tabComp);
        btnConfirmarPedido->setObjectName(QString::fromUtf8("btnConfirmarPedido"));
        btnConfirmarPedido->setGeometry(QRect(389, 420, 271, 41));
        btnConfirmarPedido->setFont(font2);
        btnConfirmarPedido->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:3px;\n"
"	border-color: white;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:4px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        btnExcluirPedido = new QPushButton(tabComp);
        btnExcluirPedido->setObjectName(QString::fromUtf8("btnExcluirPedido"));
        btnExcluirPedido->setGeometry(QRect(111, 420, 271, 41));
        btnExcluirPedido->setFont(font2);
        btnExcluirPedido->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:3px;\n"
"	border-color: white;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:4px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        label_3 = new QLabel(tabComp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-1, -1, 781, 521));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Pedidos.png")));
        label_3->setScaledContents(true);
        tabPedidosDoCliente->addTab(tabComp, QString());
        label_3->raise();
        twPedidosCliente->raise();
        btnConfirmarPedido->raise();
        btnExcluirPedido->raise();
        tabStatusPedidos = new QWidget();
        tabStatusPedidos->setObjectName(QString::fromUtf8("tabStatusPedidos"));
        label_6 = new QLabel(tabStatusPedidos);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-10, -10, 781, 521));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Pedidos.png")));
        label_6->setScaledContents(true);
        twStatusPedidosCliente = new QTableWidget(tabStatusPedidos);
        twStatusPedidosCliente->setObjectName(QString::fromUtf8("twStatusPedidosCliente"));
        twStatusPedidosCliente->setGeometry(QRect(10, 20, 741, 461));
        twStatusPedidosCliente->setFont(font1);
        twStatusPedidosCliente->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        tabPedidosDoCliente->addTab(tabStatusPedidos, QString());
        label_2 = new QLabel(TelaPedidosCliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-11, 0, 811, 600));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Gerencia 1.png")));
        lblNomeCliente = new QLabel(TelaPedidosCliente);
        lblNomeCliente->setObjectName(QString::fromUtf8("lblNomeCliente"));
        lblNomeCliente->setGeometry(QRect(440, 10, 341, 21));
        QFont font7;
        font7.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font7.setPointSize(14);
        lblNomeCliente->setFont(font7);
        lblNomeCliente->setStyleSheet(QString::fromUtf8("color: \"black\";\n"
""));
        label_2->raise();
        tabPedidosDoCliente->raise();
        lblNomeCliente->raise();
        QWidget::setTabOrder(txtPesquisar, buttonPesquisar);
        QWidget::setTabOrder(buttonPesquisar, buttonListar);
        QWidget::setTabOrder(buttonListar, twCompraCliente);
        QWidget::setTabOrder(twCompraCliente, buttonAdiciona);
        QWidget::setTabOrder(buttonAdiciona, spnQuantidade);
        QWidget::setTabOrder(spnQuantidade, twPedidosCliente);
        QWidget::setTabOrder(twPedidosCliente, btnExcluirPedido);
        QWidget::setTabOrder(btnExcluirPedido, btnConfirmarPedido);
        QWidget::setTabOrder(btnConfirmarPedido, twStatusPedidosCliente);
        QWidget::setTabOrder(twStatusPedidosCliente, tabPedidosDoCliente);

        retranslateUi(TelaPedidosCliente);

        tabPedidosDoCliente->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TelaPedidosCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaPedidosCliente)
    {
        TelaPedidosCliente->setWindowTitle(QCoreApplication::translate("TelaPedidosCliente", "Dialog", nullptr));
        buttonAdiciona->setText(QCoreApplication::translate("TelaPedidosCliente", "ADICIONAR PRODUTO A CESTA DE COMPRAS", nullptr));
        buttonListar->setText(QCoreApplication::translate("TelaPedidosCliente", "Listar todos os produtos", nullptr));
        buttonPesquisar->setText(QCoreApplication::translate("TelaPedidosCliente", "Pesquisar", nullptr));
        label->setText(QCoreApplication::translate("TelaPedidosCliente", "Pesquisar Produto:", nullptr));
        txtPesquisar->setPlaceholderText(QCoreApplication::translate("TelaPedidosCliente", "Digite o nome do produto", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("TelaPedidosCliente", "Quantidade:", nullptr));
        tabPedidosDoCliente->setTabText(tabPedidosDoCliente->indexOf(tabProd), QCoreApplication::translate("TelaPedidosCliente", "Produtos", nullptr));
        btnConfirmarPedido->setText(QCoreApplication::translate("TelaPedidosCliente", "CONFIRMAR PEDIDO DE COMPRAS", nullptr));
        btnExcluirPedido->setText(QCoreApplication::translate("TelaPedidosCliente", "EXCLUIR PEDIDO", nullptr));
        label_3->setText(QString());
        tabPedidosDoCliente->setTabText(tabPedidosDoCliente->indexOf(tabComp), QCoreApplication::translate("TelaPedidosCliente", "Cesta de Compras", nullptr));
        label_6->setText(QString());
        tabPedidosDoCliente->setTabText(tabPedidosDoCliente->indexOf(tabStatusPedidos), QCoreApplication::translate("TelaPedidosCliente", "Status dos Pedidos", nullptr));
        label_2->setText(QString());
        lblNomeCliente->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaPedidosCliente: public Ui_TelaPedidosCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPEDIDOSCLIENTE_H

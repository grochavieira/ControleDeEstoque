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
    QTabWidget *tabWidget;
    QWidget *tabProd;
    QTableWidget *twCompraCliente;
    QPushButton *buttonAdiciona;
    QPushButton *buttonListar;
    QPushButton *buttonPesquisar;
    QLabel *label;
    QLineEdit *txtPesquisar;
    QSpinBox *spnQuantidade;
    QLabel *label_4;
    QWidget *tabComp;
    QTableWidget *twPedidosCliente;
    QPushButton *buttonConfirma;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *TelaPedidosCliente)
    {
        if (TelaPedidosCliente->objectName().isEmpty())
            TelaPedidosCliente->setObjectName(QString::fromUtf8("TelaPedidosCliente"));
        TelaPedidosCliente->resize(800, 600);
        TelaPedidosCliente->setMinimumSize(QSize(800, 600));
        TelaPedidosCliente->setMaximumSize(QSize(800, 600));
        tabWidget = new QTabWidget(TelaPedidosCliente);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 771, 541));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(13);
        tabWidget->setFont(font);
        tabProd = new QWidget();
        tabProd->setObjectName(QString::fromUtf8("tabProd"));
        twCompraCliente = new QTableWidget(tabProd);
        twCompraCliente->setObjectName(QString::fromUtf8("twCompraCliente"));
        twCompraCliente->setGeometry(QRect(10, 40, 751, 301));
        buttonAdiciona = new QPushButton(tabProd);
        buttonAdiciona->setObjectName(QString::fromUtf8("buttonAdiciona"));
        buttonAdiciona->setGeometry(QRect(90, 370, 181, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Caviar Dreams"));
        font1.setPointSize(10);
        buttonAdiciona->setFont(font1);
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
        QFont font2;
        font2.setFamily(QString::fromUtf8("Caviar Dreams"));
        font2.setPointSize(9);
        buttonListar->setFont(font2);
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
        buttonPesquisar->setFont(font1);
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
        label->setFont(font1);
        txtPesquisar = new QLineEdit(tabProd);
        txtPesquisar->setObjectName(QString::fromUtf8("txtPesquisar"));
        txtPesquisar->setGeometry(QRect(140, 10, 291, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Caviar Dreams"));
        font3.setPointSize(12);
        txtPesquisar->setFont(font3);
        spnQuantidade = new QSpinBox(tabProd);
        spnQuantidade->setObjectName(QString::fromUtf8("spnQuantidade"));
        spnQuantidade->setGeometry(QRect(290, 370, 111, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Caviar Dreams"));
        font4.setPointSize(14);
        spnQuantidade->setFont(font4);
        label_4 = new QLabel(tabProd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 781, 521));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Gerencia 1.png")));
        tabWidget->addTab(tabProd, QString());
        label_4->raise();
        twCompraCliente->raise();
        buttonAdiciona->raise();
        buttonListar->raise();
        buttonPesquisar->raise();
        label->raise();
        txtPesquisar->raise();
        spnQuantidade->raise();
        tabComp = new QWidget();
        tabComp->setObjectName(QString::fromUtf8("tabComp"));
        twPedidosCliente = new QTableWidget(tabComp);
        twPedidosCliente->setObjectName(QString::fromUtf8("twPedidosCliente"));
        twPedidosCliente->setGeometry(QRect(10, 20, 551, 191));
        buttonConfirma = new QPushButton(tabComp);
        buttonConfirma->setObjectName(QString::fromUtf8("buttonConfirma"));
        buttonConfirma->setGeometry(QRect(380, 230, 181, 51));
        buttonConfirma->setFont(font1);
        buttonConfirma->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton = new QPushButton(tabComp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 230, 211, 51));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        tabWidget->addTab(tabComp, QString());
        label_3->raise();
        twPedidosCliente->raise();
        buttonConfirma->raise();
        pushButton->raise();
        label_2 = new QLabel(TelaPedidosCliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 800, 600));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Gerencia 1.png")));
        label_2->raise();
        tabWidget->raise();

        retranslateUi(TelaPedidosCliente);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TelaPedidosCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaPedidosCliente)
    {
        TelaPedidosCliente->setWindowTitle(QCoreApplication::translate("TelaPedidosCliente", "Dialog", nullptr));
        buttonAdiciona->setText(QCoreApplication::translate("TelaPedidosCliente", "Adicionar Produto a Compras", nullptr));
        buttonListar->setText(QCoreApplication::translate("TelaPedidosCliente", "Listar todos os produtos", nullptr));
        buttonPesquisar->setText(QCoreApplication::translate("TelaPedidosCliente", "Pesquisar", nullptr));
        label->setText(QCoreApplication::translate("TelaPedidosCliente", "Pesquisar Produto:", nullptr));
        txtPesquisar->setPlaceholderText(QCoreApplication::translate("TelaPedidosCliente", "Digite o nome do produto", nullptr));
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabProd), QCoreApplication::translate("TelaPedidosCliente", "Produtos", nullptr));
        buttonConfirma->setText(QCoreApplication::translate("TelaPedidosCliente", "Confirmar pedido de compras", nullptr));
        pushButton->setText(QCoreApplication::translate("TelaPedidosCliente", "Excluir pedido de minhas compras", nullptr));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabComp), QCoreApplication::translate("TelaPedidosCliente", "Compras", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaPedidosCliente: public Ui_TelaPedidosCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPEDIDOSCLIENTE_H

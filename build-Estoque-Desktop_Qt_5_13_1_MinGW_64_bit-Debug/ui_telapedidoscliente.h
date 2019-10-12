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
    QWidget *tab;
    QTableWidget *twCompraCliente;
    QPushButton *buttonAdiciona;
    QPushButton *buttonListar;
    QPushButton *buttonPesquisar;
    QLabel *label;
    QLineEdit *txtPesquisar;
    QSpinBox *spnQuantidade;
    QWidget *tab_2;
    QTableWidget *twPedidosCliente;
    QPushButton *buttonConfirma;
    QPushButton *pushButton;

    void setupUi(QDialog *TelaPedidosCliente)
    {
        if (TelaPedidosCliente->objectName().isEmpty())
            TelaPedidosCliente->setObjectName(QString::fromUtf8("TelaPedidosCliente"));
        TelaPedidosCliente->resize(621, 350);
        tabWidget = new QTabWidget(TelaPedidosCliente);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 591, 331));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        twCompraCliente = new QTableWidget(tab);
        twCompraCliente->setObjectName(QString::fromUtf8("twCompraCliente"));
        twCompraCliente->setGeometry(QRect(10, 40, 401, 241));
        buttonAdiciona = new QPushButton(tab);
        buttonAdiciona->setObjectName(QString::fromUtf8("buttonAdiciona"));
        buttonAdiciona->setGeometry(QRect(420, 230, 161, 51));
        buttonListar = new QPushButton(tab);
        buttonListar->setObjectName(QString::fromUtf8("buttonListar"));
        buttonListar->setGeometry(QRect(420, 70, 161, 41));
        buttonPesquisar = new QPushButton(tab);
        buttonPesquisar->setObjectName(QString::fromUtf8("buttonPesquisar"));
        buttonPesquisar->setGeometry(QRect(420, 10, 161, 41));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 101, 21));
        txtPesquisar = new QLineEdit(tab);
        txtPesquisar->setObjectName(QString::fromUtf8("txtPesquisar"));
        txtPesquisar->setGeometry(QRect(120, 10, 291, 20));
        spnQuantidade = new QSpinBox(tab);
        spnQuantidade->setObjectName(QString::fromUtf8("spnQuantidade"));
        spnQuantidade->setGeometry(QRect(420, 190, 71, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        twPedidosCliente = new QTableWidget(tab_2);
        twPedidosCliente->setObjectName(QString::fromUtf8("twPedidosCliente"));
        twPedidosCliente->setGeometry(QRect(10, 20, 551, 191));
        buttonConfirma = new QPushButton(tab_2);
        buttonConfirma->setObjectName(QString::fromUtf8("buttonConfirma"));
        buttonConfirma->setGeometry(QRect(360, 230, 181, 51));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 230, 181, 51));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(TelaPedidosCliente);

        tabWidget->setCurrentIndex(1);


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
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("TelaPedidosCliente", "Produtos", nullptr));
        buttonConfirma->setText(QCoreApplication::translate("TelaPedidosCliente", "Confirmar pedido de compras", nullptr));
        pushButton->setText(QCoreApplication::translate("TelaPedidosCliente", "Excluir pedido de minhas compras", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("TelaPedidosCliente", "Compras", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPedidosCliente: public Ui_TelaPedidosCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPEDIDOSCLIENTE_H

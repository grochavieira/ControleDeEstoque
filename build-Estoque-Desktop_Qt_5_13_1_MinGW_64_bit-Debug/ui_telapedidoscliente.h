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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPedidosCliente
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

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
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(TelaPedidosCliente);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TelaPedidosCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaPedidosCliente)
    {
        TelaPedidosCliente->setWindowTitle(QCoreApplication::translate("TelaPedidosCliente", "Dialog", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("TelaPedidosCliente", "Produtos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("TelaPedidosCliente", "Compras", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPedidosCliente: public Ui_TelaPedidosCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPEDIDOSCLIENTE_H

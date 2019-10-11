/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblErroId;
    QLabel *lblErroNome;
    QLabel *lblErroPreco;
    QPushButton *btnEncontrarId;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spnIdProduto;
    QLineEdit *txtNomeProduto;
    QDoubleSpinBox *spnPrecoProduto;
    QSpinBox *spnQuantidadeProduto;
    QSpinBox *spnQuantidadeMinProduto;
    QSpinBox *spnQuantidadeMaxProduto;
    QPushButton *btnCadastrarProduto;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(600, 400));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblErroId = new QLabel(centralwidget);
        lblErroId->setObjectName(QString::fromUtf8("lblErroId"));
        lblErroId->setGeometry(QRect(390, 40, 161, 16));
        lblErroId->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
""));
        lblErroNome = new QLabel(centralwidget);
        lblErroNome->setObjectName(QString::fromUtf8("lblErroNome"));
        lblErroNome->setGeometry(QRect(390, 70, 161, 16));
        lblErroNome->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
""));
        lblErroPreco = new QLabel(centralwidget);
        lblErroPreco->setObjectName(QString::fromUtf8("lblErroPreco"));
        lblErroPreco->setGeometry(QRect(390, 100, 161, 16));
        lblErroPreco->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
""));
        btnEncontrarId = new QPushButton(centralwidget);
        btnEncontrarId->setObjectName(QString::fromUtf8("btnEncontrarId"));
        btnEncontrarId->setGeometry(QRect(20, 30, 131, 21));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 30, 221, 229));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        spnIdProduto = new QSpinBox(widget);
        spnIdProduto->setObjectName(QString::fromUtf8("spnIdProduto"));
        spnIdProduto->setReadOnly(false);
        spnIdProduto->setMinimum(1);
        spnIdProduto->setMaximum(999999);

        verticalLayout_2->addWidget(spnIdProduto);

        txtNomeProduto = new QLineEdit(widget);
        txtNomeProduto->setObjectName(QString::fromUtf8("txtNomeProduto"));
        txtNomeProduto->setMaxLength(30);

        verticalLayout_2->addWidget(txtNomeProduto);

        spnPrecoProduto = new QDoubleSpinBox(widget);
        spnPrecoProduto->setObjectName(QString::fromUtf8("spnPrecoProduto"));
        spnPrecoProduto->setMaximum(9999.989999999999782);

        verticalLayout_2->addWidget(spnPrecoProduto);

        spnQuantidadeProduto = new QSpinBox(widget);
        spnQuantidadeProduto->setObjectName(QString::fromUtf8("spnQuantidadeProduto"));
        spnQuantidadeProduto->setMinimum(1);
        spnQuantidadeProduto->setMaximum(999999);

        verticalLayout_2->addWidget(spnQuantidadeProduto);

        spnQuantidadeMinProduto = new QSpinBox(widget);
        spnQuantidadeMinProduto->setObjectName(QString::fromUtf8("spnQuantidadeMinProduto"));
        spnQuantidadeMinProduto->setMinimum(0);
        spnQuantidadeMinProduto->setMaximum(0);
        spnQuantidadeMinProduto->setValue(0);

        verticalLayout_2->addWidget(spnQuantidadeMinProduto);

        spnQuantidadeMaxProduto = new QSpinBox(widget);
        spnQuantidadeMaxProduto->setObjectName(QString::fromUtf8("spnQuantidadeMaxProduto"));
        spnQuantidadeMaxProduto->setMinimum(1);
        spnQuantidadeMaxProduto->setMaximum(999999);

        verticalLayout_2->addWidget(spnQuantidadeMaxProduto);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        btnCadastrarProduto = new QPushButton(widget);
        btnCadastrarProduto->setObjectName(QString::fromUtf8("btnCadastrarProduto"));

        verticalLayout_3->addWidget(btnCadastrarProduto);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblErroId->setText(QString());
        lblErroNome->setText(QString());
        lblErroPreco->setText(QString());
        btnEncontrarId->setText(QCoreApplication::translate("MainWindow", "Encontrar ID dispon\303\255vel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Pre\303\247o:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Quantidade:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Quantidade M\303\255nima:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Quantidade M\303\241xima:", nullptr));
        btnCadastrarProduto->setText(QCoreApplication::translate("MainWindow", "CADASTRAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

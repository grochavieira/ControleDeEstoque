/********************************************************************************
** Form generated from reading UI file 'telalogincliente.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALOGINCLIENTE_H
#define UI_TELALOGINCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaLoginCliente
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtUsuarioCliente;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *txtSenhaCliente;
    QPushButton *btnEntrarCliente;
    QPushButton *btnAreaCadastroCliente;

    void setupUi(QDialog *TelaLoginCliente)
    {
        if (TelaLoginCliente->objectName().isEmpty())
            TelaLoginCliente->setObjectName(QString::fromUtf8("TelaLoginCliente"));
        TelaLoginCliente->resize(334, 209);
        layoutWidget = new QWidget(TelaLoginCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 251, 85));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txtUsuarioCliente = new QLineEdit(layoutWidget);
        txtUsuarioCliente->setObjectName(QString::fromUtf8("txtUsuarioCliente"));

        horizontalLayout->addWidget(txtUsuarioCliente);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        txtSenhaCliente = new QLineEdit(layoutWidget);
        txtSenhaCliente->setObjectName(QString::fromUtf8("txtSenhaCliente"));
        txtSenhaCliente->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txtSenhaCliente);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        btnEntrarCliente = new QPushButton(layoutWidget);
        btnEntrarCliente->setObjectName(QString::fromUtf8("btnEntrarCliente"));

        verticalLayout_2->addWidget(btnEntrarCliente);

        btnAreaCadastroCliente = new QPushButton(TelaLoginCliente);
        btnAreaCadastroCliente->setObjectName(QString::fromUtf8("btnAreaCadastroCliente"));
        btnAreaCadastroCliente->setGeometry(QRect(40, 150, 249, 21));
        QWidget::setTabOrder(txtUsuarioCliente, txtSenhaCliente);
        QWidget::setTabOrder(txtSenhaCliente, btnEntrarCliente);
        QWidget::setTabOrder(btnEntrarCliente, btnAreaCadastroCliente);

        retranslateUi(TelaLoginCliente);

        QMetaObject::connectSlotsByName(TelaLoginCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaLoginCliente)
    {
        TelaLoginCliente->setWindowTitle(QCoreApplication::translate("TelaLoginCliente", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TelaLoginCliente", "Usu\303\241rio:", nullptr));
        label_2->setText(QCoreApplication::translate("TelaLoginCliente", "Senha:", nullptr));
        btnEntrarCliente->setText(QCoreApplication::translate("TelaLoginCliente", "ENTRAR", nullptr));
        btnAreaCadastroCliente->setText(QCoreApplication::translate("TelaLoginCliente", "SEM CADASTRO?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaLoginCliente: public Ui_TelaLoginCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGINCLIENTE_H

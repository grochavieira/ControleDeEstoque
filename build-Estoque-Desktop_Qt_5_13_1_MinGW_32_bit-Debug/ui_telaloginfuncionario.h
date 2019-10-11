/********************************************************************************
** Form generated from reading UI file 'telaloginfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALOGINFUNCIONARIO_H
#define UI_TELALOGINFUNCIONARIO_H

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

class Ui_telaLoginFuncionario
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtUsuarioFuncionario;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *txtSenhaFuncionario;
    QPushButton *btnEntrarFuncionario;
    QPushButton *btnCadastrarNovoFuncionario;

    void setupUi(QDialog *telaLoginFuncionario)
    {
        if (telaLoginFuncionario->objectName().isEmpty())
            telaLoginFuncionario->setObjectName(QString::fromUtf8("telaLoginFuncionario"));
        telaLoginFuncionario->resize(298, 140);
        layoutWidget = new QWidget(telaLoginFuncionario);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 251, 112));
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

        txtUsuarioFuncionario = new QLineEdit(layoutWidget);
        txtUsuarioFuncionario->setObjectName(QString::fromUtf8("txtUsuarioFuncionario"));

        horizontalLayout->addWidget(txtUsuarioFuncionario);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        txtSenhaFuncionario = new QLineEdit(layoutWidget);
        txtSenhaFuncionario->setObjectName(QString::fromUtf8("txtSenhaFuncionario"));
        txtSenhaFuncionario->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txtSenhaFuncionario);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        btnEntrarFuncionario = new QPushButton(layoutWidget);
        btnEntrarFuncionario->setObjectName(QString::fromUtf8("btnEntrarFuncionario"));

        verticalLayout_2->addWidget(btnEntrarFuncionario);

        btnCadastrarNovoFuncionario = new QPushButton(layoutWidget);
        btnCadastrarNovoFuncionario->setObjectName(QString::fromUtf8("btnCadastrarNovoFuncionario"));

        verticalLayout_2->addWidget(btnCadastrarNovoFuncionario);


        retranslateUi(telaLoginFuncionario);

        QMetaObject::connectSlotsByName(telaLoginFuncionario);
    } // setupUi

    void retranslateUi(QDialog *telaLoginFuncionario)
    {
        telaLoginFuncionario->setWindowTitle(QCoreApplication::translate("telaLoginFuncionario", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telaLoginFuncionario", "Usu\303\241rio:", nullptr));
        label_2->setText(QCoreApplication::translate("telaLoginFuncionario", "Senha:", nullptr));
        btnEntrarFuncionario->setText(QCoreApplication::translate("telaLoginFuncionario", "ENTRAR", nullptr));
        btnCadastrarNovoFuncionario->setText(QCoreApplication::translate("telaLoginFuncionario", "CADASTRAR NOVO FUNCION\303\201RIO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaLoginFuncionario: public Ui_telaLoginFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGINFUNCIONARIO_H

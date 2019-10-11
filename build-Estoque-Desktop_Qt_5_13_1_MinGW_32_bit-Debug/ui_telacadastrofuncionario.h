/********************************************************************************
** Form generated from reading UI file 'telacadastrofuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACADASTROFUNCIONARIO_H
#define UI_TELACADASTROFUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaCadastroFuncionario
{
public:
    QLabel *lblConfirmarSenhaFuncionarioErro;
    QLabel *lblTelefoneFuncionarioErro;
    QPushButton *btnCadastrarFuncionario;
    QLineEdit *txtNomeFuncionario;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *txtSenhaFuncionario;
    QLineEdit *txtTelefoneFuncionario;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *lblEmailFuncionarioErro;
    QLabel *lblSenhaFuncionarioErro;
    QLineEdit *txtConfirmarSenhaFuncionario;
    QLineEdit *txtUsuarioFuncionario;
    QLabel *lblNomeFuncionarioErro;
    QLabel *lblUsuarioFuncionarioErro;
    QLineEdit *txtEmailFuncionario;
    QLabel *label_4;

    void setupUi(QDialog *telaCadastroFuncionario)
    {
        if (telaCadastroFuncionario->objectName().isEmpty())
            telaCadastroFuncionario->setObjectName(QString::fromUtf8("telaCadastroFuncionario"));
        telaCadastroFuncionario->resize(534, 279);
        lblConfirmarSenhaFuncionarioErro = new QLabel(telaCadastroFuncionario);
        lblConfirmarSenhaFuncionarioErro->setObjectName(QString::fromUtf8("lblConfirmarSenhaFuncionarioErro"));
        lblConfirmarSenhaFuncionarioErro->setGeometry(QRect(270, 180, 200, 16));
        lblConfirmarSenhaFuncionarioErro->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        lblConfirmarSenhaFuncionarioErro->setFont(font);
        lblConfirmarSenhaFuncionarioErro->setAutoFillBackground(false);
        lblConfirmarSenhaFuncionarioErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblTelefoneFuncionarioErro = new QLabel(telaCadastroFuncionario);
        lblTelefoneFuncionarioErro->setObjectName(QString::fromUtf8("lblTelefoneFuncionarioErro"));
        lblTelefoneFuncionarioErro->setGeometry(QRect(230, 80, 200, 16));
        lblTelefoneFuncionarioErro->setMinimumSize(QSize(200, 0));
        lblTelefoneFuncionarioErro->setFont(font);
        lblTelefoneFuncionarioErro->setAutoFillBackground(false);
        lblTelefoneFuncionarioErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        btnCadastrarFuncionario = new QPushButton(telaCadastroFuncionario);
        btnCadastrarFuncionario->setObjectName(QString::fromUtf8("btnCadastrarFuncionario"));
        btnCadastrarFuncionario->setGeometry(QRect(160, 220, 121, 41));
        txtNomeFuncionario = new QLineEdit(telaCadastroFuncionario);
        txtNomeFuncionario->setObjectName(QString::fromUtf8("txtNomeFuncionario"));
        txtNomeFuncionario->setGeometry(QRect(131, 23, 191, 22));
        txtNomeFuncionario->setMaxLength(30);
        label_3 = new QLabel(telaCadastroFuncionario);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 80, 46, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(telaCadastroFuncionario);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 150, 34, 16));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtSenhaFuncionario = new QLineEdit(telaCadastroFuncionario);
        txtSenhaFuncionario->setObjectName(QString::fromUtf8("txtSenhaFuncionario"));
        txtSenhaFuncionario->setGeometry(QRect(131, 142, 121, 22));
        txtSenhaFuncionario->setMaxLength(16);
        txtSenhaFuncionario->setEchoMode(QLineEdit::Password);
        txtTelefoneFuncionario = new QLineEdit(telaCadastroFuncionario);
        txtTelefoneFuncionario->setObjectName(QString::fromUtf8("txtTelefoneFuncionario"));
        txtTelefoneFuncionario->setGeometry(QRect(131, 79, 91, 22));
        label = new QLabel(telaCadastroFuncionario);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 31, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(telaCadastroFuncionario);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 120, 40, 16));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(telaCadastroFuncionario);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 170, 84, 16));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblEmailFuncionarioErro = new QLabel(telaCadastroFuncionario);
        lblEmailFuncionarioErro->setObjectName(QString::fromUtf8("lblEmailFuncionarioErro"));
        lblEmailFuncionarioErro->setGeometry(QRect(330, 50, 200, 16));
        lblEmailFuncionarioErro->setMinimumSize(QSize(200, 0));
        lblEmailFuncionarioErro->setFont(font);
        lblEmailFuncionarioErro->setAutoFillBackground(false);
        lblEmailFuncionarioErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblSenhaFuncionarioErro = new QLabel(telaCadastroFuncionario);
        lblSenhaFuncionarioErro->setObjectName(QString::fromUtf8("lblSenhaFuncionarioErro"));
        lblSenhaFuncionarioErro->setGeometry(QRect(270, 150, 200, 16));
        lblSenhaFuncionarioErro->setMinimumSize(QSize(200, 0));
        lblSenhaFuncionarioErro->setFont(font);
        lblSenhaFuncionarioErro->setAutoFillBackground(false);
        lblSenhaFuncionarioErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        txtConfirmarSenhaFuncionario = new QLineEdit(telaCadastroFuncionario);
        txtConfirmarSenhaFuncionario->setObjectName(QString::fromUtf8("txtConfirmarSenhaFuncionario"));
        txtConfirmarSenhaFuncionario->setGeometry(QRect(131, 170, 121, 22));
        txtConfirmarSenhaFuncionario->setMaxLength(16);
        txtConfirmarSenhaFuncionario->setEchoMode(QLineEdit::Password);
        txtUsuarioFuncionario = new QLineEdit(telaCadastroFuncionario);
        txtUsuarioFuncionario->setObjectName(QString::fromUtf8("txtUsuarioFuncionario"));
        txtUsuarioFuncionario->setGeometry(QRect(131, 114, 131, 22));
        txtUsuarioFuncionario->setMaxLength(20);
        txtUsuarioFuncionario->setEchoMode(QLineEdit::Normal);
        lblNomeFuncionarioErro = new QLabel(telaCadastroFuncionario);
        lblNomeFuncionarioErro->setObjectName(QString::fromUtf8("lblNomeFuncionarioErro"));
        lblNomeFuncionarioErro->setGeometry(QRect(330, 20, 201, 16));
        lblNomeFuncionarioErro->setMinimumSize(QSize(200, 0));
        lblNomeFuncionarioErro->setFont(font);
        lblNomeFuncionarioErro->setAutoFillBackground(false);
        lblNomeFuncionarioErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblUsuarioFuncionarioErro = new QLabel(telaCadastroFuncionario);
        lblUsuarioFuncionarioErro->setObjectName(QString::fromUtf8("lblUsuarioFuncionarioErro"));
        lblUsuarioFuncionarioErro->setGeometry(QRect(280, 120, 200, 16));
        lblUsuarioFuncionarioErro->setMinimumSize(QSize(200, 0));
        lblUsuarioFuncionarioErro->setFont(font);
        lblUsuarioFuncionarioErro->setAutoFillBackground(false);
        lblUsuarioFuncionarioErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        txtEmailFuncionario = new QLineEdit(telaCadastroFuncionario);
        txtEmailFuncionario->setObjectName(QString::fromUtf8("txtEmailFuncionario"));
        txtEmailFuncionario->setGeometry(QRect(131, 51, 191, 22));
        txtEmailFuncionario->setMaxLength(30);
        label_4 = new QLabel(telaCadastroFuncionario);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(83, 50, 31, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(telaCadastroFuncionario);

        QMetaObject::connectSlotsByName(telaCadastroFuncionario);
    } // setupUi

    void retranslateUi(QDialog *telaCadastroFuncionario)
    {
        telaCadastroFuncionario->setWindowTitle(QCoreApplication::translate("telaCadastroFuncionario", "Dialog", nullptr));
        lblConfirmarSenhaFuncionarioErro->setText(QString());
        lblTelefoneFuncionarioErro->setText(QString());
        btnCadastrarFuncionario->setText(QCoreApplication::translate("telaCadastroFuncionario", "CADASTRAR", nullptr));
        label_3->setText(QCoreApplication::translate("telaCadastroFuncionario", "Telefone:", nullptr));
        label_5->setText(QCoreApplication::translate("telaCadastroFuncionario", "Senha:", nullptr));
        txtTelefoneFuncionario->setInputMask(QCoreApplication::translate("telaCadastroFuncionario", "(00)00000-0000", nullptr));
        label->setText(QCoreApplication::translate("telaCadastroFuncionario", "Nome:", nullptr));
        label_7->setText(QCoreApplication::translate("telaCadastroFuncionario", "Usu\303\241rio:", nullptr));
        label_6->setText(QCoreApplication::translate("telaCadastroFuncionario", "Confirmar Senha:", nullptr));
        lblEmailFuncionarioErro->setText(QString());
        lblSenhaFuncionarioErro->setText(QString());
        lblNomeFuncionarioErro->setText(QString());
        lblUsuarioFuncionarioErro->setText(QString());
        label_4->setText(QCoreApplication::translate("telaCadastroFuncionario", "Email:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaCadastroFuncionario: public Ui_telaCadastroFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTROFUNCIONARIO_H

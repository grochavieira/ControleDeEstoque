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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaLoginCliente
{
public:
    QFrame *frame;
    QLabel *label_bg2;
    QLineEdit *txtUsuarioCliente;
    QLineEdit *txtSenhaCliente;
    QPushButton *btnEntrarCliente;
    QPushButton *btnAreaCadastroCliente;

    void setupUi(QDialog *TelaLoginCliente)
    {
        if (TelaLoginCliente->objectName().isEmpty())
            TelaLoginCliente->setObjectName(QString::fromUtf8("TelaLoginCliente"));
        TelaLoginCliente->resize(310, 500);
        TelaLoginCliente->setMinimumSize(QSize(310, 500));
        TelaLoginCliente->setMaximumSize(QSize(310, 500));
        frame = new QFrame(TelaLoginCliente);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 310, 500));
        frame->setMinimumSize(QSize(310, 500));
        frame->setMaximumSize(QSize(310, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_bg2 = new QLabel(frame);
        label_bg2->setObjectName(QString::fromUtf8("label_bg2"));
        label_bg2->setGeometry(QRect(0, 0, 321, 501));
        label_bg2->setPixmap(QPixmap(QString::fromUtf8(":/src/login/log_loginF.png")));
        label_bg2->setScaledContents(true);
        txtUsuarioCliente = new QLineEdit(frame);
        txtUsuarioCliente->setObjectName(QString::fromUtf8("txtUsuarioCliente"));
        txtUsuarioCliente->setGeometry(QRect(64, 189, 192, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(14);
        txtUsuarioCliente->setFont(font);
        txtUsuarioCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtSenhaCliente = new QLineEdit(frame);
        txtSenhaCliente->setObjectName(QString::fromUtf8("txtSenhaCliente"));
        txtSenhaCliente->setGeometry(QRect(60, 278, 201, 20));
        txtSenhaCliente->setFont(font);
        txtSenhaCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"\n"
"}"));
        txtSenhaCliente->setEchoMode(QLineEdit::Password);
        btnEntrarCliente = new QPushButton(frame);
        btnEntrarCliente->setObjectName(QString::fromUtf8("btnEntrarCliente"));
        btnEntrarCliente->setGeometry(QRect(90, 370, 150, 58));
        btnEntrarCliente->setStyleSheet(QString::fromUtf8("/*normal*/\n"
"QPushButton\n"
"{\n"
"\n"
"	background-color:transparent;\n"
"   	border-image:  url(:/src/login74/new-11.png) ;\n"
"	background:none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}\n"
"\n"
"/*clicked*/\n"
"QPushButton:focus:pressed\n"
"{\n"
"   	border-image: url(:/src/login74/new-12.png)  ;\n"
"}\n"
"\n"
"/*normal*/\n"
"QPushButton#quit_button\n"
"{\n"
"   	border-image: url(:/src/login74/new-11.png)  ;\n"
"}\n"
"/*hover*/\n"
"QPushButton:hover\n"
"{\n"
"     	border-image:  url(:/src/login74/new-13.png) ;\n"
"}\n"
"/*normal*/\n"
"QPushButton:hover#quit_button\n"
"{\n"
"     	border-image:   url(:/src/login74/new-11.png);\n"
"}"));
        btnAreaCadastroCliente = new QPushButton(frame);
        btnAreaCadastroCliente->setObjectName(QString::fromUtf8("btnAreaCadastroCliente"));
        btnAreaCadastroCliente->setGeometry(QRect(80, 440, 161, 21));
        QFont font1;
        font1.setPointSize(10);
        btnAreaCadastroCliente->setFont(font1);
        btnAreaCadastroCliente->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	background-color:transparent;\n"
"	color:rgb(70,130,180);\n"
"	border:none;\n"
"}"));

        retranslateUi(TelaLoginCliente);

        QMetaObject::connectSlotsByName(TelaLoginCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaLoginCliente)
    {
        TelaLoginCliente->setWindowTitle(QCoreApplication::translate("TelaLoginCliente", "Dialog", nullptr));
        label_bg2->setText(QString());
        btnEntrarCliente->setText(QString());
        btnAreaCadastroCliente->setText(QCoreApplication::translate("TelaLoginCliente", "SEM CADASTRO? CLIQUE AQUI!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaLoginCliente: public Ui_TelaLoginCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGINCLIENTE_H

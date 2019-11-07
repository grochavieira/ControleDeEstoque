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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaLoginFuncionario
{
public:
    QFrame *frame;
    QLineEdit *txtUsuarioFuncionario;
    QLineEdit *txtSenhaFuncionario;
    QPushButton *btnCadastrarNovoFuncionario;
    QPushButton *btnEntrarFuncionario;
    QLabel *label_bg1;
    QPushButton *btnHome;
    QLabel *lblErroUsuarioFuncionario;
    QLabel *lblErroSenhaFuncionario;

    void setupUi(QDialog *telaLoginFuncionario)
    {
        if (telaLoginFuncionario->objectName().isEmpty())
            telaLoginFuncionario->setObjectName(QString::fromUtf8("telaLoginFuncionario"));
        telaLoginFuncionario->resize(310, 500);
        telaLoginFuncionario->setMinimumSize(QSize(310, 500));
        telaLoginFuncionario->setMaximumSize(QSize(310, 500));
        frame = new QFrame(telaLoginFuncionario);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 310, 500));
        frame->setMinimumSize(QSize(310, 500));
        frame->setMaximumSize(QSize(310, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        txtUsuarioFuncionario = new QLineEdit(frame);
        txtUsuarioFuncionario->setObjectName(QString::fromUtf8("txtUsuarioFuncionario"));
        txtUsuarioFuncionario->setGeometry(QRect(60, 184, 191, 21));
        txtUsuarioFuncionario->setMinimumSize(QSize(180, 20));
        txtUsuarioFuncionario->setMaximumSize(QSize(200, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        txtUsuarioFuncionario->setFont(font);
        txtUsuarioFuncionario->setFocusPolicy(Qt::WheelFocus);
        txtUsuarioFuncionario->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtSenhaFuncionario = new QLineEdit(frame);
        txtSenhaFuncionario->setObjectName(QString::fromUtf8("txtSenhaFuncionario"));
        txtSenhaFuncionario->setGeometry(QRect(60, 273, 191, 21));
        txtSenhaFuncionario->setMaximumSize(QSize(200, 120));
        txtSenhaFuncionario->setFont(font);
        txtSenhaFuncionario->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"}"));
        txtSenhaFuncionario->setFrame(false);
        txtSenhaFuncionario->setEchoMode(QLineEdit::Password);
        btnCadastrarNovoFuncionario = new QPushButton(frame);
        btnCadastrarNovoFuncionario->setObjectName(QString::fromUtf8("btnCadastrarNovoFuncionario"));
        btnCadastrarNovoFuncionario->setGeometry(QRect(60, 400, 191, 31));
        btnCadastrarNovoFuncionario->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
"	border-color: white;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:2px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        btnEntrarFuncionario = new QPushButton(frame);
        btnEntrarFuncionario->setObjectName(QString::fromUtf8("btnEntrarFuncionario"));
        btnEntrarFuncionario->setGeometry(QRect(80, 330, 150, 58));
        btnEntrarFuncionario->setStyleSheet(QString::fromUtf8("/*normal*/\n"
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
        label_bg1 = new QLabel(frame);
        label_bg1->setObjectName(QString::fromUtf8("label_bg1"));
        label_bg1->setGeometry(QRect(-6, -1, 321, 501));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Caviar Dreams"));
        label_bg1->setFont(font1);
        label_bg1->setPixmap(QPixmap(QString::fromUtf8(":/src/login/log_loginC.png")));
        label_bg1->setScaledContents(true);
        btnHome = new QPushButton(frame);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));
        btnHome->setGeometry(QRect(100, 440, 111, 31));
        QFont font2;
        font2.setPointSize(9);
        btnHome->setFont(font2);
        btnHome->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        lblErroUsuarioFuncionario = new QLabel(frame);
        lblErroUsuarioFuncionario->setObjectName(QString::fromUtf8("lblErroUsuarioFuncionario"));
        lblErroUsuarioFuncionario->setGeometry(QRect(40, 210, 221, 20));
        QFont font3;
        font3.setPointSize(10);
        lblErroUsuarioFuncionario->setFont(font3);
        lblErroUsuarioFuncionario->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        lblErroUsuarioFuncionario->setAlignment(Qt::AlignCenter);
        lblErroSenhaFuncionario = new QLabel(frame);
        lblErroSenhaFuncionario->setObjectName(QString::fromUtf8("lblErroSenhaFuncionario"));
        lblErroSenhaFuncionario->setGeometry(QRect(40, 300, 221, 20));
        lblErroSenhaFuncionario->setFont(font3);
        lblErroSenhaFuncionario->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        lblErroSenhaFuncionario->setAlignment(Qt::AlignCenter);
        label_bg1->raise();
        txtUsuarioFuncionario->raise();
        txtSenhaFuncionario->raise();
        btnCadastrarNovoFuncionario->raise();
        btnEntrarFuncionario->raise();
        btnHome->raise();
        lblErroUsuarioFuncionario->raise();
        lblErroSenhaFuncionario->raise();
        QWidget::setTabOrder(txtUsuarioFuncionario, txtSenhaFuncionario);
        QWidget::setTabOrder(txtSenhaFuncionario, btnEntrarFuncionario);
        QWidget::setTabOrder(btnEntrarFuncionario, btnCadastrarNovoFuncionario);
        QWidget::setTabOrder(btnCadastrarNovoFuncionario, btnHome);

        retranslateUi(telaLoginFuncionario);

        QMetaObject::connectSlotsByName(telaLoginFuncionario);
    } // setupUi

    void retranslateUi(QDialog *telaLoginFuncionario)
    {
        telaLoginFuncionario->setWindowTitle(QCoreApplication::translate("telaLoginFuncionario", "Dialog", nullptr));
        txtUsuarioFuncionario->setText(QString());
        btnCadastrarNovoFuncionario->setText(QCoreApplication::translate("telaLoginFuncionario", "CADASTRAR NOVO FUNCION\303\201RIO", nullptr));
        btnEntrarFuncionario->setText(QString());
        label_bg1->setText(QString());
        btnHome->setText(QCoreApplication::translate("telaLoginFuncionario", "Home", nullptr));
        lblErroUsuarioFuncionario->setText(QString());
        lblErroSenhaFuncionario->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class telaLoginFuncionario: public Ui_telaLoginFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGINFUNCIONARIO_H

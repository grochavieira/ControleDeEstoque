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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *btnAreaDeEstoque;
    QPushButton *btnAreaDoCliente;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 639));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(800, 600));
        centralwidget->setMaximumSize(QSize(800, 600));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 600));
        frame->setMinimumSize(QSize(800, 600));
        frame->setMaximumSize(QSize(800, 600));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnAreaDeEstoque = new QPushButton(frame);
        btnAreaDeEstoque->setObjectName(QString::fromUtf8("btnAreaDeEstoque"));
        btnAreaDeEstoque->setGeometry(QRect(430, 120, 251, 331));
        QFont font;
        font.setFamily(QString::fromUtf8("Fira Code"));
        btnAreaDeEstoque->setFont(font);
        btnAreaDeEstoque->setMouseTracking(true);
        btnAreaDeEstoque->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"	background-color:transparent;\n"
"   	border-image:url(:/src/alive/btn_normalGer.png) ;\n"
"	background:none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:focus:pressed\n"
"{\n"
"   	border-image:url(:/src/alive/btn_clickGer.png) ;\n"
"}\n"
"\n"
"\n"
"QPushButton#quit_button\n"
"{\n"
"   	border-image:url(:/src/alive/btn_normalGer.png) ;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   	border-image:url(:/src/alive/btn_hoverGer.png) ;\n"
"}\n"
"\n"
"QPushButton:hover#quit_button\n"
"{\n"
"   	border-image:url(:/src/alive/btn_normalGer.png) ;\n"
"}"));
        btnAreaDeEstoque->setIconSize(QSize(271, 335));
        btnAreaDeEstoque->setFlat(true);
        btnAreaDoCliente = new QPushButton(frame);
        btnAreaDoCliente->setObjectName(QString::fromUtf8("btnAreaDoCliente"));
        btnAreaDoCliente->setGeometry(QRect(150, 120, 251, 331));
        btnAreaDoCliente->setFont(font);
        btnAreaDoCliente->setAutoFillBackground(false);
        btnAreaDoCliente->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"	background-color:transparent;\n"
"   	border-image:url(:/src/alive/new_normalCust.png);\n"
"	background:none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:focus:pressed\n"
"{\n"
"   	border-image: url(:/src/alive/new_clickCust.png) ;\n"
"}\n"
"\n"
"\n"
"QPushButton#quit_button\n"
"{\n"
"   	border-image:url(:/src/alive/new_normalCust.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   	border-image: url(:/src/alive/new_hoverCust.png) ;\n"
"}\n"
"\n"
"QPushButton:hover#quit_button\n"
"{\n"
"   	border-image:url(:/src/alive/new_normalCust.png);\n"
"}"));
        btnAreaDoCliente->setIconSize(QSize(271, 335));
        btnAreaDoCliente->setFlat(true);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -10, 800, 600));
        label->setMinimumSize(QSize(800, 600));
        label->setMaximumSize(QSize(800, 600));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/src/alive/btn-08.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 50, 591, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Caviar Dreams"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 230, 81, 41));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 330, 81, 41));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(48, 35, 60, 60));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/src/fox2.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 40, 431, 51));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0,80);"));
        label->raise();
        btnAreaDeEstoque->raise();
        btnAreaDoCliente->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_4->raise();
        label_2->raise();
        label_3->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(btnAreaDoCliente, btnAreaDeEstoque);
        QWidget::setTabOrder(btnAreaDeEstoque, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAreaDeEstoque->setText(QString());
        btnAreaDoCliente->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Bem Vindo(a) ao Fox Stock", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Gerencia estoque", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Pedidos", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

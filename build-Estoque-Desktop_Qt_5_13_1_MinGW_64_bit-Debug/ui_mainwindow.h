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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        MainWindow->setMinimumSize(QSize(400, 200));
        MainWindow->setMaximumSize(QSize(400, 300));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 411, 291));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnAreaDeEstoque = new QPushButton(frame);
        btnAreaDeEstoque->setObjectName(QString::fromUtf8("btnAreaDeEstoque"));
        btnAreaDeEstoque->setGeometry(QRect(40, 40, 151, 171));
        QFont font;
        font.setFamily(QString::fromUtf8("Fira Code"));
        btnAreaDeEstoque->setFont(font);
        btnAreaDoCliente = new QPushButton(frame);
        btnAreaDoCliente->setObjectName(QString::fromUtf8("btnAreaDoCliente"));
        btnAreaDoCliente->setGeometry(QRect(200, 40, 161, 171));
        btnAreaDoCliente->setFont(font);
        btnAreaDoCliente->setAutoFillBackground(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 20));
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
        btnAreaDeEstoque->setText(QCoreApplication::translate("MainWindow", "ESTOQUE", nullptr));
        btnAreaDoCliente->setText(QCoreApplication::translate("MainWindow", "CLIENTE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

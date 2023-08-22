/********************************************************************************
** Form generated from reading UI file 'windowclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWCLIENT_H
#define UI_WINDOWCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowClient
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEditEnvoyer;
    QPushButton *pushButtonEnvoyer;
    QPushButton *pushButtonQuitter;
    QLabel *label_2;
    QLineEdit *lineEditRecu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowClient)
    {
        if (WindowClient->objectName().isEmpty())
            WindowClient->setObjectName(QString::fromUtf8("WindowClient"));
        WindowClient->resize(409, 201);
        centralwidget = new QWidget(WindowClient);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 121, 17));
        lineEditEnvoyer = new QLineEdit(centralwidget);
        lineEditEnvoyer->setObjectName(QString::fromUtf8("lineEditEnvoyer"));
        lineEditEnvoyer->setGeometry(QRect(20, 30, 371, 25));
        lineEditEnvoyer->setStyleSheet(QString::fromUtf8(""));
        pushButtonEnvoyer = new QPushButton(centralwidget);
        pushButtonEnvoyer->setObjectName(QString::fromUtf8("pushButtonEnvoyer"));
        pushButtonEnvoyer->setGeometry(QRect(20, 80, 221, 25));
        pushButtonEnvoyer->setStyleSheet(QString::fromUtf8("background-color:rgb(138, 226, 52)"));
        pushButtonQuitter = new QPushButton(centralwidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(270, 80, 121, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 130, 121, 17));
        lineEditRecu = new QLineEdit(centralwidget);
        lineEditRecu->setObjectName(QString::fromUtf8("lineEditRecu"));
        lineEditRecu->setGeometry(QRect(20, 150, 371, 25));
        lineEditRecu->setReadOnly(true);
        WindowClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowClient);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 409, 22));
        WindowClient->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowClient);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowClient->setStatusBar(statusbar);

        retranslateUi(WindowClient);

        QMetaObject::connectSlotsByName(WindowClient);
    } // setupUi

    void retranslateUi(QMainWindow *WindowClient)
    {
        WindowClient->setWindowTitle(QApplication::translate("WindowClient", "WindowClient", nullptr));
        label->setText(QApplication::translate("WindowClient", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">A envoyer :</span></p></body></html>", nullptr));
        pushButtonEnvoyer->setText(QApplication::translate("WindowClient", "Envoyer", nullptr));
        pushButtonQuitter->setText(QApplication::translate("WindowClient", "Quitter", nullptr));
        label_2->setText(QApplication::translate("WindowClient", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">Re\303\247u :</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowClient: public Ui_WindowClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWCLIENT_H

/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

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

class Ui_start
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *DifiMedio;
    QPushButton *DifiEasy;
    QPushButton *DifiHard;
    QPushButton *Rick;
    QPushButton *Morty;
    QLineEdit *Name;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *start)
    {
        if (start->objectName().isEmpty())
            start->setObjectName(QString::fromUtf8("start"));
        start->resize(803, 421);
        centralwidget = new QWidget(start);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 370, 121, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        pushButton->setFont(font);
        DifiMedio = new QPushButton(centralwidget);
        DifiMedio->setObjectName(QString::fromUtf8("DifiMedio"));
        DifiMedio->setGeometry(QRect(20, 190, 121, 31));
        DifiMedio->setFont(font);
        DifiEasy = new QPushButton(centralwidget);
        DifiEasy->setObjectName(QString::fromUtf8("DifiEasy"));
        DifiEasy->setGeometry(QRect(20, 150, 121, 31));
        DifiEasy->setFont(font);
        DifiHard = new QPushButton(centralwidget);
        DifiHard->setObjectName(QString::fromUtf8("DifiHard"));
        DifiHard->setGeometry(QRect(20, 230, 121, 31));
        DifiHard->setFont(font);
        Rick = new QPushButton(centralwidget);
        Rick->setObjectName(QString::fromUtf8("Rick"));
        Rick->setGeometry(QRect(200, 370, 141, 31));
        Rick->setFont(font);
        Morty = new QPushButton(centralwidget);
        Morty->setObjectName(QString::fromUtf8("Morty"));
        Morty->setGeometry(QRect(370, 370, 141, 31));
        Morty->setFont(font);
        Name = new QLineEdit(centralwidget);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(20, 370, 121, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        Name->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 350, 81, 20));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        start->setCentralWidget(centralwidget);
        menubar = new QMenuBar(start);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 803, 21));
        start->setMenuBar(menubar);
        statusbar = new QStatusBar(start);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        start->setStatusBar(statusbar);

        retranslateUi(start);

        QMetaObject::connectSlotsByName(start);
    } // setupUi

    void retranslateUi(QMainWindow *start)
    {
        start->setWindowTitle(QCoreApplication::translate("start", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("start", "START", nullptr));
        DifiMedio->setText(QCoreApplication::translate("start", "MEDIUM", nullptr));
        DifiEasy->setText(QCoreApplication::translate("start", "EASY", nullptr));
        DifiHard->setText(QCoreApplication::translate("start", "HARD", nullptr));
        Rick->setText(QCoreApplication::translate("start", "RICK", nullptr));
#if QT_CONFIG(accessibility)
        Morty->setAccessibleDescription(QCoreApplication::translate("start", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(accessibility)
        Morty->setText(QCoreApplication::translate("start", "MORTY", nullptr));
        label->setText(QCoreApplication::translate("start", "Nombre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class start: public Ui_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H

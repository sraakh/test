/********************************************************************************
** Form generated from reading UI file 'thirdpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDPAGE_H
#define UI_THIRDPAGE_H

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

class Ui_thirdpage
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *thirdpage)
    {
        if (thirdpage->objectName().isEmpty())
            thirdpage->setObjectName(QString::fromUtf8("thirdpage"));
        thirdpage->resize(1123, 666);
        thirdpage->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image4.jpg);"));
        centralwidget = new QWidget(thirdpage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 250, 141, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 200, 231, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 160, 291, 25));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 110, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 18pt \"MS Shell Dlg 2\";\n"
"text-decoration: line-through;"));
        label_2->setFrameShape(QFrame::Panel);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 320, 291, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        thirdpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(thirdpage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1123, 26));
        thirdpage->setMenuBar(menubar);
        statusbar = new QStatusBar(thirdpage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        thirdpage->setStatusBar(statusbar);

        retranslateUi(thirdpage);

        QMetaObject::connectSlotsByName(thirdpage);
    } // setupUi

    void retranslateUi(QMainWindow *thirdpage)
    {
        thirdpage->setWindowTitle(QApplication::translate("thirdpage", "MainWindow", nullptr));
        label->setText(QApplication::translate("thirdpage", " enter the message code in here.", nullptr));
        pushButton->setText(QApplication::translate("thirdpage", "click here to show the number", nullptr));
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("thirdpage", "go!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdpage: public Ui_thirdpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDPAGE_H

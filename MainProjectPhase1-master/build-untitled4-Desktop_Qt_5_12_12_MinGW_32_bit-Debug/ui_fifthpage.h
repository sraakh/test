/********************************************************************************
** Form generated from reading UI file 'fifthpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIFTHPAGE_H
#define UI_FIFTHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_fifthpage
{
public:

    void setupUi(QDialog *fifthpage)
    {
        if (fifthpage->objectName().isEmpty())
            fifthpage->setObjectName(QString::fromUtf8("fifthpage"));
        fifthpage->resize(913, 604);
        fifthpage->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 200, 198);"));

        retranslateUi(fifthpage);

        QMetaObject::connectSlotsByName(fifthpage);
    } // setupUi

    void retranslateUi(QDialog *fifthpage)
    {
        fifthpage->setWindowTitle(QApplication::translate("fifthpage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fifthpage: public Ui_fifthpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIFTHPAGE_H

/********************************************************************************
** Form generated from reading UI file 'dialog_splash.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SPLASH_H
#define UI_DIALOG_SPLASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Splash
{
public:
    QLabel *label;

    void setupUi(QDialog *Dialog_Splash)
    {
        if (Dialog_Splash->objectName().isEmpty())
            Dialog_Splash->setObjectName(QStringLiteral("Dialog_Splash"));
        Dialog_Splash->resize(384, 211);
        label = new QLabel(Dialog_Splash);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 391, 211));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Widescreen__004624_.jpg")));

        retranslateUi(Dialog_Splash);

        QMetaObject::connectSlotsByName(Dialog_Splash);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Splash)
    {
        Dialog_Splash->setWindowTitle(QApplication::translate("Dialog_Splash", "\320\241\320\277\320\273\321\215\321\210\320\241\320\272\321\200\320\270\320\275", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_Splash: public Ui_Dialog_Splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SPLASH_H

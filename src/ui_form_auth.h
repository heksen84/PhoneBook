/********************************************************************************
** Form generated from reading UI file 'form_auth.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_AUTH_H
#define UI_FORM_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Form_Auth
{
public:
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_Pass;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Form_Auth)
    {
        if (Form_Auth->objectName().isEmpty())
            Form_Auth->setObjectName(QStringLiteral("Form_Auth"));
        Form_Auth->resize(150, 131);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/login.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Form_Auth->setWindowIcon(icon);
        Form_Auth->setAutoFillBackground(true);
        Form_Auth->setModal(true);
        lineEdit_login = new QLineEdit(Form_Auth);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(10, 30, 131, 20));
        lineEdit_Pass = new QLineEdit(Form_Auth);
        lineEdit_Pass->setObjectName(QStringLiteral("lineEdit_Pass"));
        lineEdit_Pass->setGeometry(QRect(10, 70, 131, 20));
        lineEdit_Pass->setClearButtonEnabled(false);
        label = new QLabel(Form_Auth);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 46, 13));
        label_2 = new QLabel(Form_Auth);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 50, 46, 13));
        pushButton = new QPushButton(Form_Auth);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 100, 61, 23));
        pushButton_2 = new QPushButton(Form_Auth);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 100, 61, 23));

        retranslateUi(Form_Auth);

        QMetaObject::connectSlotsByName(Form_Auth);
    } // setupUi

    void retranslateUi(QDialog *Form_Auth)
    {
        Form_Auth->setWindowTitle(QApplication::translate("Form_Auth", "\320\222\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("Form_Auth", "\320\233\320\276\320\263\320\270\320\275", 0));
        label_2->setText(QApplication::translate("Form_Auth", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
        pushButton->setText(QApplication::translate("Form_Auth", "\320\222\321\205\320\276\320\264", 0));
        pushButton_2->setText(QApplication::translate("Form_Auth", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_Auth: public Ui_Form_Auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_AUTH_H

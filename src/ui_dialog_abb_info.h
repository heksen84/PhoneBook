/********************************************************************************
** Form generated from reading UI file 'dialog_abb_info.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ABB_INFO_H
#define UI_DIALOG_ABB_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Abb_Info
{
public:
    QLineEdit *lineEdit_Fio;
    QLineEdit *lineEdit_Adress;
    QLineEdit *lineEdit_Phone;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_Abb_Info)
    {
        if (Dialog_Abb_Info->objectName().isEmpty())
            Dialog_Abb_Info->setObjectName(QStringLiteral("Dialog_Abb_Info"));
        Dialog_Abb_Info->resize(274, 235);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/edit_7301.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_Abb_Info->setWindowIcon(icon);
        lineEdit_Fio = new QLineEdit(Dialog_Abb_Info);
        lineEdit_Fio->setObjectName(QStringLiteral("lineEdit_Fio"));
        lineEdit_Fio->setGeometry(QRect(90, 130, 161, 20));
        lineEdit_Adress = new QLineEdit(Dialog_Abb_Info);
        lineEdit_Adress->setObjectName(QStringLiteral("lineEdit_Adress"));
        lineEdit_Adress->setGeometry(QRect(90, 100, 161, 20));
        lineEdit_Phone = new QLineEdit(Dialog_Abb_Info);
        lineEdit_Phone->setObjectName(QStringLiteral("lineEdit_Phone"));
        lineEdit_Phone->setGeometry(QRect(90, 160, 161, 20));
        label = new QLabel(Dialog_Abb_Info);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 130, 46, 13));
        label_2 = new QLabel(Dialog_Abb_Info);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 46, 13));
        label_3 = new QLabel(Dialog_Abb_Info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 160, 46, 13));
        comboBox = new QComboBox(Dialog_Abb_Info);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 10, 161, 22));
        comboBox_2 = new QComboBox(Dialog_Abb_Info);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(90, 40, 161, 22));
        comboBox_3 = new QComboBox(Dialog_Abb_Info);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(90, 70, 161, 22));
        label_4 = new QLabel(Dialog_Abb_Info);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 46, 13));
        label_5 = new QLabel(Dialog_Abb_Info);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 40, 46, 13));
        label_6 = new QLabel(Dialog_Abb_Info);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 70, 61, 16));
        pushButton = new QPushButton(Dialog_Abb_Info);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 190, 75, 23));
        pushButton_2 = new QPushButton(Dialog_Abb_Info);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 190, 75, 23));

        retranslateUi(Dialog_Abb_Info);

        QMetaObject::connectSlotsByName(Dialog_Abb_Info);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Abb_Info)
    {
        Dialog_Abb_Info->setWindowTitle(QApplication::translate("Dialog_Abb_Info", "\320\230\320\275\321\204\320\276", 0));
        label->setText(QApplication::translate("Dialog_Abb_Info", "\320\244.\320\230.\320\236.", 0));
        label_2->setText(QApplication::translate("Dialog_Abb_Info", "\320\220\320\264\321\200\320\265\321\201", 0));
        label_3->setText(QApplication::translate("Dialog_Abb_Info", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0));
        label_4->setText(QApplication::translate("Dialog_Abb_Info", "\320\241\321\202\321\200\320\260\320\275\320\260", 0));
        label_5->setText(QApplication::translate("Dialog_Abb_Info", "\320\240\320\265\320\263\320\270\320\276\320\275", 0));
        label_6->setText(QApplication::translate("Dialog_Abb_Info", "\320\235\320\260\321\201. \320\277\321\203\320\275\320\272\321\202", 0));
        pushButton->setText(QApplication::translate("Dialog_Abb_Info", "\320\236\320\272", 0));
        pushButton_2->setText(QApplication::translate("Dialog_Abb_Info", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Abb_Info: public Ui_Dialog_Abb_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ABB_INFO_H

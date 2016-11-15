/********************************************************************************
** Form generated from reading UI file 'dialog_add_ab.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADD_AB_H
#define UI_DIALOG_ADD_AB_H

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

class Ui_Dialog_Add_Ab
{
public:
    QLabel *label_5;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLabel *label;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_Fio;
    QLabel *label_6;
    QLineEdit *lineEdit_Adress;
    QLabel *label_4;
    QLineEdit *lineEdit_Phone;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_Add_Ab)
    {
        if (Dialog_Add_Ab->objectName().isEmpty())
            Dialog_Add_Ab->setObjectName(QStringLiteral("Dialog_Add_Ab"));
        Dialog_Add_Ab->resize(253, 244);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/add1-_1068.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_Add_Ab->setWindowIcon(icon);
        label_5 = new QLabel(Dialog_Add_Ab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 50, 46, 13));
        label_2 = new QLabel(Dialog_Add_Ab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 46, 13));
        comboBox_2 = new QComboBox(Dialog_Add_Ab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(80, 50, 161, 22));
        label_3 = new QLabel(Dialog_Add_Ab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 170, 46, 13));
        label = new QLabel(Dialog_Add_Ab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 140, 46, 13));
        comboBox_3 = new QComboBox(Dialog_Add_Ab);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(80, 80, 161, 22));
        lineEdit_Fio = new QLineEdit(Dialog_Add_Ab);
        lineEdit_Fio->setObjectName(QStringLiteral("lineEdit_Fio"));
        lineEdit_Fio->setGeometry(QRect(80, 140, 161, 20));
        label_6 = new QLabel(Dialog_Add_Ab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 80, 61, 16));
        lineEdit_Adress = new QLineEdit(Dialog_Add_Ab);
        lineEdit_Adress->setObjectName(QStringLiteral("lineEdit_Adress"));
        lineEdit_Adress->setGeometry(QRect(80, 110, 161, 20));
        label_4 = new QLabel(Dialog_Add_Ab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 46, 13));
        lineEdit_Phone = new QLineEdit(Dialog_Add_Ab);
        lineEdit_Phone->setObjectName(QStringLiteral("lineEdit_Phone"));
        lineEdit_Phone->setGeometry(QRect(80, 170, 161, 20));
        comboBox = new QComboBox(Dialog_Add_Ab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 20, 161, 22));
        pushButton = new QPushButton(Dialog_Add_Ab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 200, 75, 23));
        pushButton_2 = new QPushButton(Dialog_Add_Ab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 200, 75, 23));

        retranslateUi(Dialog_Add_Ab);

        QMetaObject::connectSlotsByName(Dialog_Add_Ab);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Add_Ab)
    {
        Dialog_Add_Ab->setWindowTitle(QApplication::translate("Dialog_Add_Ab", "\320\235\320\276\320\262\321\213\320\271 \320\260\320\261\320\276\320\275\320\265\320\275\321\202", 0));
        label_5->setText(QApplication::translate("Dialog_Add_Ab", "\320\240\320\265\320\263\320\270\320\276\320\275", 0));
        label_2->setText(QApplication::translate("Dialog_Add_Ab", "\320\220\320\264\321\200\320\265\321\201", 0));
        label_3->setText(QApplication::translate("Dialog_Add_Ab", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0));
        label->setText(QApplication::translate("Dialog_Add_Ab", "\320\244.\320\230.\320\236.", 0));
        label_6->setText(QApplication::translate("Dialog_Add_Ab", "\320\235\320\260\321\201. \320\277\321\203\320\275\320\272\321\202", 0));
        label_4->setText(QApplication::translate("Dialog_Add_Ab", "\320\241\321\202\321\200\320\260\320\275\320\260", 0));
        pushButton->setText(QApplication::translate("Dialog_Add_Ab", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("Dialog_Add_Ab", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Add_Ab: public Ui_Dialog_Add_Ab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADD_AB_H

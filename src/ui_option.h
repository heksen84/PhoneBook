/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

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

class Ui_Option
{
public:
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Option)
    {
        if (Option->objectName().isEmpty())
            Option->setObjectName(QStringLiteral("Option"));
        Option->setWindowModality(Qt::ApplicationModal);
        Option->resize(260, 128);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/computer_8501.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Option->setWindowIcon(icon);
        Option->setModal(true);
        label = new QLabel(Option);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 71, 16));
        lineEdit_2 = new QLineEdit(Option);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 50, 131, 20));
        lineEdit = new QLineEdit(Option);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 20, 131, 20));
        label_2 = new QLabel(Option);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 81, 20));
        pushButton = new QPushButton(Option);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 90, 75, 23));
        pushButton_2 = new QPushButton(Option);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 90, 75, 23));

        retranslateUi(Option);

        QMetaObject::connectSlotsByName(Option);
    } // setupUi

    void retranslateUi(QDialog *Option)
    {
        Option->setWindowTitle(QApplication::translate("Option", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        label->setText(QApplication::translate("Option", "\320\235\320\276\320\262\321\213\320\271 \320\273\320\276\320\263\320\270\320\275", 0));
        label_2->setText(QApplication::translate("Option", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        pushButton->setText(QApplication::translate("Option", "\320\236\320\232", 0));
        pushButton_2->setText(QApplication::translate("Option", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Option: public Ui_Option {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H

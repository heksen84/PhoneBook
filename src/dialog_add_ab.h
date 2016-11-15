#ifndef DIALOG_ADD_AB_H
#define DIALOG_ADD_AB_H

#include <QDialog>

namespace Ui {
class Dialog_Add_Ab;
}

class Dialog_Add_Ab : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Add_Ab(QWidget *parent = 0);
    ~Dialog_Add_Ab();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_comboBox_3_currentIndexChanged(const QString &arg1);

private:
    Ui::Dialog_Add_Ab *ui;
    QWidget *mParent;
    int country_id, region_id, place_id;
};

#endif // DIALOG_ADD_AB_H

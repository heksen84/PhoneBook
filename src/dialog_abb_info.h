#ifndef DIALOG_ABBINFO_H
#define DIALOG_ABBINFO_H

#include <QDialog>

namespace Ui {
class Dialog_Abb_Info;
}

class Dialog_Abb_Info : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Abb_Info( QString abonent_id, QWidget *parent = 0 );
    ~Dialog_Abb_Info();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_comboBox_3_currentIndexChanged(const QString &arg1);

private:
    Ui::Dialog_Abb_Info *ui;
    QString id;
    int country_id, region_id, place_id;
};

#endif // DIALOG_ABBINFO_H

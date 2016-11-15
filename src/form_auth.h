#ifndef FORM_AUTH_H
#define FORM_AUTH_H

#include <QDialog>

namespace Ui
{
    class Form_Auth;
}

class Form_Auth : public QDialog
{
    Q_OBJECT

public:
    explicit Form_Auth(QWidget *parent = 0);
    ~Form_Auth();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Form_Auth *ui;
};

#endif // FORM_AUTH_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void RefreshTable();

private slots:
    void on_pushButton_clicked();

    void on_action_9_triggered();

    void on_action_7_triggered();

    void on_action_8_triggered();

    void on_tableWidget_doubleClicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_action_5_triggered();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_action_3_triggered();

    void on_action_4_triggered();


    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

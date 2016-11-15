/*
======================================================================
mainwindow.cpp

======================================================================
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_add_ab.h"
#include "Option.h"
#include <QMessageBox>
#include "dialog_abb_info.h"

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

int last_pos;

/*
------------
конструктор
------------
*/
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    RefreshTable();
}
/*
------------
деструктор
------------
*/
MainWindow::~MainWindow()
{
    delete ui;
}
/*
------------
нажатие
------------
*/
void MainWindow::on_pushButton_clicked()
{
     Dialog_Add_Ab dab;
     dab.setModal(true);
     dab.exec();

     RefreshTable();
}
/*
------------
выход
------------
*/
void MainWindow::on_action_9_triggered()
{
    int reply = QMessageBox::question( this, "Выход", "Вы действительно желаете выйти?", QMessageBox::Yes|QMessageBox::No );
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}
/*
--------------
настройки
--------------
*/
void MainWindow::on_action_7_triggered()
{
   Option opt;
   opt.setModal(true);
   opt.exec();
}
/*
--------------
заполняю поля
--------------
*/
void MainWindow::RefreshTable()
{

    int n = ui->tableWidget->rowCount();
         for( int i = 0; i < n; i++ ) ui->tableWidget->removeRow( 0 );

    QSqlQuery query;
    query.exec( "SELECT id,fio,adress,phone FROM справочник ORDER BY id DESC" );

    while (query.next())
    {
       ui->tableWidget->insertRow(0);
       ui->tableWidget->setItem(0, 0, new QTableWidgetItem(query.value(0).toString())); // ID
       ui->tableWidget->setItem(0, 1, new QTableWidgetItem(query.value(1).toString())); // Ф.И.О.
       ui->tableWidget->setItem(0, 2, new QTableWidgetItem(query.value(2).toString())); // адрес
       ui->tableWidget->setItem(0, 3, new QTableWidgetItem(query.value(3).toString())); // телефон
       ui->tableWidget->setRowHeight(0, 20);
    }

    ui->tableWidget->setColumnWidth(0,50);
    ui->tableWidget->setColumnWidth(1,150);
    ui->tableWidget->setColumnWidth(2,200);
    ui->tableWidget->setColumnWidth(3,100);

    ui->tableWidget->selectRow(last_pos);
    ui->tableWidget->setColumnHidden( 0, true );
}
/*
-------
info
-------
*/
void MainWindow::on_action_8_triggered()
{
     QMessageBox::information( this, "Инфо", "Телефонный справочник v1.0\nРазработчик Бобков И.Н.\nг .Аксу 2015 г." );
}
/*
-----------------------
Информация об абоненте
-----------------------
*/
void MainWindow::on_tableWidget_doubleClicked(const QModelIndex &index)
{
    last_pos = this->ui->tableWidget->currentRow();
    Dialog_Abb_Info abbInfo( ui->tableWidget->item(ui->tableWidget->currentIndex().row(), 0)->text(), this );
    abbInfo.setModal(true);
    abbInfo.exec();
    RefreshTable();
}
/*
------------------
удаление абонента
------------------
*/
void MainWindow::on_pushButton_2_clicked()
{
    last_pos = this->ui->tableWidget->currentRow();

    int reply = QMessageBox::question( this, "Удаление", "Удалить абонента " + ui->tableWidget->item(ui->tableWidget->currentIndex().row(), 1)->text() + "?", QMessageBox::Yes|QMessageBox::No );
    if (reply == QMessageBox::Yes)
    {
        if(ui->tableWidget->currentIndex().row() >= 0)
        {
                 QSqlQuery query;
                 query.prepare( "DELETE FROM справочник WHERE ID = :id;" );
                 query.bindValue(":id", ui->tableWidget->item(ui->tableWidget->currentIndex().row(), 0)->text());
                 query.exec();

                 RefreshTable();
        }
    }
}
/*
------------------
инфо абонента
------------------
*/
void MainWindow::on_action_5_triggered()
{
    last_pos = this->ui->tableWidget->currentRow();
    Dialog_Abb_Info abbInfo( ui->tableWidget->item(ui->tableWidget->currentIndex().row(), 0)->text(), this );
    abbInfo.setModal(true);
    abbInfo.exec();
    RefreshTable();
}

/*
 ------------------------
 поиск/фильтр
 ------------------------
*/
void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
     QList<QTableWidgetItem *> items = ui->tableWidget->findItems( arg1, Qt::MatchContains );

     for(int i = 0; i < items.count(); i++)
          ui->tableWidget->selectRow( items.at(i)->row() );
}
/*
 -------------------
 добавление абонента
 -------------------
*/
void MainWindow::on_action_3_triggered()
{
   on_pushButton_clicked();
}

void MainWindow::on_action_4_triggered()
{
    on_pushButton_2_clicked();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_3_clicked()
{
    on_action_5_triggered();
}

/*
------------------------------------------
dialog_add_ab.cpp
------------------------------------------
*/
#include "dialog_add_ab.h"
#include "ui_dialog_add_ab.h"
#include <QMessageBox>

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
/*
------------
конструктор
------------
*/
Dialog_Add_Ab::Dialog_Add_Ab(QWidget *parent) :QDialog(parent),ui(new Ui::Dialog_Add_Ab)
{
    ui->setupUi(this);

    mParent = parent;

    //-------------------------------
    // вношу страны
    //-------------------------------
    QSqlQuery query;

    // Заполняю страны
    query.exec( "SELECT name FROM страны" );
    while (query.next())
    {
       ui->comboBox->addItem( query.value(0).toString() );
    }
}
/*
------------
деструктор
------------
*/
Dialog_Add_Ab::~Dialog_Add_Ab()
{
    delete ui;
}

/*
----------------
закрыть диалог
----------------
*/
void Dialog_Add_Ab::on_pushButton_2_clicked()
{
    this->close();
}


void Dialog_Add_Ab::on_comboBox_currentIndexChanged(const QString &arg1)
{

    QSqlQuery query;
    query.exec( "SELECT * FROM страны WHERE name = '" + arg1 + "'" );

    while (query.next())
    {
       country_id = query.value(0).toInt();
    }

    query.exec( "SELECT region_id, name FROM регионы WHERE country_id = " + QString::number(country_id) );
    ui->comboBox_2->clear();
    while (query.next())
    {
        ui->comboBox_2->addItem( query.value(1).toString() );
    }
}

void Dialog_Add_Ab::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    QSqlQuery query;
    query.exec( "SELECT * FROM регионы WHERE name = '" + arg1 + "'" );

    while (query.next())
    {
       region_id = query.value(0).toInt();
    }

    query.exec( "SELECT * FROM нас_пункты WHERE region_id = " + QString::number(region_id) );

    ui->comboBox_3->clear();
    while (query.next())
    {
       ui->comboBox_3->addItem( query.value(1).toString() );
    }
}

void Dialog_Add_Ab::on_comboBox_3_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    query.exec( "SELECT * FROM нас_пункты WHERE name = '" + arg1 + "'" );

    while (query.next())
    {
       place_id = query.value(0).toInt();
    }
}

/*
---------------------------
Вношу абонента в таблицу
---------------------------
*/
void Dialog_Add_Ab::on_pushButton_clicked()
{
    if (this->ui->lineEdit_Adress->text()    == ""  ||
        this->ui->lineEdit_Fio->text()       == ""  ||
        this->ui->lineEdit_Phone->text()     == "" )
        QMessageBox::information( this, this->windowTitle(), "Заполните необходимые поля!" );
    else
    {
        QSqlQuery query;
        bool ret =  query.prepare("INSERT INTO справочник ( fio,adress,phone,country_id,region_id,place_id)VALUES (:fio, :adress, :phone, :country_id, :region_id, :place_id);");


        query.bindValue(":fio",             ui->lineEdit_Fio->text());
        query.bindValue(":adress",          ui->lineEdit_Adress->text());
        query.bindValue(":phone",           ui->lineEdit_Phone->text());
        query.bindValue(":country_id",      country_id);
        query.bindValue(":region_id",       region_id);
        query.bindValue(":place_id",        place_id);

        query.exec();

        if ( !ret )
             QMessageBox::information( this, this->windowTitle(), "Невозможно выполнить запрос! : " + query.lastError().text() );


        this->close();
    }
}


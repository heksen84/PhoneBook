/*
======================
dialog_abb_info.cpp

======================
*/
#include "dialog_abb_info.h"
#include "ui_dialog_abb_info.h"
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
Dialog_Abb_Info::Dialog_Abb_Info( QString abonent_id, QWidget *parent ) : QDialog(parent), ui(new Ui::Dialog_Abb_Info)
{
    ui->setupUi(this);

    this->id = abonent_id;
    QSqlQuery query;

    // ---------------------------------------------------
    // Заполняю странами
    query.exec( "SELECT * FROM страны" );
    while (query.next())
    {
       ui->comboBox->addItem( query.value(1).toString() );
    }
    // ----------------------------------------------------

    query.exec( "SELECT * FROM справочник WHERE id = " + abonent_id );

    QString fio, adress, phone;
    int country, region, place;

    // заполняю
    while (query.next())
    {
        fio      = query.value(1).toString();
        adress   = query.value(2).toString();
        phone    = query.value(3).toString();
        country  = query.value(4).toInt();
        region   = query.value(5).toInt();
        place    = query.value(6).toInt();
    }

    query.clear();
    query.exec( "SELECT * FROM страны WHERE country_id = " + QString::number(country) );

    QString country_name;

    // поиск
    while (query.next())
    {
        country_id      = query.value(0).toInt();
        country_name    = query.value(1).toString();
    }

    ui->comboBox->setCurrentIndex( ui->comboBox->findText( country_name ) );

    query.clear();
    query.exec( "SELECT * FROM регионы WHERE region_id = " + QString::number(region) );

    QString region_name;
    // поиск
    while (query.next())
    {
        region_id   = query.value(0).toInt();
        region_name = query.value(1).toString();
    }

    ui->comboBox_2->setCurrentIndex( ui->comboBox_2->findText( region_name ) );

    query.clear();
    query.exec( "SELECT * FROM нас_пункты WHERE place_id = " + QString::number(place) );

    QString place_name;
    // поиск
    while (query.next())
    {
        place_id   = query.value(0).toInt();
        place_name = query.value(1).toString();
    }

    ui->comboBox_3->setCurrentIndex( ui->comboBox_3->findText( place_name ) );
    ui->lineEdit_Fio->insert( fio  );
    ui->lineEdit_Adress->insert( adress );
    ui->lineEdit_Phone->insert( phone );
}
/*
------------
деструктор
------------
*/
Dialog_Abb_Info::~Dialog_Abb_Info()
{
    delete ui;
}
// --------------
// выбор страны
// --------------
void Dialog_Abb_Info::on_comboBox_currentIndexChanged(int index)
{
    //QMessageBox::information( this, "", QString::number(index+1) );

     QSqlQuery query;
    // добавляю регионы
    query.clear();
    query.exec( "SELECT * FROM регионы WHERE country_id = " + QString::number(index+1) );
    while (query.next())
    {
       ui->comboBox_2->addItem( query.value(1).toString() );
    }
}
// --------------
// ок
// --------------
void Dialog_Abb_Info::on_pushButton_clicked()
{
    QSqlQuery query;

    query.prepare( "UPDATE справочник SET country_id = :country_id, region_id = :region_id, place_id = :place_id, fio = :fio, adress = :adress, phone = :phone WHERE ID = :id;" );
    query.bindValue( ":id", this->id);
    query.bindValue( ":country_id",  country_id );
    query.bindValue( ":region_id",   region_id );
    query.bindValue( ":place_id",    place_id );
    query.bindValue( ":fio",     this->ui->lineEdit_Fio->text() );
    query.bindValue( ":adress",  this->ui->lineEdit_Adress->text() );
    query.bindValue( ":phone",   this->ui->lineEdit_Phone->text() );

    bool ret = query.exec();
    if ( !ret )
         QMessageBox::information( this, this->windowTitle(), "Невозможно выполнить запрос! : " + query.lastError().text() );

    this->close();
}
// --------------
// отмена
// --------------
void Dialog_Abb_Info::on_pushButton_2_clicked()
{
    this->close();
}


void Dialog_Abb_Info::on_comboBox_currentIndexChanged(const QString &arg1)
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

void Dialog_Abb_Info::on_comboBox_2_currentIndexChanged(const QString &arg1)
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

void Dialog_Abb_Info::on_comboBox_3_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    query.exec( "SELECT * FROM нас_пункты WHERE name = '" + arg1 + "'" );

    while (query.next())
    {
       place_id = query.value(0).toInt();
    }
}

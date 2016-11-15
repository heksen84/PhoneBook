/*
======================================================================
form_auth.cpp

======================================================================
*/
#include "form_auth.h"
#include "ui_form_auth.h"
#include <QMessageBox>
#include <QCryptographicHash>

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
/*
-----------
конструктор
-----------
*/
Form_Auth::Form_Auth(QWidget *parent) :QDialog(parent),ui(new Ui::Form_Auth)
{
    ui->setupUi(this);
    this->setWindowFlags( Qt::CustomizeWindowHint );
    ui->lineEdit_Pass->setEchoMode(QLineEdit::Password);

}
/*
----------
деструктор
----------
*/
Form_Auth::~Form_Auth()
{
    delete ui;
}

/*
------------------------------
вход
------------------------------
*/
void Form_Auth::on_pushButton_clicked()
{
    QSqlQuery query;
    query.exec( "SELECT * FROM авторизация" );

    QString login, pass;

    while (query.next())
    {
        login   = query.value(0).toString();
        pass    = query.value(1).toString();
    }

    QCryptographicHash md5_generator( QCryptographicHash::Md5 );
    md5_generator.addData( ui->lineEdit_Pass->text().toUtf8() );

    //QMessageBox::information( this, "", "Пароль в базе: " + pass + "\nПароль при вводе: " + md5_generator.result().toHex());

    if ( ui->lineEdit_login->text() == login && md5_generator.result().toHex() == pass )
    {
        Form_Auth::close();
    }
    else
        QMessageBox::warning( this, this->windowTitle(), "Неверные данные!!!" );
}
/*
-------
Отмена
-------
*/
void Form_Auth::on_pushButton_2_clicked()
{
    //Form_Auth::close();
    exit(0);
}

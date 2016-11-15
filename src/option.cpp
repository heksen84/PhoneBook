#include "option.h"
#include "ui_option.h"
#include <QCryptographicHash>
#include <QMessageBox>

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

QString login, pass;

Option::Option(QWidget *parent) :QDialog(parent),ui(new Ui::Option)
{
    ui->setupUi(this);
}

Option::~Option()
{
    delete ui;
}

/*
------
OK!
------
*/
void Option::on_pushButton_clicked()
{
    QCryptographicHash md5_generator( QCryptographicHash::Md5 );
    md5_generator.addData( ui->lineEdit_2->text().toUtf8() );

    QSqlQuery query;
    query.exec( "UPDATE авторизация SET login='" + ui->lineEdit->text() + "', password='" + md5_generator.result().toHex() + "'");
    this->close();
}

// отмена
void Option::on_pushButton_2_clicked()
{
    Option::close();
}

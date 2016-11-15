/*
========================
main.cpp

========================
*/
#include <QApplication>
#include "form_auth.h"
#include <QMessageBox>
#include "mainwindow.h"
#include <QSplashScreen>
#include <qthread.h>
#include <QTranslator>

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>


/*
 ----------
 старт
 ----------
 */
int main(int argc, char *argv[])
{

   QStringList paths = QCoreApplication::libraryPaths();

   paths.append(".");
   paths.append("imageformats");
   paths.append("platforms");
   paths.append("sqldrivers");

   QCoreApplication::setLibraryPaths(paths);
   QApplication app(argc, argv);
   QString dbName;
   QSqlDatabase db;

    db      = QSqlDatabase::addDatabase( "QODBC" );
    dbName  = "DRIVER={Microsoft Access Driver (*.mdb)};DSN='';DBQ=справочник.mdb";
    db.setDatabaseName( dbName );
    db.open();

    if (!db.open())
    {
       QMessageBox::critical( 0, "", db.lastError().text());
       exit(1);
    }


    QPixmap pixmap( "splash.jpg" );
    QSplashScreen splash(pixmap);
    splash.show();
    QThread::sleep(1);

    Form_Auth fa;
    fa.exec();
    splash.finish( &fa );

    MainWindow mw;
    mw.show();


    return app.exec();
}

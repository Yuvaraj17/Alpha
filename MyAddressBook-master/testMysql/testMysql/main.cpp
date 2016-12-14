#include <QtGui>
#include <QtSql>
#include<QTableView>
#include <QApplication>
#include<QTableWidget>
#include<QMessageBox>

#include "testmysql.h"

int main(int argc,char* argv[])
{
QApplication app(argc,argv);
TestMySQL *t=new TestMySQL();
t->test();
return app.exec();
}



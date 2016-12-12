#include "addressbookcontroller.h"
#include "sqlitedatasource.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SQLiteDataSource dSrc("contacts.db", true);  
    AddressBookController myBook(dSrc);
    app.setStyleSheet("QMainWindow{background-image:url(D:/images.jpg)}");
    myBook.start();
    return app.exec();
}


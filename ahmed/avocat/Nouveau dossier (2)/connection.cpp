#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test_bd");
db.setUserName("dabbebi");//inserer nom de l'utilisateur
db.setPassword("dabbebi");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}

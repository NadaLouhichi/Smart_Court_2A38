#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{
    QSqlDatabase db = QSqlDatabase ::addDatabase("QODBC");
            bool test=false;

db.setDatabaseName("Source_Projet2A");
db.setUserName("System");//inserer nom de l'utilisateur
db.setPassword("Persephone1*");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
void Connection::closeconect (){db.close();}

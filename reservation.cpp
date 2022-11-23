 #include "reservation.h"
#include <QSqlQuery>
#include <QVariant>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QTableView>
#include "QtDebug"
#include <QObject>
reservation::reservation()
{
    IDR=0;
    DUREE=0;
    NPR="";
    ROLE="";
    EMAIL="";
    NUMTEL="";
     IDSR="";
}



reservation::reservation(int a,QDate b,int c,QString d,QString e,QString f,QString g,QString h)
{
    this->IDR=a; this->DATER=b; this->DUREE=c; this-> NPR=d; this->ROLE=e; this->EMAIL=f;this->NUMTEL=g;this->IDSR=h;};

   int reservation:: getidr(){return IDR;}

         QDate reservation:: getdater(){return DATER;}
         int reservation:: getduree(){return DUREE;}
         QString reservation:: getnpr(){return NPR;}
         QString  reservation:: getrole(){return ROLE;}

         QString reservation:: getemail(){return EMAIL;}
         QString reservation:: getnumtel(){return NUMTEL;}
         QString reservation:: getidsr(){return IDSR;}

          void reservation:: setidr(int IDR){this->IDR=IDR;}

           void reservation:: setdater(QDate DATER){this->DATER =DATER;}
           void  reservation:: setduree(int DUREE){this->DUREE=DUREE;}
           void reservation:: setnpr(QString NPR){this->NPR=NPR;}
           void reservation:: setrole(QString ROLE){this->ROLE=ROLE;}

           void reservation:: setemail(QString EMAIL){this->EMAIL=EMAIL;}
           void  reservation:: setnumtel(QString NUMTEL){this->NUMTEL=NUMTEL;}
           void reservation:: setidsr(QString IDSR ){this->IDSR=IDSR;}





void reservation::reserver(reservation r ){

QSqlQuery qry;

    QString sQuery=("INSERT INTO GS_RESERVATIONS (IDR,DATER,DUREE,NPR,ROLE,EMAIL,NUMTEl,IDSR) "
                        "VALUES (:IDR, :DATER, :DUREE,:NPR,:ROLE,:EMAIL,:NUMTEL,:IDSR)");


    qry.prepare(sQuery);
    qry.bindValue(":IDR",r.getidr());
    qry.bindValue(":DATER",r.getdater());
    qry.bindValue(":DUREE",r.getduree());
    qry.bindValue(":NPR",r.getnpr());
    qry.bindValue(":ROLE",r.getrole());
    qry.bindValue(":EMAIL",r.getemail());
    qry.bindValue(":NUMTEL",r.getnumtel());
    qry.bindValue(":IDSR",r.getidsr());
    if(qry.exec())
    {
        QMessageBox::information(nullptr, QObject::tr("sql query successful"),
                           QObject::tr("row created and saved.\n"
                                       "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else{
        QMessageBox::critical(nullptr, QObject::tr("sql query unsuccessful"),
                           QObject::tr("row not created and not saved.\n"
                                       "Click Cancel to exit."), QMessageBox::Cancel);
    }



}
QSqlQueryModel * reservation::afficherR()
{


    QSqlQueryModel * model=new QSqlQueryModel();
          model->setQuery("SELECT (IDR,DATER,DUREE,NPR,ROLE,EMAIL,NUMTEl,IDS,NUMS,ETAGE)  FROM GS_RESERVATIONS NATURAL JOIN GS_SALLES WHERE IDSR=IDS ");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDR"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("DUREE"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("NPR"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("ROLE"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("EMAIL"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("NUMTEL"));
          model->setHeaderData(7, Qt::Horizontal, QObject::tr("IDSR"));


    return model;

}

int reservation :: statistique_RS(QString role)
{

int nbrR=0;

  QSqlQuery requete("select  ROLE from GS_RESERVATIONS where ROLE LIKE '"+role+"%'  ");

   while(requete.next())
    {
        nbrR++;
        }

   return nbrR;
}
int reservation :: statistique_RT()
{
 int nbrR=0;
  QSqlQuery requete("select ROLE from GS_RESERVATIONS ");

   while(requete.next())
    {
        nbrR++;
        }
   return nbrR;

}
//chercher salle reserve ou non bshh ypkhrej mmsg d aalerte

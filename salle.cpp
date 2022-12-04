#include "salle.h"
#include <QSqlQuery>
#include <QVariant>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QTableView>
#include "QtDebug"
#include <QObject>
salle::salle()
{
     IDS="";
     NUMS=0;
     ETAGE="" ;
     NBRB=0;
     NBRCH=0;
     NBRT=0;
}
salle::salle(QString a,int b,QString c,int d,int e,int f)
{
    this->IDS=a; this->NUMS=b; this->ETAGE=c;this->NBRB=d; this->NBRCH=e; this->NBRT=f;};
QString salle:: getids(){return IDS;}
int salle:: getnums(){return NUMS;}
QString salle:: getetage(){return ETAGE;}
int salle:: getnbrb(){return NBRB;}
int salle:: getnbrch(){return NBRCH;}
int salle:: getnbrt(){return NBRT;}
void salle:: setids(QString IDS){this->IDS=IDS;}
void salle:: setnums(int NUMS){this->NUMS=NUMS;}
void salle:: setetage(QString ETAGE){this->ETAGE=ETAGE;}
void salle:: setnbrb(int NBRB){this->NBRB=NBRB;}
void salle:: setnbrch(int NBRCH){this->NBRCH=NBRCH;}
void salle:: setnbrt(int NBRT){this->NBRT=NBRT;}

//Ajouter
void salle:: ajouter(salle s)
{
    QString sQuery=("INSERT INTO GS_SALLES (IDS,NUMS,ETAGE,NBRB,NBRCH,NBRT) "
                    "VALUES (:IDS,:NUMS,:ETAGE,:NBRB,:NBRCH,:NBRT)");

    QSqlQuery qry;

    qry.prepare(sQuery);
    qry.bindValue(":IDS",s.getids());
    qry.bindValue(":NUMS",s.getnums());
    qry.bindValue(":ETAGE",s.getetage());
    qry.bindValue(":NBRB",s.getnbrb());
    qry.bindValue(":NBRCH",s.getnbrch());
    qry.bindValue(":NBRT",s.getnbrt());

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
// affichage
QSqlQueryModel* salle::afficher(){
   QString sQuery=("SELECT IDS,NUMS,ETAGE,NBRB,NBRCH,NBRT FROM GS_SALLES ");

   QSqlQueryModel* model=new QSqlQueryModel();

   QSqlQuery qry;

   qry.prepare(sQuery);

   qry.exec();
   model->setQuery(qry);
return model;
}
QSqlQueryModel* salle::afficherA(){
   QString sQuery=("SELECT IDS,NUMS,ETAGE,NBRB,NBRCH,NBRT,ETAT FROM GS_SALLES ");

   QSqlQueryModel* model=new QSqlQueryModel();

   QSqlQuery qry;

   qry.prepare(sQuery);

   qry.exec();
   model->setQuery(qry);
return model;
}
// modification
bool salle::modifier_Salle(){

           QSqlQuery qry;
           QString nums=QString::number(NUMS);


          qry.prepare(" UPDATE GS_SALLES SET (IDS =:IDS, NUMS =:NUMS ,ETAGE =:ETAGE, NBRB=:NBRB, NBRCH=:NBRCH,NBRT=:NBRT) WHERE  IDS =:IDS");

                              qry.bindValue(":IDS",IDS);
                              qry.bindValue(":NUMS",NUMS);
                              qry.bindValue(":ETAGE",ETAGE);
                              qry.bindValue(":NBRB",NBRB);
                              qry.bindValue(":NBRCH",NBRCH);
                              qry.bindValue(":NBRT",NBRT);

                             return qry.exec();

        }
//SUPPRESSION
bool salle::supprimer(QString IDS)
{
        QSqlQuery query;

             query.prepare("DELETE FROM GS_SALLES WHERE IDS=:IDS ");
             query.bindValue(":IDS",IDS);
             return query.exec();
    }

QSqlQueryModel *salle::trier(QString x)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    qDebug()<<x<<endl;
    if(x=="ID salle")
        model->setQuery("select * from GS_SALLES order by IDS ");
    else if(x=="Numero Salle")
        model->setQuery("select * from GS_SALLES order by NUMS ");
    else if (x=="Etage")
        model->setQuery("select * from GS_SALLES order by ETAGE ");
     else if (x=="Nombre de banc")
    model->setQuery("select * from GS_SALLES order by NBRB");
    else if (x=="Nombre de chaise")
   model->setQuery("select * from GS_SALLES order by NBRCH");
    else if (x=="Nombre de table")
   model->setQuery("select * from GS_SALLES order by NBRT");


        return model;
}

QSqlQueryModel *salle::rechercher(QString a)
{
    QSqlQueryModel * query=new QSqlQueryModel();
    query->setQuery("select * from system.GS_SALLES where (IDS like "+a+"%)");
    return    query;
}



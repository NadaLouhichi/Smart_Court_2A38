#include "affaires.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
Affaires::Affaires()
{
    numa=0; type=""; date_a=""; nom_a=""; prenom_a=""; cin_a=0; info="";
}
    Affaires::Affaires(int numa,QString type,QString date_a,QString nom_a,QString prenom_a,int cin_a,QString info)
{this->numa=numa;this->type=type;this->date_a=date_a;this->nom_a=nom_a;this->prenom_a=prenom_a;this->cin_a=cin_a;this->info=info;}
    int Affaires::getnuma(){return numa;}
    QString Affaires::gettype(){return type;}
    QString Affaires::getdate_a(){return date_a;}
    QString Affaires::getnoma_a(){return nom_a;}
    QString Affaires::getprenom_a(){return prenom_a;}
    int Affaires::getcin_a(){return cin_a;}
    QString Affaires::getinfo(){return info;}

    void Affaires::setnuma(int numa){this->numa=numa;}
    void Affaires::settype(QString type){this->type=type;}
    void Affaires::setdate_a(QString date_a ){this->date_a=date_a;}
    void Affaires::setnoma_a(QString nom_a){this->nom_a=nom_a;}
    void Affaires::setprenom_a(QString prenom_a){this->prenom_a=prenom_a;}
    void Affaires::setcin_a(int cin_a){this->cin_a=cin_a;}
    void Affaires::setinfo(QString info){this->info=info;}


    bool Affaires::ajouter()
    {
        QSqlQuery query;
        QString numa_string=QString::number(numa);
        QString cin_a_string=QString::number(cin_a);
              query.prepare("INSERT INTO AFFAIRESJ (NUMA, TYPE, DATE_A, NOM_A, PRENOM_A, CIN_A, INFO) "
                            "VALUES (:numa, :type, :date_a, :nom_a, :prenom_a, :cin_a, :info)");
              query.bindValue(":numa",numa_string);
              query.bindValue(":type", type);
              query.bindValue(":date_a", date_a);
              query.bindValue(":nom_a", nom_a);
              query.bindValue(":prenom_a", prenom_a);
              query.bindValue(":cin_a", cin_a);
              query.bindValue(":info", info);
              return query.exec();


    }
bool Affaires::supprimer(int numa)
{
    QSqlQuery query;
          query.prepare("Delete from AFFAIRESJ where numa=:numa");
          query.bindValue(0,numa);
          return query.exec();
}


QSqlQueryModel* Affaires::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
          model->setQuery("SELECT* FROM AFFAIRESJ");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numero d affaires"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type d affaires"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("date de l'affaires"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom d'accuser"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("prenom d'accuser"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("cin d'accuser"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("info sur l'accuser"));
    return model;
}

bool Affaires::modifier()
{
     QSqlQuery query;
     QString numa_string= QString::number(numa);
     QString cin_a_string= QString::number(cin_a);
QString numa_a=QString (numa);
 query.prepare("UPDATE AFFAIREJ SET numa=:numa, type=:type , date_a=:date_a , nom_a=:nom_a , prenom_a:=prenom_a , cin_a=:cin_a , info=:info where numa='"+numa_a+"'");
     query.bindValue(":numa",numa_string);
     query.bindValue(":type",type);
     query.bindValue(":date_a",date_a);
     query.bindValue(":nom_a",nom_a);
     query.bindValue(":prenom_a",prenom_a);
     query.bindValue(":cin_a",cin_a);
     query.bindValue(":info",info);

     return query.exec();
}

QSqlQueryModel* Affaires::trier_par_nom()
{

    QSqlQueryModel*modelT=new QSqlQueryModel();
    modelT->setQuery("SELECT *FROM AFFAIRESJ ORDER BY NOM_A ASC");
     modelT->setHeaderData(0, Qt::Horizontal, QObject::tr("numa"));
    modelT->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
    modelT->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
    modelT->setHeaderData(3, Qt::Horizontal, QObject::tr("nom"));
    modelT->setHeaderData(4, Qt::Horizontal, QObject::tr("prenom"));
    modelT->setHeaderData(5, Qt::Horizontal, QObject::tr("cin"));
    modelT->setHeaderData(6, Qt::Horizontal, QObject::tr("info"));


return modelT;
}

QSqlQueryModel* Affaires::trier_par_prenom()
{

    QSqlQueryModel*modelT=new QSqlQueryModel();
    modelT->setQuery("SELECT *FROM AFFAIRESJ ORDER BY PRENOM_A ASC");
     modelT->setHeaderData(0, Qt::Horizontal, QObject::tr("numa"));
    modelT->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
    modelT->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
    modelT->setHeaderData(3, Qt::Horizontal, QObject::tr("nom"));
    modelT->setHeaderData(4, Qt::Horizontal, QObject::tr("prenom"));
    modelT->setHeaderData(5, Qt::Horizontal, QObject::tr("cin"));
    modelT->setHeaderData(6, Qt::Horizontal, QObject::tr("info"));


return modelT;
}

QSqlQueryModel* Affaires::chercher_affaires(const QString &str)
 {
       QSqlQueryModel *model=new QSqlQueryModel();
       model->setQuery("SELECT* FROM AFFAIRESJ where numa like '"+str+"%' ");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numero d affaires"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type d affaires"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("date de l'affaires"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom d'accuser"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("prenom d'accuser"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("cin d'accuser"));
       model->setHeaderData(6, Qt::Horizontal, QObject::tr("info sur l'accuser"));


       return model;
}
int Affaires::calculer(QString choix,QString choix2)
{
    QSqlQuery query;
          query.prepare("SELECT * FROM AFFIRESJ WHERE type BETWEEN (:choix) AND (:choix2)");
          query.bindValue(":choix",choix);
          query.bindValue(":choix2",choix2);

          query.exec();
          int total = 0;
          while (query.next()) {
            total++;
 }

          return total;
}

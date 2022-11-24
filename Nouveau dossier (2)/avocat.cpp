#include "avocat.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
avocat::avocat()
{
    cin=0; nom="";prenom="";
    mail="";phone=0;age=0;motdepasse=0;
}
    avocat::avocat (int cin,QString nom,QString prenom ,QString mail,int phone,int age,int motdepasse)
{this->cin=cin;this->nom=nom;this->prenom=prenom;this->mail=mail;this->phone=phone;this->age=age;this->motdepasse=motdepasse;}
    int avocat::getcin(){return cin;}
    int avocat::getphone(){return phone;}
    QString avocat::getnom(){return nom;}
    QString avocat::getprenom(){return prenom;}
    QString avocat::getmail(){return mail;}
    int avocat::getage(){return age;}
    int avocat::getmotdepasse(){return motdepasse;}

    void avocat::setcin(int cin){this->cin=cin;}
    void avocat::setphone(int phone){this->phone=phone;}
    void avocat::setnom(QString nom){this->nom=nom;}
    void avocat::setprenom(QString prenom){this->prenom=prenom;}
    void avocat::setmail(QString mail){this->mail=mail;}
    void avocat::setage(int age){this->age=age;}
    void avocat::setmotdepasse(int motdepasse){this->motdepasse=motdepasse;}


    bool avocat::ajouter()
    {
        QSqlQuery query;
        QString cin_string=QString::number(cin);
        QString phone_string=QString::number(phone);
        QString age_string=QString::number(age);
        QString motdepasse_string=QString::number(motdepasse);



              query.prepare("INSERT INTO TEST (CIN,NOM,PRENOM,MAIL,PHONE,AGE,MOTDEPASSE) "
                            "VALUES (:cin, :nom,:prenom,:mail,:phone,:age,:motdepasse)");
              query.bindValue(":cin",cin_string);
                query.bindValue(":nom",nom);


               query.bindValue(":prenom",prenom);

                query.bindValue(":mail",mail);
                query.bindValue(":phone",phone_string);

                query.bindValue(":age",age_string);
                query.bindValue(":motdepasse",motdepasse_string);
              return query.exec();


    }
bool avocat::supprimer(int cin)
{
    QSqlQuery query;
          query.prepare("Delete from TEST where cin=:cin");
          query.bindValue(0,cin);
          return query.exec();
}


QSqlQueryModel* avocat::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
          model->setQuery("SELECT* FROM TEST");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin de avocat"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom de avocat"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom de avocat"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail de avocat"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("phone de avocat"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("age de avocat"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("motdepasse de avocat"));



    return model;
}

QSqlQueryModel* avocat::afficher_avocat_trie_Nom()
{

    QSqlQueryModel*modelT=new QSqlQueryModel();
    modelT->setQuery("SELECT *FROM TEST ORDER BY NOM ASC");
     modelT->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    modelT->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    modelT->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    modelT->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
    modelT->setHeaderData(4, Qt::Horizontal, QObject::tr("Phone"));
    modelT->setHeaderData(5, Qt::Horizontal, QObject::tr("age de avocat"));
    modelT->setHeaderData(6, Qt::Horizontal, QObject::tr("motdepasse de avocat"));




return modelT;
}
QSqlQueryModel* avocat::afficher_avocat_trie_prenom()
{

    QSqlQueryModel*modelp=new QSqlQueryModel();
   modelp->setQuery("SELECT *FROM TEST ORDER BY PRENOM ASC");
     modelp->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
   modelp->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    modelp->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    modelp->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
   modelp->setHeaderData(4, Qt::Horizontal, QObject::tr("Phone"));
   modelp->setHeaderData(5, Qt::Horizontal, QObject::tr("age de avocat"));
   modelp->setHeaderData(6, Qt::Horizontal, QObject::tr("motdepasse de avocat"));




return modelp;
}

bool avocat::modifier()
{
    QSqlQuery query;
                     QString id_string=QString::number(cin);
                     QString tel_string=QString::number(phone);
                     QString age_string=QString::number(age);
                     QString motdepasse_string=QString::number(motdepasse);



                       query.prepare("UPDATE TEST SET nom=:nom, prenom=:prenom ,mail=:mail, phone=:phone,age=:age, motdepasse=:motdepasse where cin=:cin");


                             query.bindValue(":cin", cin);
                             query.bindValue(":nom", nom);
                             query.bindValue(":prenom", prenom);
                             query.bindValue(":mail", mail);
                             query.bindValue(":phone",phone);
                             query.bindValue(":age", age);
                             query.bindValue(":motdepasse", motdepasse);



                         return query.exec();
       }


QSqlQueryModel* avocat::chercher_avocat(QString Re ){

    QSqlQueryModel*modelR=new QSqlQueryModel();
    modelR->setQuery("SELECT * FROM TEST WHERE CIN LIKE'%"+Re+"%'");

    return modelR;
}
int avocat::calculer1(int choix,int choix2)
{
    QSqlQuery query;
          query.prepare("SELECT * FROM TEST WHERE age BETWEEN (:choix) AND (:choix2)");
          query.bindValue(":choix",choix);
          query.bindValue(":choix2",choix2);

          query.exec();
          int total = 0;
          while (query.next()) {
            total++;
 }

          return total;
}


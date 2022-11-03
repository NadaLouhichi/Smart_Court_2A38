#include "citoyen.h"

Citoyen::Citoyen()
{

}
Citoyen::Citoyen(int cin,QString nom,QString prenom,QString affinite,int livre , int nbpage ,QString postevide , int duree )
{
    this->cin=cin;
    this->nom=nom;
    this->prenom=prenom;
    this->affinite=affinite;
    this->livre=livre;
    this->nbpage=nbpage;
    this->postevide=postevide;
    this->duree=duree;
}
bool Citoyen::ajouter()
{

    QSqlQuery query;


          query.prepare("INSERT INTO citoyens  "
                        "VALUES (:cin,:nom, :prenom, :affinite, :livre, :nbpage,:postevide,:duree)");
          query.bindValue(":cin", cin);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);
           query.bindValue(":affinite", affinite);
            query.bindValue(":livre", livre);
            query.bindValue(":nbpage", nbpage);
            query.bindValue(":postevide", postevide);
            query.bindValue(":duree", duree);


          return query.exec();
}

QSqlQueryModel* Citoyen::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT* FROM Citoyens");

    return model;
}

bool Citoyen::supprimer(int cin)
{
    QSqlQuery query;
          query.prepare("DELETE FROM citoyens where cin=:cin ");
          query.bindValue(":cin", cin);

    return query.exec();
}
bool Citoyen::modifier()
{
    QSqlQuery query;

    query.prepare("UPDATE citoyens set  nom=:nom ,prenom =:prenom,affinites=:affinite, livre=:livre, nbpage=:nbpage , postevide=:postevide , duree=:duree WHERE cin=:cin");
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
     query.bindValue(":affinite", affinite);
      query.bindValue(":livre", livre);
      query.bindValue(":nbpage", nbpage);
      query.bindValue(":postevide", postevide);
      query.bindValue(":duree", duree);
    return query.exec();

}

QSqlQueryModel* Citoyen::getAllId()
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT cin FROM Citoyens");

    return model;
}

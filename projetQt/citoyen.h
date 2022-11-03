#ifndef CITOYEN_H
#define CITOYEN_H
#include <QString>
#include <QSqlQueryModel>
#include <QObject>
#include <QDebug>
#include <QSqlQuery>

class Citoyen
{
private:
    int livre,nbpage,duree,cin;
    QString nom,prenom,affinite,postevide;

public:
    Citoyen();
    Citoyen(int ,QString,QString,QString,int,int,QString,int);

    //getters
    int getCin(){return cin;}
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getAffinite(){return affinite;}
    QString getPoste(){return postevide;}
    int getLivre(){return livre;}
    int getNbr(){return nbpage;}
    int getDuree(){return duree;}

    //setters
    void setCin(int cin){this->cin=cin;}
    void setNom(QString nom){this->nom=nom;}
    void setPrenom(QString prenom){this->prenom=prenom;}
    void setAffinite(QString affinite){this->affinite=affinite;}
    void setPoste(QString postevide){this->postevide=postevide;}
    void setLivre(int livre){this->livre=livre;}
    void setNbr(int nbpage){this->nbpage=nbpage;}
    void setDuree(int duree){this->duree=duree;}


    bool ajouter();
   QSqlQueryModel* afficher();
   bool supprimer(int);
   bool modifier();
   QSqlQueryModel* getAllId();

};

#endif // CITOYEN_H

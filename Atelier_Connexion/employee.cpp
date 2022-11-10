#include "employee.h"
#include "QSqlQuery"
#include "QtDebug"
#include <QObject>
Employee::Employee()
{
CIN=0;Nom="";Prenom="",Email="",Phone="",Function="",Mdp="";
}
Employee::Employee(int CIN,QString Nom,QString Prenom,QString Email,QString Phone,QString Function,QString Mdp)
{this->CIN=CIN; this->Nom=Nom; this->Prenom=Prenom; this->Email=Email; this->Phone=Phone; this->Function=Function; this->Mdp=Mdp;}
int Employee::getCIN(){return CIN;}
QString Employee::getNom(){return Nom;}
QString Employee::getPrenom(){return Prenom;}
QString Employee::getEmail(){return Email;}
QString Employee::getPhone(){return Phone;}
QString Employee::getFunctio(){return Function;}
QString Employee::getMdp(){return Mdp;}
void Employee::setCIN(int CIN){this->CIN=CIN;}
void Employee::setNom(QString Nom){this->Nom=Nom;}
void Employee::setPrenom(QString Prenom){this->Prenom=Prenom;}
void Employee::setEmail(QString Email){this->Email=Email;}
void Employee::setPhone(QString Phone){this->Phone=Phone;}
void Employee::setFunction(QString Function){this->Function=Function;}
void Employee::setMdp(QString Mdp){this->Mdp=Mdp;}
bool Employee::ajouter()
{
                         QSqlQuery query;
                                      QString CIN_string = QString::number(CIN);
                              query.prepare("INSERT INTO GS_EMPLOYE (CIN,NOM,PRENOM,EMAIL,PHONE,FUNCTION,MDPS) VALUES (:CIN, :forNom, :forPrenom, :forEmail, :forPhone, :forFunction, :forMdp)");
                              query.bindValue(":CIN",CIN_string);
                              query.bindValue(":forNom", Nom);
                              query.bindValue(":forPrenom", Prenom);
                              query.bindValue(":forEmail", Email);
                              query.bindValue(":forPhone", Phone);
                              query.bindValue(":forFunction", Function);
                              query.bindValue(":forMdp",Mdp);
                             return query.exec();

}

bool Employee::modifier_Employee(){

           QSqlQuery query;
           QString id_string=QString::number(CIN);


          query.prepare(" UPDATE GS_EMPLOYE SET CIN =:CIN ,NOM = :Nom, PRENOM = :Prenom, EMAIL= :Email, PHONE= :Phone , FUNCTION= :Function ; MDPS=Mdp WHERE  CIN = :CIN");
          query.bindValue(":CIN", id_string);
          query.bindValue(":Nom", Nom);
          query.bindValue(":Prenom", Prenom);
          query.bindValue(":Email", Email);
          query.bindValue(":Phone", Phone);
          query.bindValue(":Function", Function);
          query.bindValue(":Mdp", Mdp);

         return query.exec();

}
bool Employee::supprimer(int CIN)
{
QSqlQuery query;
QString res=QString::number(CIN);
query.prepare("DELETE FROM GS_EMPLOYE WHERE CIN=:cin ");
             query.bindValue(":cin",res);
             return query.exec();
    }

QSqlQueryModel* Employee::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
          model->setQuery("SELECT* FROM GS_EMPLOYE");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("Phone"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("Function"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("Mdps"));
          return model;
}

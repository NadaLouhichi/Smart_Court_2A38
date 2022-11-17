#include "historique.h"

historique::historique()
{
         numa_h=0;
         type_h="xx";
         date_h ="xx";
         nom_h="xx";
         prenom_h ="xx";
         cin_h=0;
         info_h="xx";

}


historique::historique(int numa_h,QString type_h,QString date_h,QString nom_h,QString prenom_h,int cin_h,QString info_h)
{this->numa_h=numa_h;
this-> type_h=type_h;
 this-> date_h= date_h;
    this-> nom_h=nom_h;
    this-> prenom_h=prenom_h;
     this-> cin_h=cin_h;
     this-> info_h=info_h;


}

void historique::setnuma_h(int n)
{ numa_h = n;}
void historique::settype_h(QString n)
{ type_h = n;}
void historique::setdate_h(QString n)
{ date_h= n;}
void historique::setnom_h(QString n)
{ nom_h= n;}
void historique::setprenom_h(QString n)
{ prenom_h= n;}
void historique::setcin_h(int n)
{ cin_h= n;}
void historique::setinfo_h(QString n)
{ info_h= n;}

int historique ::getnuma_h()
{return numa_h;}




QSqlQueryModel* historique::afficherh()
   {
     QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM HISTORIQUE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_P"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID_S"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM_P"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ACTEUR"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("TYPER"));
return  model;
 }




#ifndef HISTORIQUE_H
#define HISTORIQUE_H
#include <QMainWindow>
#include <QDateTime>
#include<QSqlQuery>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
#include<QtDebug>
#include<QObject>
#include <QMessageBox>

class historique
{
public:
    historique();
   historique(int,QString,QString,QString,QString,int,QString);
   void setnuma_h(int n);
   void settype_h(QString n);
   void setdate_h(QString n);
   void setnom_h(QString n);
   void setprenom_h(QString n);
   void setcin_h(int n);
   void setinfo_h(QString n);

   int getnuma_h();
   QString gettype_h();
   QString getdate_h();
   QString getnom_h();
   QString getprenom_h();
   int getcin_h();
   QString getinfo_h();
QSqlQueryModel* afficherh();

   //bool supprimer(int id_p );


private:
   int numa_h,cin_h;
    QString type_h,date_h,nom_h,prenom_h,info_h;



};


#endif // HISTORIQUE_H

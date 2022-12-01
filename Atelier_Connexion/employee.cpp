#include "employee.h"
#include "QSqlQuery"
#include "QtDebug"
#include <QObject>
# include <QSystemTrayIcon>
#include <QSoundEffect>
#include <QIcon>
#include "QDate"

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


   query.prepare(" UPDATE GS_EMPLOYE SET CIN =:CIN ,NOM = :Nom, PRENOM =:Prenom, EMAIL=:Email, PHONE=:Phone , FUNCTION=:Function , MDPS=:Mdp WHERE CIN = :CIN");
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

QSqlQueryModel* Employee::rechercher(QString a)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from GS_EMPLOYE where (Nom like '%"+a+"%' or Prenom like '%"+a+"%' or CIN like '%"+a+"%' or Function like '%"+a+"%' )");
    return    model;
 }
bool Employee::testAJ(QString a) //pour notifier les avocats et juges
{
    bool test=false;
    if(a=="Juge" or a=="Avocat")
       { test=true;}
    return test;
}
bool Employee::testNP(QString a ,QString p)
{
    bool testN=false;
    bool testP=false;
    bool testNP=false;
    testN=rechercher(a);
    testP=rechercher(p);
    if(testN and testP)
    {
       testNP=(testN and testP);
       return testNP;
    }
    else testNP=false;
    return testNP;
}

QSqlQueryModel *Employee::trier(QString x)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    qDebug()<<x<<endl;
    if(x=="Nom")
        model->setQuery("select* from GS_Employe order by Nom");
    else if(x=="CIN")
        model->setQuery("select CIN,NOM,PRENOM,EMAIL,PHONE,FUNCTION from GS_Employe order by CIN");
    else if(x=="Prenom")
        model->setQuery("select CIN,NOM,PRENOM,EMAIL,PHONE,FUNCTION from GS_Employe order by Prenom");
    else if (x=="Function")
        model->setQuery("select CIN,NOM,PRENOM,EMAIL,PHONE,FUNCTION from GS_Employe order by Function");
        return model;
}
int Employee :: statistique_E(QString Function)
{
 int nbrEF=0;
  QSqlQuery requete("select  FUNCTION from GS_Employe  where FUNCTION like '"+Function+"%' ;");

   while(requete.next())
    {
        nbrEF++;
        }
   return nbrEF;

}
int Employee :: statistique_ET()
{
    int nbrET=0;
     QSqlQuery requete("select FUNCTION from GS_Employe ");
      while(requete.next())
       {
           nbrET++;
       }
           return nbrET;
}

bool Employee::notification()
 {
    bool  test=false;
            int n=0;
               QSqlQuery requete("SELECT DATEA FROM GS_AFFAIRESJ WHERE DATEA LIKE (sysdate+2);"); //date du systeme
            while(requete.next())
                {
                test=true;
                n++;
                 }
            if(n!=0)

            {
                        QSystemTrayIcon *trayIcon = new QSystemTrayIcon;
                        trayIcon->setIcon(QIcon(":Desktop/studies/2A/projet/gestion employe_f/Atelier_Connexion/rsc/notif.png"));
                        trayIcon->show();
                        trayIcon->showMessage("Attention" ,"Vous avez un affaire juridique dans deux jours",QSystemTrayIcon::Information,15000);
                        // include affaireJuridique.h n3ayet lel affichage
                        if(trayIcon)
                        {
                           QSoundEffect * sound_effect = new QSoundEffect;
                               sound_effect->setSource(QUrl("Desktop/studies/2A/projet/gestion employe_f/Atelier_Connexion/rsc/sound.wav"));
                             // sound_effect->setLoopCount(QSoundEffect::Infinite);
                               sound_effect->setVolume(0.9);
                               sound_effect->play();
                           //  QEventLoop loop;
                           //  loop.exec();
                         }
           }
      return test;
}
bool Employee::notificationA(QString Function)
 {
    bool  test=false;
            int n=0;
               QSqlQuery requete("select  FUNCTION from GS_Employe  where FUNCTION like '"+Function+"%'");
            while(requete.next())
                {
                test=true;
                n++;
                 }
            if(n!=0)

            {
                        QSystemTrayIcon *trayIcon = new QSystemTrayIcon;
                        trayIcon->setIcon(QIcon(":Desktop/studies/2A/projet/gestion employe_f/Atelier_Connexion/rsc/notif.png"));
                        trayIcon->show();
                        trayIcon->showMessage("Attention" ,"Il y'a une fuite de gaz!!!",QSystemTrayIcon::Information,15000);
                        if(trayIcon)
                        {
                           QSoundEffect * sound_effect = new QSoundEffect;
                               sound_effect->setSource(QUrl("Desktop/studies/2A/projet/gestion employe_f/Atelier_Connexion/rsc/sound.wav"));
                             // sound_effect->setLoopCount(QSoundEffect::Infinite);
                               sound_effect->setVolume(0.9);
                               sound_effect->play();
                           //  QEventLoop loop;
                           //  loop.exec();
                         }
           }
      return test;
}

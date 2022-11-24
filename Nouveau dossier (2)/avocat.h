#ifndef AVOCAT_H
#define AVOCAT_H
#include <QString>
#include <QSqlQueryModel>

class avocat
{
public:
    avocat();
    avocat(int,QString,QString,QString,int,int,int);
    int getcin();
     int getphone();
    QString getnom();
    QString getprenom();
    QString getmail();
    int getage();
    int getmotdepasse();
    void setcin(int);
     void setphone(int);
    void setnom(QString);
    void setprenom(QString);
    void setmail(QString);
    void setage(int);
    void setmotdepasse(int);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);

    bool modifier();
QSqlQueryModel* afficher_avocat_trie_Nom();
QSqlQueryModel* afficher_avocat_trie_prenom();
QSqlQueryModel* chercher_avocat(QString Re);
int calculer1(int choix,int choix2);

private:
    int cin;
    QString nom;
    QString prenom;
    QString mail;
    int phone;
    int age;
    int motdepasse;



};

#endif // AVOCAT_H

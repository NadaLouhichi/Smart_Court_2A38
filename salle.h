#ifndef SALLE_H
#define SALLE_H
#include <QString>
#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QSqlQueryModel>
#include <QTableView>
#include <QString>
class salle
{
    int NUMS, NBRB,NBRCH,NBRT;
    QString IDS,ETAGE ;
public:
    salle();
    salle(QString,int,QString,int,int,int);

    QString getids();
    int getnums();
    QString getetage();
    int getnbrb();
    int getnbrch();
    int getnbrt();
    void setids(QString);
    void setnums(int);
    void setetage(QString);
   void setnbrb(int);
   void setnbrch(int);
   void setnbrt(int);
    void ajouter(salle s);
    QSqlQueryModel* afficher();
    bool supprimer(QString);
    bool modifier_Salle();
    QSqlQueryModel *trier(QString);
    QSqlQueryModel *rechercher(QString);


};

#endif // SALLE_H

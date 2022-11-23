#ifndef RESERVATION_H
#define RESERVATION_H

#include <QString>
#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QSqlQueryModel>
#include <QTableView>
#include <QString>
#include <QDate>
#include <QDateTime>
#include <QDateEdit>
class reservation
{
public:
    reservation();




    reservation(int a,QDate b,int c,QString d,QString e,QString f,QString g,QString h);

    void reserver( reservation);

//variables
QDate DATER;
      int IDR,DUREE;
      QString IDSR,ROLE,NPR,EMAIL,NUMTEL;
       QString getidsr();
        QDate getdater();
         QString getrole();
          QString getnpr();
           QString getemail();
            QString getnumtel();
            int getidr();
            int getduree();
             void setidsr(QString );
              void setdater(QDate);
              void setrole(QString);
               void setnpr(QString);
                void setemail(QString);
                 void setnumtel(QString);
                 void setidr(int);
                 void setduree(int);

QSqlQueryModel * afficherR();

int  statistique_RS(QString);
int  statistique_RT();
};

#endif // RESERVATION_H

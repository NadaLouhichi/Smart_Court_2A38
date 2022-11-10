#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include <QSqlQueryModel>
class Employee
{
    int CIN;
    QString Nom,Prenom,Phone,Email,Mdp,Function;
public:
    Employee();
    Employee(int,QString,QString,QString,QString,QString,QString);
        int getCIN();
        QString getNom();
        QString getPrenom();
        QString getEmail();
        QString getPhone();
        QString getFunctio();
        QString getMdp();
        void setCIN(int);
        void setNom(QString);
        void setPrenom(QString);
        void setEmail(QString);
        void setPhone(QString);
        void setFunction(QString);
        void setMdp(QString);
        bool ajouter();
        QSqlQueryModel* afficher();
        bool supprimer(int);
        bool modifier_Employee();

};

#endif // EMPLOYEE_H

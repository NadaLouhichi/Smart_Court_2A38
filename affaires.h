#ifndef AFFAIRES_H
#define AFFAIRES_H
#include <QString>
#include <QSqlQueryModel>
class Affaires
{
public:
    Affaires();
    Affaires(int,QString,QString,QString,QString,int,QString);

    int getnuma();
    QString gettype();
    QString getdate_a();
    QString getnoma_a();
    QString getprenom_a();
    int getcin_a();
    QString getinfo();

    void setnuma(int);
    void settype(QString);
    void setdate_a(QString);
    void setnoma_a(QString);
    void setprenom_a(QString);
    void setcin_a(int);
    void setinfo(QString);

    bool ajouter();
    bool modifier();
    QSqlQueryModel* afficher();
    bool supprimer(int);

    QSqlQueryModel* trier_par_nom();
    QSqlQueryModel* trier_par_prenom();
    QSqlQueryModel * chercher_affaires(const QString&);
    int calculer(QString choix,QString choix2);

private:
    int numa;
    QString type;
    QString date_a;
    QString nom_a;
    QString prenom_a;
    int cin_a;
    QString info;

};

#endif // AFFAIRES_H

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_citoyen->setModel(C.afficher());
    ui->cb_id_modif->setModel(C.getAllId());
    ui->cb_id_supp->setModel(C.getAllId());


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_ajout_clicked()
{
    int livre=ui->le_livre->text().toInt();
    int nbpages=ui->le_page->text().toInt();
    int duree=ui->le_duree->text().toInt();
        int cin=ui->le_id->text().toInt();
        QString nom=ui->le_nom->text();
        QString prenom=ui->le_prenom->text();
        QString affinite=ui->le_affinite->text();
        QString poste=ui->le_poste->text();
    Citoyen C (cin,nom,prenom,affinite,livre,nbpages,poste,duree);
bool test1=((controlCin(cin))&&(controlLivre(livre))&&(controlDuree(duree))&&(controlPage(nbpages))&&controlVide(nom)&&(controlVide(prenom))&&(controlVide(affinite))&&(controlVide(poste)));
if(test1){
        bool test=C.ajouter();
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("ajouter un citoyen"),
                                       QObject::tr("citoyen ajouté.\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);

            ui->tab_citoyen->setModel(C.afficher());
            ui->cb_id_modif->setModel(C.getAllId());
            ui->cb_id_supp->setModel(C.getAllId());
        }
}
    else
    { QMessageBox::critical(nullptr, QObject::tr("ajouter un citoyen"),
                               QObject::tr("citoyen non ajouté, vérifier les champs.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);
    }
}



void MainWindow::on_pushButton_2_clicked()
{
    int livre=ui->le_livre_modif->text().toInt();
    int nbpages=ui->le_page_modif->text().toInt();
    int duree=ui->le_duree_modif->text().toInt();
        int cin=ui->cb_id_modif->currentText().toInt();
        QString nom=ui->le_nom_modif->text();
        QString prenom=ui->le_prenom_modif->text();
        QString affinite=ui->le_affinite_modif->text();
        QString poste=ui->le_poste_modif->text();
    Citoyen C (cin,nom,prenom,affinite,livre,nbpages,poste,duree);

    bool test1=((controlCin(cin))&&(controlLivre(livre))&&(controlDuree(duree))&&(controlPage(nbpages))&&controlVide(nom)&&(controlVide(prenom))&&(controlVide(affinite))&&(controlVide(poste)));
    if(test1){

    bool test=C.modifier();
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("modifier un citoyen"),
                                       QObject::tr("citoyen modifié.\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);

            ui->tab_citoyen->setModel(C.afficher());
            ui->cb_id_modif->setModel(C.getAllId());
            ui->cb_id_supp->setModel(C.getAllId());

        }
    }
    else
    { QMessageBox::information(nullptr, QObject::tr("ajouter un citoyen"),
                               QObject::tr("citoyen non ajouté, vérifier les champs.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_supprimer_clicked()
{
    QMessageBox msgBox;
        Citoyen C1;


    C1.setCin(ui->cb_id_supp->currentText().toInt());
            bool test=C1.supprimer(C1.getCin());
        if(test)
          {  msgBox.setText("supprission avec succes.");
            ui->tab_citoyen->setModel(C.afficher());
            ui->cb_id_modif->setModel(C.getAllId());
            ui->cb_id_supp->setModel(C.getAllId());
        }else
        { msgBox.setText("Echec de supprission");}
            msgBox.exec();
}




//control de saisie:

bool MainWindow::controlCin(int cin)
{
    QString num= QString::number(cin);
    for(int i=0;i<num.length();i++)
    {
        if (num.length()==6)
        {
            return true;
        }
    }
    return false;
}
bool MainWindow::controlLivre(int livre)
{
    QString num= QString::number(livre);
    for(int i=0;i<num.length();i++)
    {
        if (num.length()==3)
        {
            return true;
        }
    }
    return false;
}

bool MainWindow::controlPage(int page)
{
    QString num= QString::number(page);
    for(int i=0;i<num.length();i++)
    {
        if (num.length()==3)
        {
            return true;
        }
    }
    return false;
}
bool MainWindow::controlDuree(int duree)
{
    QString num= QString::number(duree);
    for(int i=0;i<num.length();i++)
    {
        if (num.length()==3)
        {
            return true;
        }
    }
    return false;
}
bool MainWindow::controlVide(QString test)
{
    if(test!="")
        return  true;
    return false;
}



void MainWindow::on_pushButton_11_clicked()
{
    close();
}

void MainWindow::on_pushButton_5_clicked()
{
    close();
}

void MainWindow::on_pushButton_10_clicked()
{
    close();
}

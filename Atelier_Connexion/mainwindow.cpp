#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_CIN->setValidator(new QIntValidator(0, 99999999, this));
    ui->tab_employee->setModel(E.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_ajouter_clicked()
{
    int CIN=ui->lineEdit_CIN->text().toInt();
    QString Nom=ui->lineEdit_Nom->text();
    QString Prenom=ui->lineEdit_Prenom->text();
    QString Phone=ui->lineEdit_Phone->text();
    QString Email=ui->lineEdit_Email->text();
    QString Function=ui->lineEdit_Function->text();
    QString Mdp=ui->lineEdit_Mdp->text();
    Employee E(CIN,Nom,Prenom,Phone,Email,Function,Mdp);
    bool test=E.ajouter();
        if(test){
            QMessageBox::information(nullptr, QObject::tr("Ajouter un employé"),
                        QObject::tr("ajout effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
               ui->tab_employee->setModel(E.afficher());

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Ajouter un employé"),
                        QObject::tr("ajout non effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);



}

void MainWindow::on_pb_supprimer_clicked()
{
   Employee E1; E1.setCIN(ui->lineEdit_Supp->text().toInt());
   bool test=E1.supprimer(E1.getCIN());
   if(test){
       QMessageBox::information(nullptr, QObject::tr("Supprimer un employé"),
                   QObject::tr("Suppresion effectué.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
       ui->lineEdit_Supp->setText("");
       ui->tab_employee->setModel(E.afficher());

   }
   else
       QMessageBox::critical(nullptr, QObject::tr("not ok"),
                   QObject::tr("Suppresion non effectué.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_modifier_clicked()
{
    int CIN=ui->lineEdit_CIN->text().toInt();
           QString Nom=ui->lineEdit_Nom->text();
           QString Prenom=ui->lineEdit_Prenom->text();
           QString Phone=ui->lineEdit_Phone->text();
           QString Email=ui->lineEdit_Email->text();
           QString Function=ui->lineEdit_Function->text();
           QString Mdp=ui->lineEdit_Mdp->text();

      Employee E(CIN,Nom,Prenom,Phone,Email,Function,Mdp);
      bool test=E.modifier_Employee();
      if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("Modifier un employé"),
                               QObject::tr("employé modifié.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tab_employee->setModel(E.afficher());

        }
        else{
            QMessageBox::critical(nullptr, QObject::tr("Modifier un employé"),
                               QObject::tr("Employe non modifié.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);
        }


}

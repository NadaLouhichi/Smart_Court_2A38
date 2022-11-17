#include "modifier.h"
#include "ui_modifier.h"
#include "connection.h"
#include "mainwindow.h"
#include "mainwindow.h"
modifier::modifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier)
{
    ui->setupUi(this);

}

modifier::~modifier()
{
    delete ui;
}

void modifier::on_pushButton_k_clicked()
{
    Connection c;

   //c.createconnect();
      int cin=ui->lineEditc->text().toInt();


    QString nom=ui->lineEditn->text();
    QString prenom=ui->lineEditp->text();

          QString mail=ui->lineEditm->text();

             int phone=ui->lineEditp->text().toInt();
             QString sex="";
     avocat A ;
    bool test=  A.modifier();
         //ui->tab_emp->setModel(A.afficher());



}

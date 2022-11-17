#include "dialog.h"
#include "ui_dialog.h"
#include"avocat.h"
#include <QSqlQuery>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString identifiant,password;
        identifiant =ui->lineEdit_user->text();
        password=ui->lineEdit->text();

       avocat A;
        QSqlQuery qry,query;

    if(qry.exec("select * from TEST where cin='"+identifiant+"'"))
    {
            int count=0;
    while(qry.next())
    {
          count++;



     if(count==1)
     {




          this->hide();
            ui->lineEdit_user->clear();
            ui->lineEdit->clear();










            }
    }

            if(count<1)
            {


            }

    }
}

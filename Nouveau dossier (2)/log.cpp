#include "log.h"
#include "ui_log.h"
#include"avocat.h"
#include <QSqlQuery>
log::log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::log)
{
    ui->setupUi(this);
}

log::~log()
{
    delete ui;
}

void log::on_pushButton_2_clicked()
{
    QString identifiant,password;
        identifiant =ui->lineEdit_user->text();
        password = ui->lineEdit_pass->text();

       avocat A;
        QSqlQuery qry,query;

    if(qry.exec("select * from TEST where cin='"+identifiant ))
    {
            int count=0;
    while(qry.next())
    {
          count++;



     if(count==1)
     {




          this->hide();
            ui->lineEdit_user->clear();
                 ui->lineEdit_pass->clear();









            }
    }

            if(count<1)
            {


            }

    }
}

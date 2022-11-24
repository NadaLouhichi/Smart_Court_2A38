#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"avocat.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDialog>
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username,password;
            username =ui->lineEdit_user->text();
            password = ui->lineEdit->text();

           avocat A;
            QSqlQuery qry,query;

        if(qry.exec("select CIN,MOTDEPASSE from TEST where CIN='"+username +"' and MOTDEPASSE='"+password+"'"))
        {
                int count=0;
        while(qry.next())
        {
              count++;





             if(count==1)
         {

             query.prepare("INSERT INTO TEST(CIN,MOTDEPASSE) "
                           "VALUES (:CIN,:Mdp)");

             query.bindValue(":CIN",qry.value(0).toString());

             query.bindValue(":Mdp",qry.value(2).toString());

             query.exec();


              this->hide();
                ui->lineEdit_user->clear();
                     ui->lineEdit->clear();
                     QMessageBox::critical(nullptr, QObject::tr("database is open"),
                                 QObject::tr("connection successful.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
                Dialog dialog;
                dialog.setModal(true);
                dialog.exec();






                }
        }

                if(count<1)
                {
                    QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                QObject::tr("connection failed.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);


                 }
        }}

#include "dialog.h"
#include "ui_dialog.h"
#include "avocat.h"
#include"mainwindow.h"
#include <QMessageBox>
#include <QTextEdit>
#include <QSqlQuery>
#include <QPainter>
#include <QPdfWriter>
#include <QtCharts/QChartView>
#include <QTextEdit>
#include <QIntValidator>
#include<QWidget>
#include <QTextDocument>
#include <QTextEdit>
#include <fstream>
#include <QTextStream>
#include <QRadioButton>
#include <QFileDialog>
#include <QPixmap>
#include <QPainter>
#include <QtSvg/QSvgRenderer>
#include <QtSvg/QSvgGenerator>
#include<QDir>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QAbstractPrintDialog>
#include<QDirModel>
#include <QtPrintSupport/QPrintDialog>
#include "stat.h"
#include <QtPrintSupport/QPrintDialog>
#include<QPdfWriter>
#include<QDesktopServices>
#include <QHeaderView>
#include "QImage"
#include <QPainter>
#include "iostream"
#include<QtCharts/QtCharts>
#include<QtCharts/QBarSeries>
#include<QtCharts/QBarSet>
#include<QtCharts/QLegend>
#include<QtCharts/QBarCategoryAxis>
#include<QtCharts/QHorizontalStackedBarSeries>
#include<QtCharts/QLineSeries>
#include<QtCharts/QCategoryAxis>
#include"dialog.h"
#include"qabstractanimation.h"
#include"qrcode.h"
#include<QtDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{ avocat A;
    ui->setupUi(this);
    ui->le_numa->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_aff->setModel(A.afficher());
    //maps
    QSettings settings(QSettings::IniFormat, QSettings::UserScope,
                       QCoreApplication::organizationName(), QCoreApplication::applicationName());

    ui->WebBrowser->dynamicCall("Navigate(const QString&)", "https://www.google.com/maps/place/ESPRIT/@36.9016729,10.1713215,15z");


}

    Dialog::~Dialog()
    {
    delete ui;

    }






void Dialog::on_pb_ajouter_clicked()
{
    int cin=ui->le_numa->text().toInt();
    QString nom=ui->le_nom->text();
    int phone=ui->le_phone->text().toInt();
    QString prenom=ui->le_prenom->text();
    QString mail=ui->le_mail->text();
    int age=ui->le_age->text().toInt();
    int motdepasse=ui->le_motdepasse->text().toInt();
   avocat A(cin,nom,prenom,mail,phone,age,motdepasse) ;
    bool test=A.ajouter();

    if(test)
    {
                QMessageBox::information(nullptr, QObject::tr("ok"),
                            QObject::tr("ajout effectué.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
                 ui->tab_aff->setModel(A.afficher());


            }
            else
    {
                QMessageBox::critical(nullptr, QObject::tr("not ok"),
                            QObject::tr("ajout non effectué.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);}
      ui->tab_aff->setModel(A.afficher());
}













void MainWindow::on_pushButton_3_clicked()
{
Dialog a;
a.setModal(true);
a.exec();

}



void Dialog::on_pb_supprimer_clicked()
{avocat A;
    avocat A1; A1.setcin(ui->le_numa_sup->text().toInt());
    A1.setphone(ui->le_numa_sup->text().toInt());
    bool test=A1.supprimer(A1.getcin());
    QMessageBox msgBox;
    if(test)
    {

                msgBox.setText("suppression ok");
                ui->tab_aff->setModel(A.afficher());
    }
            else
        msgBox.setText("suppression not ok");
    msgBox.exec();
}

void Dialog::on_pb_modifier_clicked()
{
    int cin=ui->le_id_2->text().toInt();
               QString nom=ui->le_nom_2->text();
               QString prenom=ui->le_prenom_2->text();
                QString mail=ui->le_mail_2->text();

                int phone=ui->le_phone_2->text().toInt();
                int age=ui->le_age_2->text().toInt();
                int motdepasse=ui->le_motdepasse_2->text().toInt();

              avocat A (cin,nom,prenom,mail,phone,age,motdepasse);
               bool test=A.modifier();
               if(test)
               {
                   QMessageBox::information(nullptr,QObject::tr("OK"),
                           QObject::tr("modification Effectuer"),QMessageBox::Cancel);
                   ui->tab_aff->setModel(A.afficher());



               }
               else
               {
                   QMessageBox::critical(nullptr,QObject::tr("not OK"),
                           QObject::tr("modification non Effectuer"),QMessageBox::Cancel);

               }


}

void Dialog::on_pb_trienom_clicked()
{
    avocat A;
     ui->tab_aff->setModel(A.afficher_avocat_trie_Nom());
}

void Dialog::on_pb_trieprenom_clicked()
{ avocat A;
    ui->tab_aff->setModel(A.afficher_avocat_trie_prenom());
}

void Dialog::on_pb_chercher_clicked()
{
    avocat A;
        QString Re =ui->le_rech->text();
        ui->tab_aff->setModel(A.chercher_avocat(Re));
}

void Dialog::on_pushButton_3_clicked()
{
    QPdfWriter fichier_pdf("C:\\dabbebi\\listeequipementList.pdf");


                       QPainter painter(&fichier_pdf);
                       int i = 4000;
                              painter.setPen(Qt::red);
                              painter.setFont(QFont("Time New Roman", 25));
                              painter.drawText(3000,1400,"Liste Des equipement");
                              painter.setPen(Qt::black);
                              painter.setFont(QFont("Time New Roman", 15));
                              painter.drawRect(100,100,9400,2500);
                              painter.drawRect(100,3000,9400,500);
                              painter.setFont(QFont("Time New Roman", 9));
                              painter.drawText(400,3300,"equipement");
                              painter.drawText(1350,3300,"reference");
                              painter.drawText(2200,3300,"etat");
                              painter.drawText(3400,3300,"quantite");


                              QSqlQuery query;
                              query.prepare("select * from test");
                              query.exec();
                              while (query.next())
                              {
                                  painter.drawText(400,i,query.value(0).toString());
                                  painter.drawText(1350,i,query.value(1).toString());
                                  painter.drawText(2300,i,query.value(2).toString());
                                  painter.drawText(3400,i,query.value(3).toString());



                                 i = i + 350;
                              }
                              QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
                              QObject::tr("PDF Enregistré.\n" "Click TEST to exit."), QMessageBox::Cancel);

}




void Dialog::on_qrcode_clicked()
{
    if(ui->tab_aff->currentIndex().row()==-1)

                                      QMessageBox::information(nullptr, QObject::tr("Suppression"),

                                                               QObject::tr("Veuillez Choisir une reference du Tableau.\n"

                                                                           "Click Ok to exit."), QMessageBox::Ok);

                                  else

                                  {

                                       int cin=ui->tab_aff->model()->data(ui->tab_aff->model()->index(ui->tab_aff->currentIndex().row(),0)).toInt();

                                       const qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(std::to_string(cin).c_str(), qrcodegen::QrCode::Ecc::LOW);

                                       std::ofstream myfile;

                                       myfile.open ("qrcode.svg") ;

                                          myfile << qr.toSvgString(2);

                                          myfile.close();

                                          QSvgRenderer svgRenderer(QString("qrcode.svg"));

                                          QPixmap pix( QSize(90, 90));

                                          QPainter pixPainter( &pix );

                                          svgRenderer.render(&pixPainter);

                                       ui->label_18->setPixmap(pix);

                                  }


}

void Dialog::on_pushButton_2_clicked()
{
    int res;
            statistiques w(this);
            w.setWindowTitle("Statistiques des avocat");

            res = w.exec();
            qDebug() << res;
            if (res == QDialog::Rejected)
              return;
}



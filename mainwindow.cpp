#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextDocument>
#include <QPrinter>
#include <QPainter>
#include <QPointF>
#include <QPicture>
#include <QtGui>
#include <QtOpenGL>
#include <QVariant>
#include <QAbstractEventDispatcher>
#include <QDir>
#include <QtQml>
#include <QQuickView>
#include "salle.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QPixmap>
#include <QPdfWriter>
#include <QPainter>

#include "connection.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCore/QTime>
#include <QtCharts/QChartView>
#include <QtCharts/QLegend>
#include <QtCharts/QPieSeries>
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
#include "qrcode.h"
#include "qrcodegenerateworker.h"
#include "reservation.h"
#include "smtp.h"
#include "qrcode.h"
#include "reservation.h"
#include "connection.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Connection c;
     c.createconnect();
    //affichage contenu base
     //for email tab
     connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
     connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));
     connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
     //

    // ui->tableView_2->setModel(r.afficherA());
     //ui->tableView_2->horizontalHeader()->setStretchLastSection(true);

     QDate date = QDate::currentDate();
        ui->dateEdit->setDate(date);
        QSqlQuery qry,qry1,qry2;


            qry1.prepare("select IDS from GS_SALLES");
                qry1.exec();
                while(qry1.next()){
                 ui->comboBox_2->addItem(qry1.value(0).toString());
                // ui->arduino->addItem(qry1.value(0).toString());
                 //ui->le_id_3->addItem(qry1.value(0).toString());
                 //ui->le_id_4->addItem(qry1.value(0).toString());
                 //ui->le_id_5->addItem(qry1.value(0).toString());
                }
                int ret=A.connect_arduino(); // lancer la connexion à arduino
                switch(ret){
                case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
                    break;
                case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
                   break;
                case(-1):qDebug() << "arduino is not available";
                }
                 QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
                 //le slot update_label suite à la reception du signal readyRead (reception des données).

}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::show_tables(){
//creation model (masque du tableau) : permet recherche et tri
    proxy = new QSortFilterProxyModel();

 //definir la source (tableau original)
    proxy->setSourceModel(tmp.afficher());

 //pour la recherche
    proxy->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majuscule et miniscule)
    proxy->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
   //remplissage tableau avec le masque
    ui->tableView->setModel(proxy);

}
void MainWindow::show_tables1(){
//creation model (masque du tableau) : permet recherche et tri
    proxy1 = new QSortFilterProxyModel();

 //definir la source (tableau original)
    proxy1->setSourceModel(r.afficherR());

 //pour la recherche
    proxy1->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majuscule et miniscule)
    proxy1->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
   //remplissage tableau avec le masque
    ui->tableView_2->setModel(proxy1);

}

void MainWindow::on_Ajouter_clicked()
{
   salle  s;


    s.setids(ui->ids->text());
    s.setnums(ui->nums->text().toInt());
    s.setetage(ui->etage->text());
    s.setnbrb(ui->nbrb->text().toInt());
    s.setnbrch(ui->nbrch->text().toInt());
    s.setnbrt(ui->nbrt->text().toInt());

    s.ajouter(s);
    ui->ids->setText("");
    ui->nums->setText("");
    ui->etage->setText("");
    ui->nbrb->setText("");
    ui->nbrch->setText("");
    ui->nbrt->setText("");
    ui->tableView->setModel(s.afficher());
    //show_tables();

}
//modification
void MainWindow::on_pushButton_6_clicked()
{
    show_tables();
   QString ids= ui->ids->text();
    int nums=ui->nums->text().toInt();
    QString etage= ui->etage->text();
    int nbrb=ui->nbrb->text().toInt();
    int nbrch=ui->nbrch->text().toInt();
    int nbrt=ui->nbrt->text().toInt();

         salle s(ids,nums,etage,nbrb,nbrch,nbrt);
          bool test=s.modifier_Salle();
          if(test)
            {
                QMessageBox::information(nullptr, QObject::tr("sql query successful"),
                                   QObject::tr("row updated and saved.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);
                ui->tableView->setModel(s.afficher());
                //show_tables();

            }
            else{
                QMessageBox::critical(nullptr, QObject::tr("sql query unsuccessful"),
                                   QObject::tr("row not updated and not saved.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);
            }
}
//suppression
void MainWindow::on_pushButton_2_clicked()
{
    salle s1; s1.setids(ui->lineEdit_24->text());
        bool test=s1.supprimer(s1.getids());
        if(test){
            QMessageBox::information(nullptr, QObject::tr("ok"),
                        QObject::tr("Suppresion effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
            ui->lineEdit_24->setText("");
            ui->tableView->setModel(s1.afficher());
            //show_tables();

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("not ok"),
                        QObject::tr("Suppresion non effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

//recherche dynamique

void MainWindow::on_rech_textChanged(const QString &arg1)
{
show_tables();
    proxy->setFilterFixedString(arg1);

}
//mailling
void MainWindow::browse()
{
    files.clear();

        QFileDialog dialog(this);
        dialog.setDirectory(QDir::homePath());
        dialog.setFileMode(QFileDialog::ExistingFiles);

        if (dialog.exec())
            files = dialog.selectedFiles();

        QString fileListString;
        foreach(QString file, files)
            fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

        ui->file->setText( fileListString );

}

void MainWindow::sendMail()
{

    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}
//tri

void MainWindow::on_tri_clicked()
{
    salle s;
    QString l=ui->comboBox->currentText();
            ui->tableView->setModel(s.trier(l));
}
// reservation
void MainWindow::on_Sendmail_2_clicked()
{
reservation r;


      r.setidr(ui->lineEdit_18->text().toInt());
     r.setdater(ui->dateEdit->date());// date
      r.setduree(ui->duree->text().toInt());
     r.setnpr( ui->lineEdit_20->text());
     r.setrole( ui->comboBox_3->currentText());
    r.setemail(ui->lineEdit_19->text());
     r.setnumtel(ui->lineEdit_21->text());
     r.setidsr(ui->comboBox_2->currentText());
     ui->tableView_2->setModel(r.afficherR());
      r.reserver(r);

}
//PDF

void MainWindow::on_Sendmail_3_clicked()
{
    {

             QString strStream;
                         QTextStream out(&strStream);
                         const int rowCount = ui->tableView->model()->rowCount();
                         const int columnCount =ui->tableView->model()->columnCount();


                         out <<  "<html>\n"
                                 "<head>\n"
                                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                 <<  QString("<title>%1</title>\n").arg("Salle")
                                 <<  "</head>\n"
                                 "<body bgcolor=#FFFFFF link=#5000A0>\n"
                                     "<h1>Liste des Salles</h1>"

                                     "<table border=1 cellspacing=0 cellpadding=2>\n";

                         // headers
                             out << "<thead><tr bgcolor=#f0f0f0>";
                             for (int column = 0; column < columnCount; column++)
                                 if (!ui->tableView->isColumnHidden(column))
                                     out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
                             out << "</tr></thead>\n";
                             // data table
                                for (int row = 0; row < rowCount; row++) {
                                    out << "<tr>";
                                    for (int column = 0; column < columnCount; column++) {
                                        if (!ui->tableView->isColumnHidden(column)) {
                                            QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                                            out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                        }
                                    }
                                    out << "</tr>\n";
                                }
                                out <<  "</table>\n"
                                    "</body>\n"
                                    "</html>\n";



                 QTextDocument *document = new QTextDocument();
                 document->setHtml(strStream);


                 //QTextDocument document;
                 //document.setHtml(html);
                 QPrinter printer(QPrinter::PrinterResolution);
                 printer.setOutputFormat(QPrinter::PdfFormat);
                 printer.setOutputFileName("Liste des salles.pdf");
                 document->print(&printer);
     }

}
//QrCode


//Affichage reservation
//void MainWindow::on_pushBQ_2_clicked()
/*{
    reservation c;
    //affichage simple
    ui->tableView_2->setModel(c.afficherR());
}

*/
void MainWindow::on_pb_statistique_clicked()
{
    ui->progressBar->setValue(0);
int SA=0;
/*int ids=ui->lineEdit_ids->text().toInt();
QString IDR_string = QString::number(ids);
*/
int  a=r.statistique_RS(ui->comboBox_4->currentText());
 int t=r.statistique_RT();

 SA=(a*100)/t;

 ui->progressBar->setValue(SA);
}

void MainWindow::on_pushBQ_2_clicked()
{

    if(ui->tableView->currentIndex().row()==-1)

                                      QMessageBox::information(nullptr, QObject::tr("Suppression"),

                                                               QObject::tr("Veuillez Choisir une ids du Tableau.\n"

                                                                           "Click Ok to exit."), QMessageBox::Ok);

                                  else

                                  {

                                       int IDS=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),1)).toInt();

                                       const qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(std::to_string(IDS).c_str(), qrcodegen::QrCode::Ecc::LOW);


                                       std::ofstream myfile;

                                       myfile.open ("qrcode.svg") ;

                                          myfile << qr.toSvgString(2);

                                          myfile.close();

                                          QSvgRenderer svgRenderer(QString("qrcode.svg"));

                                          QPixmap pix( QSize(90, 90));

                                          QPainter pixPainter( &pix );

                                          svgRenderer.render(&pixPainter);

                                       ui->label_8->setPixmap(pix);

                                  }

}

void MainWindow::on_pbarduinoT_O_clicked()
{
     A.write_to_arduino("1");
}

void MainWindow::on_sonore_clicked()
{
      A.write_to_arduino("0");
}
void MainWindow::update_label()
{QMessageBox msgBox;
    QSqlQuery qry;
    data =A.read_from_arduino();
    QString DataAsString = QString(data);
        qDebug()<< "this is data:"<< data;
   if (data =="ON")
   {
       //ui->label_45->setText("alarme activée");
       ui->label_14->setText("alarm activée");
        QMessageBox::warning(this,"Warning","Attention il ya un fuite de GAZ detecte !! ");
        //E.notificationA();
        QString IDS=ui->arduino->text();
        QString ETAT="alarme activée";

        qry.prepare ("UPDATE GS_SALLES set ETAT= :ETAT "
                     "WHERE IDS= :IDS");

        qry.bindValue(":IDS",IDS);
        qry.bindValue(":ETAT",ETAT);

        bool test=qry.exec();
        if(test)
        {msgBox.setText("Il reste du temps.");}
        msgBox.exec();

   }
   else if (data =="OFF")
   {
       // ui->label_45->setText("alarme désactivée");
       ui->label_14->setText("alarme désactivée");
       QString IDS=ui->arduino->text();
       QString ETAT="alarme désactivée";

       qry.prepare ("UPDATE GS_SALLES set ETAT= :ETAT "
                    "WHERE IDS= :IDS");

       qry.bindValue(":IDS",IDS);
       qry.bindValue(":ETAT",ETAT);

       bool test=qry.exec();
       if(test)
       {msgBox.setText("Il reste du temps.");}
       msgBox.exec();
   }

}

void MainWindow::on_cha_clicked()
{
    QString ids= ui->arduino->text();
    bool test=s.rechercher(ids);
    if(test){
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("Recherche  effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tabWidget_10->setCurrentIndex(9);


    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("Recherche non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

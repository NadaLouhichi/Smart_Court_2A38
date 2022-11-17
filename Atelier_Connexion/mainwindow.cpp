#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "QMessageBox"
#include <QTextDocument>
#include <QPrinter>
#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
#include <QDialog>
#include <QTextStream>
#include <QStackedWidget>
#include <qdatastream.h>
#include <QDate>
#include "secformdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gestion_employe->setCurrentIndex(0);
    ui->lineEdit_CIN->setValidator(new QIntValidator(0, 99999999, this));
    ui->tab_employee->setModel(E.afficher());
    QDate date = QDate::currentDate();
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
    QString Function=ui->comboBox_Function->currentText();
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
   Employee E1;
   E1.setCIN(ui->lineEdit_Supp->text().toInt());
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
           QString Function=ui->comboBox_Function->currentText();
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
//rechechre statistique
void MainWindow::on_pb_chercher_clicked()
{
    QString x = ui->lineEdit_rechercher->text();
    bool test=E.rechercher(x);//makensh test
    if(test)
      {
          QMessageBox::information(nullptr, QObject::tr("Rechercher un employé "),
                             QObject::tr("employé existe.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_employee_2->setModel(E.rechercher(x));

      }
}
//recherche dynamique
void MainWindow::on_lineEdit_rechercher_textChanged(const QString &arg1)
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy->setSourceModel(E.afficher());

     //pour la recherche
        proxy->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
        proxy->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
       //remplissage tableau avec le masque
        ui->tab_employee_2->setModel(proxy);
    proxy->setFilterFixedString(arg1);
}
void MainWindow::on_pb_tri_clicked()
{
        QString l=ui->comboBox_tri->currentText();
        ui->tab_employee_2->setModel(E.trier(l));
}

void MainWindow::on_pb_generatepdf_clicked()
{

     QString strStream;
                    QTextStream out(&strStream);
               const int rowCount = ui->tab_employee->model()->rowCount();
      const int columnCount =ui->tab_employee->model()->columnCount();


                           out <<  "<html>\n"
                                   "<head>\n"
                                   "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                   <<  QString("<title>%1</title>\n").arg("employe")
                                   <<  "</head>\n"
                                   "<body bgcolor=#FFFFFF link=#5000A0>\n"
                                       "<h1>Liste des Employés</h1>"

                                       "<table border=1 cellspacing=0 cellpadding=2>\n";

                           // headers
                               out << "<thead><tr bgcolor=#f0f0f0>";
                               for (int column = 0; column < columnCount; column++)
                                   if (!ui->tab_employee->isColumnHidden(column))
                                       out << QString("<th>%1</th>").arg(ui->tab_employee->model()->headerData(column, Qt::Horizontal).toString());
                               out << "</tr></thead>\n";
                               // data table
                                  for (int row = 0; row < rowCount; row++) {
                                      out << "<tr>";
                                      for (int column = 0; column < columnCount; column++) {
                                          if (!ui->tab_employee->isColumnHidden(column)) {
                                              QString data = ui->tab_employee->model()->data(ui->tab_employee->model()->index(row, column)).toString().simplified();
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
                   printer.setOutputFileName("Liste Employes.pdf");
                   document->print(&printer);
       }


void MainWindow::on_pb_generatepdf_2_clicked()
{

    QString strStream;
                   QTextStream out(&strStream);
              const int rowCount = ui->tab_employee_2->model()->rowCount();
     const int columnCount =ui->tab_employee_2->model()->columnCount();


                          out <<  "<html>\n"
                                  "<head>\n"
                                  "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                  <<  QString("<title>%1</title>\n").arg("Employe")
                                  <<  "</head>\n"
                                  "<body bgcolor=#FFFFFF link=#5000A0>\n"
                                      "<h1>Liste des Employés</h1>"

                                      "<table border=1 cellspacing=0 cellpadding=2>\n";

                          // headers
                              out << "<thead><tr bgcolor=#f0f0f0>";
                              for (int column = 0; column < columnCount; column++)
                                  if (!ui->tab_employee_2->isColumnHidden(column))
                                      out << QString("<th>%1</th>").arg(ui->tab_employee_2->model()->headerData(column, Qt::Horizontal).toString());
                              out << "</tr></thead>\n";
                              // data table
                                 for (int row = 0; row < rowCount; row++) {
                                     out << "<tr>";
                                     for (int column = 0; column < columnCount; column++) {
                                         if (!ui->tab_employee_2->isColumnHidden(column)) {
                                             QString data = ui->tab_employee_2->model()->data(ui->tab_employee_2->model()->index(row, column)).toString().simplified();
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
                  printer.setOutputFileName("Employetrirecherche.pdf");
                  document->print(&printer);
}

void MainWindow::on_pb_notifier_clicked()
{
  ui->gestion_employe->setCurrentIndex(2);
}
void MainWindow::on_pb_notifier_2_clicked()
{

           //int CIN=ui->lineEdit_CIN_Notif->text().toInt();
           QString Nom=ui->lineEdit_Nom_Notif->text();
           QString Prenom=ui->lineEdit_Prenom_Notif->text();
           QString Function=ui->comboBox_Function_Notif->currentText();

    bool testA=E.testAJ(Function);
    bool testNP=E.testNP(Nom,Prenom);
    if(testA)
      {
          if (testNP)
        {

              E.notification();
             QMessageBox::information(nullptr, QObject::tr("Notifier Employeé "),
                             QObject::tr("employé notifié.\n"
    "Click Cancel to exit."), QMessageBox::Cancel);
       }
    else
       { QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("Notification non effectué.\n"
                          "Click Cancel to exit."), QMessageBox::Cancel);
       }   
    }
    else
       { QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("Vous n'avez aucun affaires juridique.\n"
                          "Click Cancel to exit."), QMessageBox::Cancel);
       }
}
void MainWindow::on_pb_statistique_clicked()
{
    ui->gestion_employe->setCurrentIndex(2);
    ui->progressBar->setValue(0);
}

void MainWindow::on_pb_statistique2_clicked()
{
    int SA=0;
    int a =E.statistique_E(ui->comboBoxStat->currentText());
     int t=E.statistique_ET();
     SA=(a*100)/t;
     ui->progressBar->setValue(SA);
}

void MainWindow::on_calendrier_clicked()
{
    secDialog= new SECFORMDialog(this);
    secDialog->show();
}

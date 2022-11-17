#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "affaires.h"
#include "stat.h"
#include "chat.h"
#include "chatconnect.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QDebug>
#include <QPdfWriter>
#include <QSqlQuery>
#include <QFileDialog>
#include <QPrinter>
#include <QTextDocument>
#include <QTcpSocket>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_numa->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_aff->setModel(A.afficher());
    mSocket = new QTcpSocket(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_ajouter_clicked()
{
    int numa=ui->le_numa->text().toInt();
    QString type=ui->le_type->text();
    QString date_a=ui->le_date->text();
    QString nom_a=ui->le_nom->text();
    QString prenom_a=ui->le_prenom->text();
    int cin_a=ui->le_cin->text().toInt();
    QString info=ui->le_info->text();
    Affaires A(numa,type,date_a,nom_a,prenom_a,cin_a,info);
    bool test=A.ajouter();

    if(test)
    {
                QMessageBox::information(nullptr, QObject::tr("ok"),
                            QObject::tr("ajout effectué.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
                 ui->tab_aff->setModel(A.afficher());

            }
            else
                QMessageBox::critical(nullptr, QObject::tr("not ok"),
                            QObject::tr("ajout non effectué.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_supprimer_clicked()
{
     Affaires A1; A1.setnuma(ui->le_numa_sup->text().toInt());
     bool test=A1.supprimer(A1.getnuma());
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


void MainWindow::on_pb_modif_clicked()
{
    int numa=ui->le_numa_modif->text().toInt();
    QString type=ui->le_type_modif->text();
    QString date_a=ui->le_date_modif->text();
    QString nom_a=ui->le_nom_modif->text();
    QString prenom_a=ui->le_prenom_modif->text();
    int cin_a=ui->le_cin_modif->text().toInt();
    QString info=ui->le_info_modif->text();

    Affaires A(numa,type,date_a,nom_a,prenom_a,cin_a,info);
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

void MainWindow::on_trie_nom_clicked()
{
    ui->tab_aff->setModel(A.trier_par_nom());
}

void MainWindow::on_trie_prenom_clicked()
{
    ui->tab_aff->setModel(A.trier_par_prenom());
}




void MainWindow::on_le_rechercher_clicked()
{
    QString str= ui->le_chercher->text();
       bool test=A.chercher_affaires(str);

        if(test)
        {
                     //Refresh
                     ui->tab_aff->setModel(A.chercher_affaires(str));

            QMessageBox::information(nullptr,QObject::tr("OK"),
                    QObject::tr("rechercher a effectuer\n""Click Cancel to exit."),QMessageBox::Cancel);}
        else
        {
            QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                    QObject::tr("recherche non effectuer\n""Click Cancel to exit."),QMessageBox::Cancel);}
}

void MainWindow::on_le_stat_clicked()
{
    int res;
            statistiques w(this);
            w.setWindowTitle("Statistiques des avocat");

            res = w.exec();
            qDebug() << res;
            if (res == QDialog::Rejected)
              return;
}

void MainWindow::on_pushButton_clicked()
{
    QString strStream;
                        QTextStream out(&strStream);

                        const int rowCount = ui->tab_aff->model()->rowCount();
                        const int columnCount = ui->tab_aff->model()->columnCount();

                        out <<  "<html>\n"
                            "<head>\n"
                            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                            <<  QString("<title>%1</title>\n").arg("strTitle")
                            <<  "</head>\n"
                            "<body bgcolor=#ffffff link=#5000A0>\n"

                           //     "<align='right'> " << datefich << "</align>"
                            "<center> <H1>Liste des Employees </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                        // headers
                        out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                        for (int column = 0; column < columnCount; column++)
                            if (!ui->tab_aff->isColumnHidden(column))
                                out << QString("<th>%1</th>").arg(ui->tab_aff->model()->headerData(column, Qt::Horizontal).toString());
                        out << "</tr></thead>\n";

                        // data table
                        for (int row = 0; row < rowCount; row++) {
                            out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                            for (int column = 0; column < columnCount; column++) {
                                if (!ui->tab_aff->isColumnHidden(column)) {
                                    QString data = ui->tab_aff->model()->data(ui->tab_aff->model()->index(row, column)).toString().simplified();
                                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                }
                            }
                            out << "</tr>\n";
                        }
                        out <<  "</table> </center>\n"
                            "</body>\n"
                            "</html>\n";

                  QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                   if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                   QPrinter printer (QPrinter::PrinterResolution);
                    printer.setOutputFormat(QPrinter::PdfFormat);
                   printer.setPaperSize(QPrinter::A4);
                  printer.setOutputFileName(fileName);

                   QTextDocument doc;
                    doc.setHtml(strStream);
                    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                    doc.print(&printer);

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tableView->setModel(h.afficherh());
}

void MainWindow::openchat()
{
    chatconnect::chat * neww =new chatconnect::chat();
    neww->show();
}
void MainWindow::on_pushButton_3_clicked()
{
    openchat();
//    chat C;
//    C.setModal(true);
//    C.exec();
}


//void chatconnect::on_ok_clicked()
//{
//    mHostname = ui->hostname->text();
//    mPort = ui->port->value();
//    accept();
//}

//void chatconnect::on_cancel_clicked()
//{
//     reject();
//}



#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
#include <QDesktopWidget>
#include <QSettings>
#include <QTextStream>
#include <QFile>
#include <QtMultimedia/QMediaPlayer>
#include <QDataStream>
#include "salle.h"
#include "smtp.h"
#include "arduino.h"
#include "reservation.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    salle tmp;
QSortFilterProxyModel *proxy;
QSortFilterProxyModel *proxy1;
void show_tables();
void show_tables1();

private slots:
    void on_Ajouter_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();



    void on_rech_textChanged(const QString &arg1);

    void sendMail();
    void mailSent(QString);
    void browse();


    void on_tri_clicked();

    void on_Sendmail_2_clicked();



    void on_Sendmail_3_clicked();

    //void on_pushButton_clicked();




    void on_pb_statistique_clicked();

    void on_pushBQ_2_clicked();

    void on_pbarduinoT_O_clicked();

    void on_sonore_clicked();
    void update_label();
    void on_cha_clicked();

private:
    Ui::MainWindow *ui;
    salle s;
    reservation r;
    QStringList files;
    QMediaPlayer *player ;
    QByteArray data;
        Arduino A;
};

#endif // MAINWINDOW_H

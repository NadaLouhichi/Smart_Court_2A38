#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QMessageBox>
#include <QIntValidator>
#include <QDate>
#include <QMainWindow>
#include <QMainWindow>
#include "citoyen.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ajout_clicked();

    void on_pushButton_2_clicked();

    void on_pb_supprimer_clicked();

    bool controlCin(int cin);

    bool controlLivre(int livre);

    bool controlPage(int page);

    bool controlVide(QString test);

    bool controlDuree(int duree);



    void on_pushButton_11_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    Citoyen C;
};
#endif // MAINWINDOW_H

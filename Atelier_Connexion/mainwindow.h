#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "employee.h"
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
#include "secformdialog.h"
#include <QDataStream>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    QSortFilterProxyModel *proxy;
    ~MainWindow();

private slots:


    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_tri_clicked();

    void on_pb_chercher_clicked();

    void on_pb_generatepdf_clicked();
    void on_pb_generatepdf_2_clicked();

    void on_pb_statistique_clicked();
    void on_pb_statistique2_clicked();

    void on_lineEdit_rechercher_textChanged(const QString &arg1);


    void on_pb_notifier_clicked();
    void on_pb_notifier_2_clicked();

    //void on_calendarWidget_selectionChanged();

    void on_calendrier_clicked();

private:
    Ui::MainWindow *ui;
     SECFORMDialog *secDialog;
    Employee E;

};

#endif // MAINWINDOW_H

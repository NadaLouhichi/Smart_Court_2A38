#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "avocat.h"
#include"log.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();
    void on_rechercher_clicked();



        void on_pb_modifier_clicked();



        void on_pb_trienom_clicked();

        void on_pb_trieprenom_clicked();

        void on_pb_chercher_clicked();



void on_pushButton_clicked();

        void on_pushButton_2_clicked();

        void on_pushButton_3_clicked();



        void on_pushButton_4_clicked();

        void on_pb_msg_clicked();

        void on_qrcode_clicked();

private:
    Ui::MainWindow *ui;
   avocat A;

};

#endif // MAINWINDOW_H

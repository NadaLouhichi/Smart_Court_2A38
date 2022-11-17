#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "affaires.h"
#include "historique.h"
#include "chatconnect.h"
#include "chat.h"
#include <QSortFilterProxyModel>
namespace Ui {
class MainWindow;
}
class QTcpSocket;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    void show_tables();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modif_clicked();

    void on_trie_nom_clicked();

    void on_trie_prenom_clicked();

   // void on_recherche_textChanged(const QString &arg1);

    void on_le_chercher_clicked();

    void on_le_rechercher_clicked();

    void on_le_stat_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

public slots:
    void openchat();

private:
    Ui::MainWindow *ui;
    Affaires A;
    historique h;
    QTcpSocket *mSocket;

};

#endif // MAINWINDOW_H

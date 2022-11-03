/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget_2;
    QWidget *modif_cl;
    QGroupBox *ajout_cl;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_ajout;
    QLabel *label_5;
    QLineEdit *le_prenom;
    QLineEdit *le_id;
    QLineEdit *le_page;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *le_nom;
    QLineEdit *le_affinite;
    QLineEdit *le_livre;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QTableView *tab_citoyen;
    QLineEdit *le_duree;
    QLineEdit *le_poste;
    QLabel *label_7;
    QLabel *label_18;
    QWidget *tab_4;
    QGroupBox *groupBox_3;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QComboBox *cb_id_modif;
    QLabel *label_20;
    QLineEdit *le_poste_modif;
    QLineEdit *le_affinite_modif;
    QLineEdit *le_duree_modif;
    QLineEdit *le_livre_modif;
    QLabel *label_19;
    QLabel *label_15;
    QLabel *label_14;
    QLineEdit *le_page_modif;
    QLabel *label_11;
    QLineEdit *le_prenom_modif;
    QLabel *label_12;
    QLineEdit *le_nom_modif;
    QLabel *label_13;
    QWidget *supp_cl;
    QGroupBox *groupBox_5;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pb_supprimer;
    QPushButton *pushButton_10;
    QComboBox *cb_id_supp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(853, 874);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 0, 831, 711));
        tabWidget_2->setStyleSheet(QStringLiteral("background-color:rgb(226, 226, 226);"));
        modif_cl = new QWidget();
        modif_cl->setObjectName(QStringLiteral("modif_cl"));
        ajout_cl = new QGroupBox(modif_cl);
        ajout_cl->setObjectName(QStringLiteral("ajout_cl"));
        ajout_cl->setGeometry(QRect(0, 0, 771, 731));
        ajout_cl->setStyleSheet(QStringLiteral("background-color:rgb(226, 226, 226);"));
        lineEdit_3 = new QLineEdit(ajout_cl);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(300, 230, 141, 41));
        QFont font;
        font.setFamily(QStringLiteral("calibri"));
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QLatin1String("background-color: black	;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        lineEdit_3->setReadOnly(true);
        pushButton_11 = new QPushButton(ajout_cl);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(320, 510, 101, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("calibri"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        pushButton_11->setFont(font1);
        pushButton_11->setAutoFillBackground(false);
        pushButton_11->setStyleSheet(QLatin1String("background-color: #8B0000	;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        pushButton_ajout = new QPushButton(ajout_cl);
        pushButton_ajout->setObjectName(QStringLiteral("pushButton_ajout"));
        pushButton_ajout->setGeometry(QRect(650, 110, 101, 41));
        pushButton_ajout->setFont(font1);
        pushButton_ajout->setAutoFillBackground(false);
        pushButton_ajout->setStyleSheet(QLatin1String("background-color: black	;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        label_5 = new QLabel(ajout_cl);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 21, 61, 21));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_5->setFont(font2);
        le_prenom = new QLineEdit(ajout_cl);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(110, 121, 113, 41));
        le_prenom->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_prenom->setReadOnly(false);
        le_id = new QLineEdit(ajout_cl);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(110, 21, 113, 41));
        le_id->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_id->setReadOnly(false);
        le_page = new QLineEdit(ajout_cl);
        le_page->setObjectName(QStringLiteral("le_page"));
        le_page->setGeometry(QRect(360, 120, 113, 41));
        le_page->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_page->setReadOnly(false);
        label_3 = new QLabel(ajout_cl);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 121, 101, 20));
        label_3->setFont(font2);
        label_2 = new QLabel(ajout_cl);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 31, 71, 20));
        label_2->setFont(font2);
        le_nom = new QLineEdit(ajout_cl);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(110, 70, 113, 41));
        le_nom->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_nom->setReadOnly(false);
        le_affinite = new QLineEdit(ajout_cl);
        le_affinite->setObjectName(QStringLiteral("le_affinite"));
        le_affinite->setGeometry(QRect(360, 11, 113, 41));
        le_affinite->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_affinite->setReadOnly(false);
        le_livre = new QLineEdit(ajout_cl);
        le_livre->setObjectName(QStringLiteral("le_livre"));
        le_livre->setGeometry(QRect(360, 61, 113, 41));
        le_livre->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_livre->setReadOnly(false);
        label_4 = new QLabel(ajout_cl);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 71, 47, 21));
        label_4->setFont(font2);
        label_6 = new QLabel(ajout_cl);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 81, 91, 20));
        label_6->setFont(font2);
        label_8 = new QLabel(ajout_cl);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 131, 101, 21));
        label_8->setFont(font2);
        tab_citoyen = new QTableView(ajout_cl);
        tab_citoyen->setObjectName(QStringLiteral("tab_citoyen"));
        tab_citoyen->setGeometry(QRect(90, 280, 601, 121));
        tab_citoyen->setStyleSheet(QLatin1String("background-color:white;\n"
"border-radius:16px"));
        le_duree = new QLineEdit(ajout_cl);
        le_duree->setObjectName(QStringLiteral("le_duree"));
        le_duree->setGeometry(QRect(650, 60, 113, 41));
        le_duree->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_duree->setReadOnly(false);
        le_poste = new QLineEdit(ajout_cl);
        le_poste->setObjectName(QStringLiteral("le_poste"));
        le_poste->setGeometry(QRect(650, 10, 113, 41));
        le_poste->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_poste->setReadOnly(false);
        label_7 = new QLabel(ajout_cl);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(520, 80, 47, 21));
        label_7->setFont(font2);
        label_18 = new QLabel(ajout_cl);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(520, 30, 81, 21));
        label_18->setFont(font2);
        tabWidget_2->addTab(modif_cl, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 781, 491));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        groupBox_3->setFont(font3);
        groupBox_3->setStyleSheet(QStringLiteral("background-color:rgb(226, 226, 226);"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 40, 361, 41));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        label_9->setFont(font4);
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 110, 71, 20));
        label_10->setFont(font2);
        label_10->setStyleSheet(QStringLiteral("background-color:transparent;"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 410, 91, 41));
        pushButton_5->setFont(font1);
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QLatin1String("background-color: #8B0000	;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 210, 91, 41));
        pushButton_2->setFont(font1);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QLatin1String("background-color: black	;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        cb_id_modif = new QComboBox(groupBox_3);
        cb_id_modif->setObjectName(QStringLiteral("cb_id_modif"));
        cb_id_modif->setGeometry(QRect(130, 101, 101, 41));
        cb_id_modif->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(280, 210, 101, 20));
        label_20->setFont(font2);
        le_poste_modif = new QLineEdit(groupBox_3);
        le_poste_modif->setObjectName(QStringLiteral("le_poste_modif"));
        le_poste_modif->setGeometry(QRect(670, 99, 113, 41));
        le_poste_modif->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_poste_modif->setReadOnly(false);
        le_affinite_modif = new QLineEdit(groupBox_3);
        le_affinite_modif->setObjectName(QStringLiteral("le_affinite_modif"));
        le_affinite_modif->setGeometry(QRect(380, 100, 113, 41));
        le_affinite_modif->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_affinite_modif->setReadOnly(false);
        le_duree_modif = new QLineEdit(groupBox_3);
        le_duree_modif->setObjectName(QStringLiteral("le_duree_modif"));
        le_duree_modif->setGeometry(QRect(670, 149, 113, 41));
        le_duree_modif->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_duree_modif->setReadOnly(false);
        le_livre_modif = new QLineEdit(groupBox_3);
        le_livre_modif->setObjectName(QStringLiteral("le_livre_modif"));
        le_livre_modif->setGeometry(QRect(380, 150, 113, 41));
        le_livre_modif->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_livre_modif->setReadOnly(false);
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(540, 119, 81, 21));
        label_19->setFont(font2);
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(280, 110, 61, 21));
        label_15->setFont(font2);
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 160, 47, 21));
        label_14->setFont(font2);
        le_page_modif = new QLineEdit(groupBox_3);
        le_page_modif->setObjectName(QStringLiteral("le_page_modif"));
        le_page_modif->setGeometry(QRect(380, 209, 113, 41));
        le_page_modif->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_page_modif->setReadOnly(false);
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(540, 169, 47, 21));
        label_11->setFont(font2);
        le_prenom_modif = new QLineEdit(groupBox_3);
        le_prenom_modif->setObjectName(QStringLiteral("le_prenom_modif"));
        le_prenom_modif->setGeometry(QRect(130, 210, 113, 41));
        le_prenom_modif->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_prenom_modif->setReadOnly(false);
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 170, 91, 20));
        label_12->setFont(font2);
        le_nom_modif = new QLineEdit(groupBox_3);
        le_nom_modif->setObjectName(QStringLiteral("le_nom_modif"));
        le_nom_modif->setGeometry(QRect(130, 159, 113, 41));
        le_nom_modif->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        le_nom_modif->setReadOnly(false);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 220, 101, 21));
        label_13->setFont(font2);
        tabWidget_2->addTab(tab_4, QString());
        supp_cl = new QWidget();
        supp_cl->setObjectName(QStringLiteral("supp_cl"));
        groupBox_5 = new QGroupBox(supp_cl);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 0, 771, 501));
        groupBox_5->setFont(font3);
        groupBox_5->setStyleSheet(QStringLiteral("background-color:rgb(226, 226, 226);"));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 40, 381, 41));
        label_16->setFont(font4);
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(60, 120, 71, 20));
        label_17->setFont(font2);
        label_17->setStyleSheet(QStringLiteral("background-color:transparent;"));
        pb_supprimer = new QPushButton(groupBox_5);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(320, 110, 91, 41));
        pb_supprimer->setFont(font);
        pb_supprimer->setStyleSheet(QLatin1String("background-color: black	;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        pushButton_10 = new QPushButton(groupBox_5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(310, 400, 91, 41));
        pushButton_10->setFont(font1);
        pushButton_10->setAutoFillBackground(false);
        pushButton_10->setStyleSheet(QLatin1String("background-color: #8B0000	;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        cb_id_supp = new QComboBox(groupBox_5);
        cb_id_supp->setObjectName(QStringLiteral("cb_id_supp"));
        cb_id_supp->setGeometry(QRect(130, 111, 121, 41));
        cb_id_supp->setStyleSheet(QLatin1String("background-color: white	;\n"
"  border: none;\n"
"  color: black;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"font-family:calibri;\n"
"  display: inline-block;\n"
"  font-size: 13px;\n"
"  margin: 2px 1px;\n"
"  border-radius : 16px;"));
        tabWidget_2->addTab(supp_cl, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 853, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        ajout_cl->setTitle(QString());
        lineEdit_3->setText(QApplication::translate("MainWindow", "Affichage des citoyens", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "quitter", Q_NULLPTR));
        pushButton_ajout->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "affinites", Q_NULLPTR));
        le_prenom->setText(QString());
        le_page->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "nb pages", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "cin citoyen", Q_NULLPTR));
        le_livre->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "livre", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "nom citoyen", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "prenom citoyen", Q_NULLPTR));
        le_duree->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "duree", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "poste vides", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(modif_cl), QApplication::translate("MainWindow", "ajouter des citoyens", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_9->setText(QApplication::translate("MainWindow", "choisir  l'identifiant du citoyen \303\240 modifier:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "cin Citoyen", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "quitter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "nb pages", Q_NULLPTR));
        le_duree_modif->setText(QString());
        le_livre_modif->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "poste vides", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "affinites", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "livre", Q_NULLPTR));
        le_page_modif->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "duree", Q_NULLPTR));
        le_prenom_modif->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "nom citoyen", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "prenom citoyen", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "modifier un citoyen", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        label_16->setText(QApplication::translate("MainWindow", "choisir l'identifiant du citoyen \303\240 supprimer:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "cin citoyen", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(supp_cl), QApplication::translate("MainWindow", "supprimer un client", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

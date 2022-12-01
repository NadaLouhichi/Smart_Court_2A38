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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *gestion_employe;
    QWidget *tab_cruds;
    QGroupBox *Ajoutmodification;
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEdit_Prenom;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pb_ajouter;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_Phone;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_Mdp;
    QLineEdit *lineEdit_CIN;
    QPushButton *pb_modifier;
    QComboBox *comboBox_Function;
    QGroupBox *suppression;
    QLabel *label_8;
    QLineEdit *lineEdit_Supp;
    QPushButton *pb_supprimer;
    QGroupBox *affichage;
    QTableView *tab_employee;
    QPushButton *pb_notifier;
    QPushButton *pb_statistique;
    QPushButton *pb_generatepdf;
    QPushButton *calendrier;
    QWidget *tri;
    QGroupBox *recherche_tri;
    QPushButton *pb_chercher;
    QTableView *tab_employee_2;
    QLineEdit *lineEdit_rechercher;
    QPushButton *pb_tri;
    QLabel *tri_2;
    QComboBox *comboBox_tri;
    QPushButton *pb_generatepdf_2;
    QWidget *statistique;
    QGroupBox *Statistique;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_9;
    QLabel *function;
    QComboBox *comboBoxStat;
    QLabel *nombreEmploye;
    QProgressBar *progressBar;
    QPushButton *pb_statistique2;
    QGroupBox *Notification;
    QLineEdit *lineEdit_Nom_Notif;
    QLineEdit *lineEdit_Prenom_Notif;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pb_notifier_2;
    QLabel *label_12;
    QLineEdit *lineEdit_CIN_Notif;
    QComboBox *comboBox_Function_Notif;
    QLabel *label_13;
    QWidget *Detectiongaz;
    QGroupBox *groupBox;
    QPushButton *pbarduinoT_off;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_45;
    QLabel *label_46;
    QPushButton *pbarduinoT_ON;
    QLineEdit *lineEdit_ID;
    QLabel *label_14;
    QComboBox *comboBox_Function_2;
    QLabel *label_15;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1096, 764);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gestion_employe = new QTabWidget(centralWidget);
        gestion_employe->setObjectName(QStringLiteral("gestion_employe"));
        gestion_employe->setGeometry(QRect(20, 30, 1071, 631));
        gestion_employe->setStyleSheet(QLatin1String("background-color: rgb(190, 213, 255);\n"
"border-color: rgb(190, 213, 255);\n"
"border-top-color: rgb(190, 213, 255);\n"
"border-left-color: rgb(190, 213, 255);\n"
"selection-color: rgb(170, 170, 255);"));
        tab_cruds = new QWidget();
        tab_cruds->setObjectName(QStringLiteral("tab_cruds"));
        Ajoutmodification = new QGroupBox(tab_cruds);
        Ajoutmodification->setObjectName(QStringLiteral("Ajoutmodification"));
        Ajoutmodification->setGeometry(QRect(20, 10, 391, 391));
        Ajoutmodification->setStyleSheet(QLatin1String("background-color: rgb(210, 253, 255);\n"
""));
        lineEdit_Nom = new QLineEdit(Ajoutmodification);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(100, 80, 113, 22));
        lineEdit_Prenom = new QLineEdit(Ajoutmodification);
        lineEdit_Prenom->setObjectName(QStringLiteral("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(100, 130, 113, 22));
        label = new QLabel(Ajoutmodification);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 56, 16));
        label_2 = new QLabel(Ajoutmodification);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 56, 16));
        label_3 = new QLabel(Ajoutmodification);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 56, 16));
        pb_ajouter = new QPushButton(Ajoutmodification);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(270, 230, 93, 28));
        pb_ajouter->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        label_4 = new QLabel(Ajoutmodification);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 280, 56, 16));
        label_5 = new QLabel(Ajoutmodification);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 230, 56, 16));
        label_6 = new QLabel(Ajoutmodification);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 180, 56, 16));
        label_7 = new QLabel(Ajoutmodification);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 330, 91, 21));
        lineEdit_Phone = new QLineEdit(Ajoutmodification);
        lineEdit_Phone->setObjectName(QStringLiteral("lineEdit_Phone"));
        lineEdit_Phone->setGeometry(QRect(100, 180, 113, 22));
        lineEdit_Email = new QLineEdit(Ajoutmodification);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(100, 230, 113, 22));
        lineEdit_Mdp = new QLineEdit(Ajoutmodification);
        lineEdit_Mdp->setObjectName(QStringLiteral("lineEdit_Mdp"));
        lineEdit_Mdp->setGeometry(QRect(100, 330, 113, 22));
        lineEdit_CIN = new QLineEdit(Ajoutmodification);
        lineEdit_CIN->setObjectName(QStringLiteral("lineEdit_CIN"));
        lineEdit_CIN->setGeometry(QRect(100, 30, 113, 22));
        pb_modifier = new QPushButton(Ajoutmodification);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(270, 270, 93, 28));
        pb_modifier->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        comboBox_Function = new QComboBox(Ajoutmodification);
        comboBox_Function->setObjectName(QStringLiteral("comboBox_Function"));
        comboBox_Function->setGeometry(QRect(102, 280, 111, 22));
        suppression = new QGroupBox(tab_cruds);
        suppression->setObjectName(QStringLiteral("suppression"));
        suppression->setGeometry(QRect(510, 400, 281, 151));
        suppression->setStyleSheet(QStringLiteral("background-color: rgb(210, 253, 255);"));
        label_8 = new QLabel(suppression);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 50, 56, 16));
        lineEdit_Supp = new QLineEdit(suppression);
        lineEdit_Supp->setObjectName(QStringLiteral("lineEdit_Supp"));
        lineEdit_Supp->setGeometry(QRect(90, 50, 113, 22));
        pb_supprimer = new QPushButton(suppression);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(160, 100, 93, 28));
        pb_supprimer->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        affichage = new QGroupBox(tab_cruds);
        affichage->setObjectName(QStringLiteral("affichage"));
        affichage->setGeometry(QRect(450, 20, 581, 341));
        affichage->setStyleSheet(QStringLiteral("background-color:rgb(210, 253, 255);"));
        tab_employee = new QTableView(affichage);
        tab_employee->setObjectName(QStringLiteral("tab_employee"));
        tab_employee->setGeometry(QRect(10, 20, 561, 311));
        tab_employee->setStyleSheet(QStringLiteral("background-color:rgb(255,253,255);"));
        pb_notifier = new QPushButton(tab_cruds);
        pb_notifier->setObjectName(QStringLiteral("pb_notifier"));
        pb_notifier->setGeometry(QRect(220, 480, 121, 28));
        pb_notifier->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        pb_statistique = new QPushButton(tab_cruds);
        pb_statistique->setObjectName(QStringLiteral("pb_statistique"));
        pb_statistique->setGeometry(QRect(20, 480, 93, 28));
        pb_statistique->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        pb_generatepdf = new QPushButton(tab_cruds);
        pb_generatepdf->setObjectName(QStringLiteral("pb_generatepdf"));
        pb_generatepdf->setGeometry(QRect(120, 480, 93, 28));
        pb_generatepdf->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        calendrier = new QPushButton(tab_cruds);
        calendrier->setObjectName(QStringLiteral("calendrier"));
        calendrier->setGeometry(QRect(350, 480, 101, 28));
        calendrier->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        gestion_employe->addTab(tab_cruds, QString());
        tri = new QWidget();
        tri->setObjectName(QStringLiteral("tri"));
        recherche_tri = new QGroupBox(tri);
        recherche_tri->setObjectName(QStringLiteral("recherche_tri"));
        recherche_tri->setGeometry(QRect(10, 10, 671, 501));
        recherche_tri->setStyleSheet(QStringLiteral("background-color: rgb(210, 253, 255);"));
        pb_chercher = new QPushButton(recherche_tri);
        pb_chercher->setObjectName(QStringLiteral("pb_chercher"));
        pb_chercher->setGeometry(QRect(500, 440, 93, 28));
        pb_chercher->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        tab_employee_2 = new QTableView(recherche_tri);
        tab_employee_2->setObjectName(QStringLiteral("tab_employee_2"));
        tab_employee_2->setGeometry(QRect(30, 70, 531, 351));
        tab_employee_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 253, 255);"));
        lineEdit_rechercher = new QLineEdit(recherche_tri);
        lineEdit_rechercher->setObjectName(QStringLiteral("lineEdit_rechercher"));
        lineEdit_rechercher->setGeometry(QRect(180, 30, 113, 22));
        pb_tri = new QPushButton(recherche_tri);
        pb_tri->setObjectName(QStringLiteral("pb_tri"));
        pb_tri->setGeometry(QRect(400, 440, 93, 28));
        pb_tri->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        tri_2 = new QLabel(recherche_tri);
        tri_2->setObjectName(QStringLiteral("tri_2"));
        tri_2->setGeometry(QRect(30, 30, 56, 16));
        comboBox_tri = new QComboBox(recherche_tri);
        comboBox_tri->setObjectName(QStringLiteral("comboBox_tri"));
        comboBox_tri->setGeometry(QRect(90, 30, 73, 22));
        pb_generatepdf_2 = new QPushButton(recherche_tri);
        pb_generatepdf_2->setObjectName(QStringLiteral("pb_generatepdf_2"));
        pb_generatepdf_2->setGeometry(QRect(290, 440, 93, 28));
        pb_generatepdf_2->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        gestion_employe->addTab(tri, QString());
        statistique = new QWidget();
        statistique->setObjectName(QStringLiteral("statistique"));
        Statistique = new QGroupBox(statistique);
        Statistique->setObjectName(QStringLiteral("Statistique"));
        Statistique->setGeometry(QRect(20, 70, 561, 311));
        Statistique->setStyleSheet(QStringLiteral("background-color: rgb(210, 253, 255);"));
        layoutWidget_2 = new QWidget(Statistique);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 531, 241));
        gridLayout_9 = new QGridLayout(layoutWidget_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        function = new QLabel(layoutWidget_2);
        function->setObjectName(QStringLiteral("function"));

        gridLayout_9->addWidget(function, 0, 0, 1, 1);

        comboBoxStat = new QComboBox(layoutWidget_2);
        comboBoxStat->setObjectName(QStringLiteral("comboBoxStat"));

        gridLayout_9->addWidget(comboBoxStat, 0, 1, 1, 1);

        nombreEmploye = new QLabel(layoutWidget_2);
        nombreEmploye->setObjectName(QStringLiteral("nombreEmploye"));

        gridLayout_9->addWidget(nombreEmploye, 1, 0, 1, 1);

        progressBar = new QProgressBar(layoutWidget_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setStyleSheet(QStringLiteral("background-color: rgb(210, 253, 255);"));
        progressBar->setValue(24);

        gridLayout_9->addWidget(progressBar, 1, 1, 1, 1);

        pb_statistique2 = new QPushButton(Statistique);
        pb_statistique2->setObjectName(QStringLiteral("pb_statistique2"));
        pb_statistique2->setGeometry(QRect(450, 270, 93, 28));
        pb_statistique2->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        Notification = new QGroupBox(statistique);
        Notification->setObjectName(QStringLiteral("Notification"));
        Notification->setGeometry(QRect(630, 160, 351, 331));
        Notification->setStyleSheet(QLatin1String("background-color: rgb(210, 253, 255);\n"
""));
        lineEdit_Nom_Notif = new QLineEdit(Notification);
        lineEdit_Nom_Notif->setObjectName(QStringLiteral("lineEdit_Nom_Notif"));
        lineEdit_Nom_Notif->setGeometry(QRect(100, 130, 113, 22));
        lineEdit_Prenom_Notif = new QLineEdit(Notification);
        lineEdit_Prenom_Notif->setObjectName(QStringLiteral("lineEdit_Prenom_Notif"));
        lineEdit_Prenom_Notif->setGeometry(QRect(100, 170, 113, 22));
        label_9 = new QLabel(Notification);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 90, 56, 16));
        label_10 = new QLabel(Notification);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 130, 56, 16));
        label_11 = new QLabel(Notification);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 180, 56, 16));
        pb_notifier_2 = new QPushButton(Notification);
        pb_notifier_2->setObjectName(QStringLiteral("pb_notifier_2"));
        pb_notifier_2->setGeometry(QRect(220, 270, 93, 28));
        pb_notifier_2->setStyleSheet(QLatin1String("background-color: rgb(209, 203, 255);\n"
"font: 8pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        label_12 = new QLabel(Notification);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 220, 56, 16));
        lineEdit_CIN_Notif = new QLineEdit(Notification);
        lineEdit_CIN_Notif->setObjectName(QStringLiteral("lineEdit_CIN_Notif"));
        lineEdit_CIN_Notif->setGeometry(QRect(100, 90, 113, 22));
        comboBox_Function_Notif = new QComboBox(Notification);
        comboBox_Function_Notif->setObjectName(QStringLiteral("comboBox_Function_Notif"));
        comboBox_Function_Notif->setGeometry(QRect(100, 210, 111, 22));
        label_13 = new QLabel(Notification);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(15, 50, 271, 20));
        gestion_employe->addTab(statistique, QString());
        Detectiongaz = new QWidget();
        Detectiongaz->setObjectName(QStringLiteral("Detectiongaz"));
        groupBox = new QGroupBox(Detectiongaz);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 80, 891, 471));
        groupBox->setStyleSheet(QLatin1String("background-color: rgb(210, 253, 255);\n"
""));
        pbarduinoT_off = new QPushButton(groupBox);
        pbarduinoT_off->setObjectName(QStringLiteral("pbarduinoT_off"));
        pbarduinoT_off->setGeometry(QRect(320, 152, 111, 121));
        pbarduinoT_off->setStyleSheet(QStringLiteral(""));
        layoutWidget_8 = new QWidget(groupBox);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(190, 280, 251, 18));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_45 = new QLabel(layoutWidget_8);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_5->addWidget(label_45);

        label_46 = new QLabel(layoutWidget_8);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_5->addWidget(label_46);

        pbarduinoT_ON = new QPushButton(groupBox);
        pbarduinoT_ON->setObjectName(QStringLiteral("pbarduinoT_ON"));
        pbarduinoT_ON->setGeometry(QRect(200, 152, 111, 121));
        lineEdit_ID = new QLineEdit(groupBox);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(90, 50, 121, 16));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 50, 41, 16));
        comboBox_Function_2 = new QComboBox(groupBox);
        comboBox_Function_2->setObjectName(QStringLiteral("comboBox_Function_2"));
        comboBox_Function_2->setGeometry(QRect(90, 80, 121, 22));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 80, 56, 16));
        gestion_employe->addTab(Detectiongaz, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1096, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        gestion_employe->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Employ\303\251s", Q_NULLPTR));
        Ajoutmodification->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Function", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Phone", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Mdp", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        comboBox_Function->clear();
        comboBox_Function->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Juge", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Avocat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Conseiller", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable ressource humaines", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des affaires juridiques", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable d'archives", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des citoyens", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des salles", Q_NULLPTR)
        );
        suppression->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        affichage->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        pb_notifier->setText(QApplication::translate("MainWindow", "Notifier Employe", Q_NULLPTR));
        pb_statistique->setText(QApplication::translate("MainWindow", "statistique", Q_NULLPTR));
        pb_generatepdf->setText(QApplication::translate("MainWindow", "Generer pdf", Q_NULLPTR));
        calendrier->setText(QApplication::translate("MainWindow", "calendrier", Q_NULLPTR));
        gestion_employe->setTabText(gestion_employe->indexOf(tab_cruds), QApplication::translate("MainWindow", "CRUDS Employee", Q_NULLPTR));
        recherche_tri->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        pb_chercher->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        lineEdit_rechercher->setPlaceholderText(QApplication::translate("MainWindow", "rechercher", Q_NULLPTR));
        pb_tri->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        tri_2->setText(QApplication::translate("MainWindow", "Tri par :", Q_NULLPTR));
        comboBox_tri->clear();
        comboBox_tri->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CIN", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Prenom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Function", Q_NULLPTR)
        );
        comboBox_tri->setCurrentText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        pb_generatepdf_2->setText(QApplication::translate("MainWindow", "Generer pdf", Q_NULLPTR));
        gestion_employe->setTabText(gestion_employe->indexOf(tri), QApplication::translate("MainWindow", "Chercher Tri Employee", Q_NULLPTR));
        Statistique->setTitle(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        function->setText(QApplication::translate("MainWindow", "Function:", Q_NULLPTR));
        comboBoxStat->clear();
        comboBoxStat->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Juge", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Avocat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Conseiller", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable ressource humaines", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des affaires juridiques", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des salles", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable d'archives ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des citoyens", Q_NULLPTR)
        );
        nombreEmploye->setText(QApplication::translate("MainWindow", "Nombre Employes", Q_NULLPTR));
        pb_statistique2->setText(QApplication::translate("MainWindow", "Compter", Q_NULLPTR));
        Notification->setTitle(QApplication::translate("MainWindow", "Notification", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        pb_notifier_2->setText(QApplication::translate("MainWindow", "Notifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Function", Q_NULLPTR));
        comboBox_Function_Notif->clear();
        comboBox_Function_Notif->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Juge", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Avocat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Conseiller", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable ressource humaines", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des affaires juridiques", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable d'archives", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des citoyens", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des salles", Q_NULLPTR)
        );
        label_13->setText(QApplication::translate("MainWindow", "Inserer les informations d'employe a notifi\303\251 :", Q_NULLPTR));
        gestion_employe->setTabText(gestion_employe->indexOf(statistique), QApplication::translate("MainWindow", "Statistique Notification", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        pbarduinoT_off->setText(QApplication::translate("MainWindow", "Desactiver alarme", Q_NULLPTR));
        label_45->setText(QApplication::translate("MainWindow", "Etat:", Q_NULLPTR));
        label_46->setText(QString());
        pbarduinoT_ON->setText(QApplication::translate("MainWindow", "Activer alarme", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "CIN ", Q_NULLPTR));
        comboBox_Function_2->clear();
        comboBox_Function_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Responsable ressource humaines", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des affaires juridiques", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable d'archives", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des citoyens", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Responsable des salles", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("MainWindow", "Function", Q_NULLPTR));
        gestion_employe->setTabText(gestion_employe->indexOf(Detectiongaz), QApplication::translate("MainWindow", "Detection du gaz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

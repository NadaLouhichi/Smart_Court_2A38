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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QTabWidget *tab_modifier;
    QWidget *tab;
    QGroupBox *Ajout;
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
    QLineEdit *lineEdit_Function;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_Mdp;
    QLineEdit *lineEdit_CIN;
    QPushButton *pb_modifier;
    QGroupBox *suppression;
    QLabel *label_8;
    QLineEdit *lineEdit_Supp;
    QPushButton *pb_supprimer;
    QGroupBox *affichage;
    QTableView *tab_employee;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QMenuBar *menuBar;
    QMenu *menuGestion_des_employ_es;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1096, 764);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab_modifier = new QTabWidget(centralWidget);
        tab_modifier->setObjectName(QStringLiteral("tab_modifier"));
        tab_modifier->setGeometry(QRect(70, 90, 941, 571));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Ajout = new QGroupBox(tab);
        Ajout->setObjectName(QStringLiteral("Ajout"));
        Ajout->setGeometry(QRect(20, 10, 391, 391));
        lineEdit_Nom = new QLineEdit(Ajout);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(100, 80, 113, 22));
        lineEdit_Prenom = new QLineEdit(Ajout);
        lineEdit_Prenom->setObjectName(QStringLiteral("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(100, 130, 113, 22));
        label = new QLabel(Ajout);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 56, 16));
        label_2 = new QLabel(Ajout);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 56, 16));
        label_3 = new QLabel(Ajout);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 56, 16));
        pb_ajouter = new QPushButton(Ajout);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(270, 230, 93, 28));
        label_4 = new QLabel(Ajout);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 280, 56, 16));
        label_5 = new QLabel(Ajout);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 230, 56, 16));
        label_6 = new QLabel(Ajout);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 180, 56, 16));
        label_7 = new QLabel(Ajout);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 330, 91, 21));
        lineEdit_Phone = new QLineEdit(Ajout);
        lineEdit_Phone->setObjectName(QStringLiteral("lineEdit_Phone"));
        lineEdit_Phone->setGeometry(QRect(100, 180, 113, 22));
        lineEdit_Function = new QLineEdit(Ajout);
        lineEdit_Function->setObjectName(QStringLiteral("lineEdit_Function"));
        lineEdit_Function->setGeometry(QRect(100, 280, 113, 22));
        lineEdit_Email = new QLineEdit(Ajout);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(100, 230, 113, 22));
        lineEdit_Mdp = new QLineEdit(Ajout);
        lineEdit_Mdp->setObjectName(QStringLiteral("lineEdit_Mdp"));
        lineEdit_Mdp->setGeometry(QRect(100, 330, 113, 22));
        lineEdit_CIN = new QLineEdit(Ajout);
        lineEdit_CIN->setObjectName(QStringLiteral("lineEdit_CIN"));
        lineEdit_CIN->setGeometry(QRect(100, 30, 113, 22));
        pb_modifier = new QPushButton(Ajout);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(270, 270, 93, 28));
        suppression = new QGroupBox(tab);
        suppression->setObjectName(QStringLiteral("suppression"));
        suppression->setGeometry(QRect(440, 380, 281, 151));
        label_8 = new QLabel(suppression);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 50, 56, 16));
        lineEdit_Supp = new QLineEdit(suppression);
        lineEdit_Supp->setObjectName(QStringLiteral("lineEdit_Supp"));
        lineEdit_Supp->setGeometry(QRect(90, 50, 113, 22));
        pb_supprimer = new QPushButton(suppression);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(160, 100, 93, 28));
        affichage = new QGroupBox(tab);
        affichage->setObjectName(QStringLiteral("affichage"));
        affichage->setGeometry(QRect(450, 20, 461, 321));
        tab_employee = new QTableView(affichage);
        tab_employee->setObjectName(QStringLiteral("tab_employee"));
        tab_employee->setGeometry(QRect(80, 20, 311, 281));
        tab_modifier->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_modifier->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_modifier->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_modifier->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1096, 26));
        menuGestion_des_employ_es = new QMenu(menuBar);
        menuGestion_des_employ_es->setObjectName(QStringLiteral("menuGestion_des_employ_es"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGestion_des_employ_es->menuAction());

        retranslateUi(MainWindow);

        tab_modifier->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Employ\303\251s", Q_NULLPTR));
        Ajout->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Function", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Phone", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Mdp", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        suppression->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        affichage->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        tab_modifier->setTabText(tab_modifier->indexOf(tab), QApplication::translate("MainWindow", "Ajouter Employee", Q_NULLPTR));
        tab_modifier->setTabText(tab_modifier->indexOf(tab_2), QApplication::translate("MainWindow", "Modifier ", Q_NULLPTR));
        tab_modifier->setTabText(tab_modifier->indexOf(tab_3), QApplication::translate("MainWindow", "agenda", Q_NULLPTR));
        tab_modifier->setTabText(tab_modifier->indexOf(tab_4), QApplication::translate("MainWindow", "Page", Q_NULLPTR));
        menuGestion_des_employ_es->setTitle(QApplication::translate("MainWindow", "Gestion des employ\303\251es", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

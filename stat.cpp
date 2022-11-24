#include "stat.h"
#include "ui_stat.h"
#include <qvariant.h>
#include "affaires.h"
#include <QGridLayout>
#include <QWidget>
#include <QtCore>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QChartView>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLegend>
#include <QtCharts/QLineSeries>
#include <qwindow.h>

statistiques::statistiques(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistiques)
{
   // ui->setupUi(this);
       QBarSet *set=new QBarSet("TYPE AFFAIRES");
      *set<<A.calculer("A","B")<<A.calculer("B","C")<<A.calculer("C","B");
       QBarSeries *series=new QBarSeries();
       *set<<100;
       series->append(set);
       QChart *chart=new QChart();
       chart->addSeries(series);
       chart->setTitle("Stat types");
       chart->setAnimationOptions(QChart::AllAnimations);
       QStringList type;
       type<<"[G..H]"<<"[E..F]"<<"[C..D]"<<"[A..B]";
       QBarCategoryAxis *axis=new QBarCategoryAxis();
       axis->append(type);
       chart->createDefaultAxes();
       chart->setAxisX(axis,series);

       QChartView *chartview=new QChartView(chart);

       QGridLayout *mainLayout = new QGridLayout;
       mainLayout->addWidget(chartview, 1000, 500  );
       this->setLayout(mainLayout);
}
statistiques ::~statistiques()
{
delete ui;
}

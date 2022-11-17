#include "sqleventmodel.h"
#include "connection.h"
#include "event.h"
#include <QFileInfo>

//The C++ class, SqlEventModel, inherits SqlQueryModel to create a database with dummy events for certain dates.
SqlEventModel::SqlEventModel()
{

}


QList<QObject*> SqlEventModel::eventsForDate(const QDate &date)
{

    QSqlQuery query;


    query.prepare("SELECT * FROM GS_AFFAIRESJ where DATEA like :date");
    query.bindValue(":date", date);
    query.exec();

    QList<QObject*> events;
    while (query.next()) {
        Event *event = new Event(this);
        //event->setName(query.value("nom").toString());

        QDateTime startDate;
        startDate.setDate(query.value("DATEA").toDate());
        //startDate.setTime(QTime(0, 0).addSecs(query.value("startTime").toInt()));
        QString start="00000";
        startDate.setTime(QTime(0, 0).addSecs(start.toInt()));
        event->setStartDate(startDate);

        QDateTime endDate;
        endDate.setDate(query.value("DATEA").toDate());
        endDate.setTime(QTime(0, 0).addSecs(start.toInt()));
        event->setEndDate(endDate);

        events.append(event);
    }

    return events;

}

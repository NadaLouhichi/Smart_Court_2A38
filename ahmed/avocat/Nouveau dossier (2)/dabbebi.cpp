#include "dabbebi.h"

DABBEBI::DABBEBI(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant DABBEBI::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex DABBEBI::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex DABBEBI::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int DABBEBI::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int DABBEBI::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant DABBEBI::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}

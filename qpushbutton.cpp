#include "qpushbutton.h"

QPushButton::QPushButton(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant QPushButton::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex QPushButton::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex QPushButton::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int QPushButton::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int QPushButton::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant QPushButton::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}

#include "listmodel.h"

ListModel::ListModel(QObject *parent)
    : QStandardItemModel(parent)
{
    for (int i = 0; i < 10; ++i)
    {
        appendRow(new QStandardItem(QString::number(i)));
    }
}

ListModel::~ListModel()
{
    // aquí no va nada
}

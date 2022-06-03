#include "tablemodel.h"

TableModel::TableModel(QObject *parent)
    : QStandardItemModel(parent)
{
    setColumnCount(3);
    setRowCount(5);
    QStringList labels { "Columna 1", "Columna 2", "Columna 3" };
    setHorizontalHeaderLabels(labels);

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            QStandardItem *item = new QStandardItem;
            item->setText(QString::number(i + j));
            setItem(i, j, item);
        }
    }
}

TableModel::~TableModel()
{
    // aquí no va nada
}

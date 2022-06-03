#include "treemodel.h"

TreeModel::TreeModel(QObject *parent)
    : QStandardItemModel(parent)
{
    setHorizontalHeaderItem(0, new QStandardItem("Elementos"));

    for (int i = 0; i < 10; ++i)
    {
        QStandardItem *topItem = new QStandardItem;
        topItem->setText(QString("Elemento %1").arg(i));
        topItem->setFlags(Qt::ItemIsEnabled);
        for (int j = 0; j < 5; ++j)
        {
            QStandardItem *child = new QStandardItem;
            child->setText(QString::number(j));
            child->setFlags(Qt::ItemIsEnabled | Qt::ItemIsEditable | Qt::ItemIsSelectable | Qt::ItemIsUserCheckable);
            child->setCheckState(Qt::Unchecked);
            topItem->appendRow(child);
        }

        appendRow(topItem);
    }
}

TreeModel::~TreeModel()
{
    // aquí no va nada
}

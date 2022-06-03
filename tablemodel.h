#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QStandardItemModel>

class TableModel : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit TableModel(QObject *parent = nullptr);
    virtual ~TableModel();
};

#endif // TABLEMODEL_H

#ifndef LISTMODEL_H
#define LISTMODEL_H

#include <QStandardItemModel>

class ListModel : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit ListModel(QObject *parent = nullptr);
    virtual ~ListModel();
};

#endif // LISTMODEL_H

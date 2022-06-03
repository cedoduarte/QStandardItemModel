#ifndef TREEMODEL_H
#define TREEMODEL_H

#include <QStandardItemModel>

class TreeModel : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit TreeModel(QObject *parent = nullptr);
    virtual ~TreeModel();
};

#endif // TREEMODEL_H

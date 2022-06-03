#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class ListModel;
class TreeModel;
class TableModel;

namespace Ui
{
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    virtual ~Widget();
private:
    Ui::Widget *ui;
    ListModel *m_listModel;
    TreeModel *m_treeModel;
    TableModel *m_tableModel;
};

#endif // WIDGET_H

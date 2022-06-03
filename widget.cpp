#include "widget.h"
#include "ui_widget.h"
#include "listmodel.h"
#include "treemodel.h"
#include "tablemodel.h"

#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_listModel = new ListModel(this);
    m_treeModel = new TreeModel(this);
    m_tableModel = new TableModel(this);
    ui->listView->setModel(m_listModel);
    ui->treeView->setModel(m_treeModel);
    ui->tableView->setModel(m_tableModel);
}

Widget::~Widget()
{
    delete ui;
}

#include <TableDataView/TableDataWidget.hpp>
#include  <CommonActions/CommonActions.hpp>

#include <QtSql/QSqlDatabase>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtSql/QSqlRelationalTableModel>

TableDataWidget::TableDataWidget(QSqlDatabase &dataBase,QWidget *parent,Qt::WindowFlags f):QWidget(parent,f),db(dataBase)
{

    layout = new QVBoxLayout(this);
    view = new QTableView();
    layout->addWidget(view);

    connect(CommonActions::instance(),SIGNAL(tableItemSelected(const QString &)),this,SLOT(slot_setTable(const QString &)));
    
}

TableDataWidget::~TableDataWidget()
{
    //delete model;
    delete view;
}

void TableDataWidget::slot_setTable(const QString &tableName)
{    
    QSqlRelationalTableModel *model = new QSqlRelationalTableModel(this,db);
    model->setTable(tableName);    
    //this is required to populate the table with  the records within
    model->select();
    view->setModel(model);
}

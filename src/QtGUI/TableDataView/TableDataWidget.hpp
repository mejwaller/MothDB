#ifndef TABLEDATAWIDGET_HPP
#define TABLEDATAWIDGET_HPP

#include <QtGui/QWidget>

class QTableView;
class QSqlDatabase;
class QVBoxLayout;

class TableDataWidget:public QWidget
{
    Q_OBJECT
    public:
        TableDataWidget(QSqlDatabase &dataBase,QWidget *parent=0,Qt::WindowFlags f = 0);
        virtual ~TableDataWidget();
    public slots:
        void slot_setTable(const QString &tableName);

    private:
        QSqlDatabase &db;//not owned - don't delete!
        QVBoxLayout *layout;
        QTableView *view;
};

#endif//TABLEDATAWIDGET_HPP

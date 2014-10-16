#ifndef QUERIESSHEET_HPP
#define QUERIESSHEET_HPP

#include <QtGui/QWidget>

class QGridLayout;
class QPushButton;

class QueriesSheet:public QWidget
{
    Q_OBJECT
    public:
        QueriesSheet(QWidget *parent =0,Qt::WindowFlags f =0);
        virtual ~QueriesSheet();

    private:
        QGridLayout *layout;
        QPushButton *addRecordBut,*editRecordBut,*runQueryBut,*chartQueryBut;

};

#endif//QUERIESSHEET_HPP

#include <QueriesSheet/QueriesSheet.hpp>
#include <CommonActions/CommonActions.hpp>

#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>

QueriesSheet::QueriesSheet(QWidget *parent,Qt::WindowFlags f):QWidget(parent,f)
{
    layout = new QGridLayout(this);
  
    addRecordBut = new QPushButton(tr("&Add record..."),this);
    editRecordBut = new QPushButton(tr("&Edit record..."),this);
    runQueryBut = new QPushButton(tr("&Run query..."),this);
    chartQueryBut = new QPushButton(tr("&Chart query..."),this);

    connect(addRecordBut,SIGNAL(clicked()),CommonActions::instance(),SLOT(slot_addRecord()));
    connect(editRecordBut,SIGNAL(clicked()),CommonActions::instance(),SLOT(slot_editRecord()));
    connect(runQueryBut,SIGNAL(clicked()),CommonActions::instance(),SLOT(slot_runQuery()));
    connect(chartQueryBut,SIGNAL(clicked()),CommonActions::instance(),SLOT(slot_chartQuery()));

    layout->addWidget(addRecordBut,0,0);
    layout->addWidget(editRecordBut,0,1);
    layout->addWidget(runQueryBut,1,0);
    layout->addWidget(chartQueryBut,1,1);
    
}

QueriesSheet::~QueriesSheet()
{
}


#include <MainWin.hpp>

#include <Dialogs/ConnectDlg.hpp>
#include <TablesView/TableListModel.hpp>
#include <QueriesSheet/QueriesSheet.hpp>
#include <TableDataView/TableDataWidget.hpp>
#include <CommonActions/CommonActions.hpp>

#include <QtGui/QStatusBar>
#include <QtGui/QApplication>
#include <QtGui/QSplitter>
#include <QtGui/QTreeView>
#include <QtGui/QTabWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QStandardItemModel>
#include <QtGui/QMenuBar>
#include <QtGui/QMenu>

#include <iostream>

using namespace std;

MainWin::MainWin()
{
 
}

MainWin::~MainWin()
{
}

int MainWin::init()
{
    ConnectDlg dlg;
    
    if(dlg.exec() == QDialog::Accepted)
    {
        cout << "Connected!" << endl;
        db = dlg.getDatabase();
        CommonActions::instance()->setDB(&db);
        statusBar()->showMessage(tr("Ready"));
        setWindowTitle(tr("MothDB"));
        return 0;
    }
    else
    {
       return 1;
    }
       
}

void MainWin::showWidgets()
{
    createActions();
    createMenus();
    splitter = new QSplitter();//Qt::Horizontal is the default (widgets side-byside)

    tablesView = new QTreeView();
    tablesView->setRootIsDecorated(false);

    TableListModel *tableMod = new TableListModel(this,db.tables());    
    tablesView->setModel(tableMod);

    connect(tablesView,SIGNAL(clicked(const QModelIndex &)),CommonActions::instance(),SLOT(slot_tableSelected(const QModelIndex &)));

    viewsAndQueries = new QTabWidget();
    viewsAndQueries->addTab(new TableDataWidget(db),"Table data");
    viewsAndQueries->addTab(new QueriesSheet(),"Queries");

    splitter->addWidget(tablesView);
    splitter->addWidget(viewsAndQueries);

    setCentralWidget(splitter);    
}

void MainWin::createActions()
{
    exitAct = new QAction(tr("E&xit"),this);
    exitAct->setShortcut(tr("Ctrl+Q"));
    exitAct->setStatusTip(tr("Exit"));
    connect(exitAct, SIGNAL(triggered()),this,SLOT(close()));       
}

void MainWin::createMenus()
{
   fileMenu = menuBar()->addMenu(tr("&File"));
   fileMenu->addAction(exitAct);

   queryMenu = menuBar()->addMenu(tr("Q&ueries"));
   queryMenu->addAction(CommonActions::instance()->getAddRecordAct());
   queryMenu->addAction(CommonActions::instance()->getAddRecEventAct());
   queryMenu->addAction(CommonActions::instance()->getAddTaxonRecAct());
   queryMenu->addAction(CommonActions::instance()->getDeleteRecordAct());
   queryMenu->addAction(CommonActions::instance()->getDeleteRecEventAct());
   queryMenu->addAction(CommonActions::instance()->getDeleteTaxonRecAct());
   queryMenu->addAction(CommonActions::instance()->getEditRecordAct());
   queryMenu->addAction(CommonActions::instance()->getRunQueryAct());
   queryMenu->addAction(CommonActions::instance()->getChartQueryAct());
}



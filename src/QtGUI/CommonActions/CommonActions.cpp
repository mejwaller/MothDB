#include <CommonActions/CommonActions.hpp>
#include <Dialogs/NewRecordDlg.hpp>
#include <Dialogs/NewRecEventDlg.hpp>
#include <Dialogs/DeleteRecordDlg.hpp>
#include <Dialogs/DeleteRecEventDlg.hpp>
#include <TreeViewItems/TreeViewItem.hpp>
#include <QueryRunner/QueryRunner.hpp>
#include <Record.hpp>

#include <QtGui/QAction>
#include <QtCore/QModelIndex>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlError>
#include <QtGui/QMessageBox>

#include <string>

using namespace std;

CommonActions *CommonActions::singleton = 0;

CommonActions *CommonActions::instance()
{
    if(!singleton)
    {
        singleton =  new CommonActions();
    }
    return singleton;
}

void CommonActions::setDB(QSqlDatabase *data)
{
    db = data;
}
    

CommonActions::CommonActions():QObject(),db(0)
{
    addRecordAct = new QAction(tr("&Add record..."),this);
    addRecordAct->setShortcut(tr("Ctrl+A"));
    addRecordAct->setStatusTip(tr("Add a record"));
    connect(addRecordAct,SIGNAL(triggered()),this,SLOT(slot_addRecord()));

    addRecEventAct = new QAction(tr("&Add record even&t..."),this);
    addRecEventAct->setShortcut(tr("Ctrl+T"));
    addRecEventAct->setStatusTip(tr("Add a record event"));
    connect(addRecEventAct,SIGNAL(triggered()),this,SLOT(slot_addRecEvent()));
    
    addTaxonRecAct = new QAction(tr("&Add taxon record..."),this);
    //addTaxonRecAct->setShortcut(tr("Ctrl+T"));
    addTaxonRecAct->setStatusTip(tr("Add a taxon record"));
    connect(addTaxonRecAct,SIGNAL(triggered()),this,SLOT(slot_addTaxonRec()));


    editRecordAct = new QAction(tr("&Edit record..."),this);
    editRecordAct->setShortcut(tr("Ctrl+E"));
    editRecordAct->setStatusTip(tr("Edit a record"));
    connect(editRecordAct,SIGNAL(triggered()),this,SLOT(slot_editRecord()));
    
    //delete record act here
    deleteRecordAct = new QAction(tr("&Delete a record..."),this);
    deleteRecordAct->setShortcut(tr("Ctrl+D"));
    deleteRecordAct->setStatusTip(tr("Delete a record..."));
    connect(deleteRecordAct,SIGNAL(triggered()),this,SLOT(slot_deleteRecord()));

    deleteRecEventAct = new QAction(tr("Delete a record event..."),this);
    //deleteRecEventAct->setShortcut(tr("Ctrl+D"));
    deleteRecEventAct->setStatusTip(tr("Delete a record event..."));
    connect(deleteRecEventAct,SIGNAL(triggered()),this,SLOT(slot_deleteRecEvent()));

    deleteTaxonRecAct = new QAction(tr("Delete a taxon record..."),this);
    //deleteTaxonRecAct->setShortcut(tr("Ctrl+D"));
    deleteTaxonRecAct->setStatusTip(tr("Delete a taxon record..."));
    connect(deleteTaxonRecAct,SIGNAL(triggered()),this,SLOT(slot_deleteTaxonRec()));

    runQueryAct = new QAction(tr("&Run a query..."),this);
    runQueryAct->setShortcut(tr("Ctrl+R"));
    runQueryAct->setStatusTip(tr("Run a (SQL) query"));    
    connect(runQueryAct,SIGNAL(triggered()),this,SLOT(slot_runQuery()));

    chartQueryAct = new QAction(tr("&Chart query..."),this);
    chartQueryAct->setShortcut(tr("Ctrl+C"));
    chartQueryAct->setStatusTip(tr("Chart data from a query"));
    connect(chartQueryAct,SIGNAL(triggered()),this,SLOT(slot_chartQuery()));
}

CommonActions::~CommonActions()
{
    delete singleton;
}

void CommonActions::slot_addRecord()
{
    //NewRecordWzd dlg;
    NewRecordDlg dlg;

    if(dlg.exec() == QDialog::Accepted)
    {
        cout << "dlg accepted" << endl;
    }
    else
    {
        cout << "dlg cancelled" <<endl;
    }

    cout << "Add a record" << endl;
}

void CommonActions::slot_addRecEvent()
{
	NewRecEventDlg dlg;
	
	if(dlg.exec() == QDialog::Accepted)
	{
		cout << "dlg accepted" << endl;
	}
	else
	{
	 	cout << "dlg cancelled" << endl;
	}
	
    cout << "Add recevent here" << endl;
}

void CommonActions::slot_addTaxonRec()
{
	cout << "Add taxon rec here..." << endl;
}

void CommonActions::slot_editRecord()
{
    cout << "Edit a record" << endl;
}

void CommonActions::slot_deleteRecord()
{
	cout << "Delete a record" << endl;

	DeleteRecordDlg dlg;

	if(dlg.exec() == QDialog::Accepted)
	{
		cout << "dlg accepted" << endl;
	}
	else
	{
	 	cout << "dlg cancelled" << endl;
	}
}

void CommonActions::slot_deleteRecEvent()
{
	cout << "Delete an event record" << endl;

	DeleteRecEventDlg dlg;

	if(dlg.exec() == QDialog::Accepted)
	{
		cout << "dlg accepted" << endl;
	}
	else
	{
	 	cout << "dlg cancelled" << endl;
	}
}

void CommonActions::slot_deleteTaxonRec()
{
	cout << "Delete taxon rec here..." << endl;
}

void CommonActions::slot_runQuery()
{
    cout << "Run a query" << endl;
}

void CommonActions::slot_chartQuery()
{
   cout << "Chart a query" << endl;
}

void CommonActions::slot_tableSelected(const QModelIndex &index)
{
    if(index.isValid())
    {
        TreeViewItem *item = static_cast<TreeViewItem *>(index.internalPointer());
        if(item)
        {
            QString  tableName = (item->data(index.column())).toString();
            cout << "Item " << tableName.toLocal8Bit().data() << " has been select" << endl;
            QString queryString = QString("SELECT * FROM ") + tableName;
            cout << "About to run query \"" << queryString.toLocal8Bit().data() << "\"" << endl;            
            QSqlQuery queryResult = QueryRunner::instance()->runQuery(*db,queryString);
            cout << "There are " << queryResult.record().count() << " fields in table " << tableName.toLocal8Bit().data() << endl;
            cout << "There are " << queryResult.size() << " records" << endl;
            emit tableItemSelected(tableName);
            
        }
    }
}

bool CommonActions::doCommit(const Record & record)
{
	cout << "will commit: " << record.getQuery() << endl;

	//return false;

	db->transaction();

	QSqlQuery query;

	query.exec(QString(record.getQuery().c_str()));
	//query.exec("INSERT rubbsih");

	bool success = db->commit();

	QSqlError err = query.lastError();

	if(err.type() != QSqlError::NoError)
	{
		QMessageBox msgBox;

		string theErr = "query error: " + record.getQuery() + " gave error " + err.text().toStdString();

		msgBox.setText(theErr.c_str());

		msgBox.exec();

		return false;
	}

	return success;

}

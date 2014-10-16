#include <Dialogs/NewRecEventDlg.hpp>
#include <Dialogs/RecEventNotesDlg.hpp>
#include <CommonActions/CommonActions.hpp>
#include <EventRecord.hpp>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QMessageBox>

#include <iostream>
#include <string>

using namespace std;

NewRecEventDlg::NewRecEventDlg(QWidget *parent, Qt::WindowFlags f)
:QDialog(parent,f)
{
	setWindowTitle(QString("Add new record event"));
	
	commitBut=new QPushButton("Commit to database");
	connect(commitBut, SIGNAL(clicked()),this,SLOT(slot_commit()));
	
	cancelBut = new QPushButton("Cancel");
	connect(cancelBut,SIGNAL(clicked()),this,SLOT(reject()));
	
	QVBoxLayout *topLayout = new QVBoxLayout(this);
	
	QGroupBox *recEventData = new QGroupBox(QString("Record Event"),this);
	QVBoxLayout *recEventDatLayout = new QVBoxLayout();
	recDateLbl = new QLabel(tr("Record Date:"));
	//default is yesterday assuming user's entering last night's catch
	recDateTxt = new QDateEdit((QDate::currentDate()).addDays(-1));
	recTypeLbl = new QLabel(tr("Record Type:"));
	recTypeTxt = new QLineEdit(tr("MV Light Trap"));
	gridRefLbl = new QLabel(tr("Grid ref.:"));
	//my grid ref...
	gridRefTxt = new QLineEdit("SU993553");
	notesLbl = new QLabel(tr("Notes:"));
	notesTxt = new QTextEdit();
	notesTxt->setAcceptRichText(false);
	//recNotesBut = new QPushButton(tr("Record event notes..."));
	//connect(recNotesBut,SIGNAL(clicked()),this,SLOT(slot_addRecEventNotes()));
	
	recEventDatLayout->addWidget(recDateLbl);
	recEventDatLayout->addWidget(recDateTxt);
	recEventDatLayout->addWidget(recTypeLbl);
	recEventDatLayout->addWidget(recTypeTxt);
	recEventDatLayout->addWidget(gridRefLbl);
	recEventDatLayout->addWidget(gridRefTxt);
	recEventDatLayout->addWidget(notesLbl);
	recEventDatLayout->addWidget(notesTxt);
	//recEventDatLayout->addWidget(recNotesBut);
	
	recEventData->setLayout(recEventDatLayout);
	
	topLayout->addWidget(recEventData);
		
	topLayout->addWidget(commitBut);
	topLayout->addWidget(cancelBut);
	
	
}

void NewRecEventDlg::slot_commit()
{
 	cout << "Commit new rec event code here" << endl;

 	//get the date out of QDateEdit field...

 	QDate recDate = recDateTxt->date();

 	//May need to convert to different string depending on what format MySQL accepts date sin...
 	string theDate = recDate.toString("yyyy-MM-dd").toStdString();

 	//cout << "Date is " << theDate << endl;

 	string recordType = recTypeTxt->text().toStdString();

 	//cout << "Record type is " << recordType << endl;

 	string gridRef = gridRefTxt->text().toStdString();

 	//cout << "Grid ref is " << gridRef << endl;

 	string notes = notesTxt->toPlainText().toStdString();

 	//cout << "Notes are " << notes << endl;

 	//create a new Record (EventTRecord in this case) to write
 	EventRecord evRec(theDate,recordType,notes,gridRef);

 	//cout << "Query to run is: " << evRec.getQuery() << endl;

 	//get CommonActions to execute it...
 	if(CommonActions::instance()->doCommit(evRec))
 	{
 		accept();
 	}
 	else
 	{
 		QMessageBox msgBox(this);

 		msgBox.setText("Commit failed");

 		msgBox.exec();
 	}
}



	
	
	
	
	


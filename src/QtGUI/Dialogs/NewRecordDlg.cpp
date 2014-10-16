#include <Dialogs/NewRecordDlg.hpp>
#include <QtGui/QHBoxLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPushButton>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QLineEdit>
#include <QtGui/QLabel>
#include <QtGui/QCheckBox>
#include <QtGui/QIntValidator>

#include <iostream>

using namespace std;

NewRecordDlg::NewRecordDlg(QWidget *parent, Qt::WindowFlags f)
:QDialog(parent,f)
{

    setWindowTitle(QString("Add New Record"));

    addBut=new QPushButton("Commit to database");
    connect(addBut, SIGNAL(clicked()),this,SLOT(slot_commit()));
    cancelBut=new QPushButton("Cancel");
    connect(cancelBut,SIGNAL(clicked()),this,SLOT(reject()));

    //Now set up widgets in s eries of layouts/groupboxes:
    QVBoxLayout *topLayout = new QVBoxLayout(this);

    QGroupBox *recEventData = new QGroupBox(QString("Record Event"),this);
    QVBoxLayout *recEventDatLayout = new QVBoxLayout();
    existingBut = new QPushButton(tr("Select existing..."));
    connect(existingBut,SIGNAL(clicked()),this,SLOT(slot_selectRecEvent()));
    useAsCurrent= new QCheckBox(tr("Keep as current"));
    recDateLbl = new QLabel(tr("Record Date:"));
    recDateTxt = new QDateEdit((QDate::currentDate()).addDays(-1));
    recTypeLbl = new QLabel(tr("Record Type:"));
    recTypeText = new QLineEdit(tr("MV Light Trap"));
    gridRefLbl =new QLabel(tr("Grid ref.:"));
    gridRefTxt  = new QLineEdit("SU993553");
    recNotesBut=new QPushButton(tr("Record event notes..."));
    connect(recNotesBut,SIGNAL(clicked()),this,SLOT(slot_addRecEventNotes()));

    recEventDatLayout->addWidget(existingBut);
    recEventDatLayout->addWidget(useAsCurrent);
    recEventDatLayout->addWidget(recDateLbl);
    recEventDatLayout->addWidget(recDateTxt);
    recEventDatLayout->addWidget(recTypeLbl);
    recEventDatLayout->addWidget(recTypeText);    
    recEventDatLayout->addWidget(gridRefLbl);
    recEventDatLayout->addWidget(gridRefTxt);
    recEventDatLayout->addWidget(recNotesBut);

    recEventData->setLayout(recEventDatLayout);

    QGroupBox *recData = new QGroupBox(QString("Record Data"),this);
	//TO ADD:
	//QHBoxLayout *recDatLayout
	//QVBoxLayout *searchSpLayout
	//ad radiop buttons - search by latin sp name, common name, genus?
	//you type ins tsring in an input field, press a 'search' button, somethign gets 
	//filled with a list o fon eor moresearch results which you can double click 
	//to use a specific member of that list (double clicked/slected/whataver item
	//is used to fill 'speciesTxt' linedit below)
	
    QVBoxLayout *recDatActualLayout = new QVBoxLayout(); 
   
    selectSpBut =new QPushButton(tr("Select species..."));
    connect(selectSpBut,SIGNAL(clicked()),this,SLOT(slot_getSpecies()));
    speciesLbl = new QLabel(tr("Species"));
    speciesTxt = new QLineEdit();
    countLbl = new QLabel(tr("Number of records:"));
    countTxt = new QLineEdit();
    recCountValidator = new QIntValidator(countTxt);
    recCountValidator->setBottom(1);
    countTxt->setValidator(recCountValidator);
	spNotesBut = new QPushButton(tr("Record Data Notes..."));

    recDatActualLayout->addWidget(selectSpBut);
    recDatActualLayout->addWidget(speciesLbl);
    recDatActualLayout->addWidget(speciesTxt);
    recDatActualLayout->addWidget(countLbl);
    recDatActualLayout->addWidget(countTxt);
	recDatActualLayout->addWidget(spNotesBut);

    recData->setLayout(recDatActualLayout);    
    
    QHBoxLayout *butLayout = new QHBoxLayout();
    butLayout->addWidget(addBut);
    butLayout->addWidget(cancelBut);

    topLayout->addWidget(recEventData);
    //topLayout->addLayout(recEventDatLayout);
    topLayout->addWidget(recData);
    //topLayout->addLayout(recDatLayout);
    //topLayout->addWidget(recNotesBut);
    topLayout->addLayout(butLayout);

}

void NewRecordDlg::slot_commit()
{
    cout << "Commit record here" << endl;
    accept();
}

string NewRecordDlg::slot_getSpecies()
{
    cout << "NOT DONE YET\n";
	return string("NOT DONE YET");
}

void NewRecordDlg::slot_addRecEventNotes()
{
    cout << "Add receord event notes here" <<endl;
}

void NewRecordDlg::slot_selectRecEvent()
{
    cout << "Add stuff to select exisiting record here\n";
}


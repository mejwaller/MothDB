#include <Dialogs/RecEventNotesDlg.hpp>
#include <QtGui/QTextEdit>
//#include <QtGui/QString>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QHBoxLayout>

#include <iostream>

using namespace std;

RecEventNotesDlg::RecEventNotesDlg(string &theNotes,QWidget *parent,Qt::WindowFlags f):QDialog(parent,f)
{
    setWindowTitle(QString("Record Event Notes"));
	
	saveBut = new QPushButton("Save record event notes");
	connect(saveBut,SIGNAL(clicked()),this,SLOT(slot_saveNotes(theNotes)));
	//connect(saveBut,SIGNAL(clicked()),this,SLOT(accept()));
	
	cancelBut = new QPushButton("Cancel");
	connect(cancelBut,SIGNAL(clicked()),this,SLOT(reject()));
	
	textWin = new QTextEdit(this);
	textWin->setAcceptRichText(false);
	
	QVBoxLayout *topLayout = new QVBoxLayout(this);
	QHBoxLayout *butLayout = new QHBoxLayout();
	
	butLayout->addWidget(saveBut);
	butLayout->addWidget(cancelBut);
	
	topLayout->addWidget(textWin);
	topLayout->addLayout(butLayout);
	
    //just to get to compile wihtout complaints
    textWin=0;
	
	
}

//probably not needed
void RecEventNotesDlg::slot_saveNotes(string &notes)
{

	cout << "Implement not save here" << endl;
	notes = textWin->toPlainText().toStdString();
	accept();
}


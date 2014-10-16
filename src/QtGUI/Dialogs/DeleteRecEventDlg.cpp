#include <Dialogs/DeleteRecEventDlg.hpp>

#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>

DeleteRecEventDlg::DeleteRecEventDlg(QWidget *parent, Qt::WindowFlags f)
:QDialog(parent,f)
{
	setWindowTitle(QString("Delete and event record"));

	commitBut=new QPushButton("Commit to database",this);
	connect(commitBut, SIGNAL(clicked()),this,SLOT(slot_commit()));

	cancelBut = new QPushButton("Cancel",this);
	connect(cancelBut,SIGNAL(clicked()),this,SLOT(reject()));

	findRecBut = new QPushButton("Find event record...",this);
	//connect here...

	QVBoxLayout *topLayout = new QVBoxLayout(this);
	view = new QTableView();

	QHBoxLayout *buttonLayout = new QHBoxLayout(this);


	buttonLayout->addWidget(commitBut);
	buttonLayout->addWidget(findRecBut);
	buttonLayout->addWidget(cancelBut);

	topLayout->addWidget(view);
	topLayout->addLayout(buttonLayout);
}

void DeleteRecEventDlg::slot_commit()
{
	accept();
}

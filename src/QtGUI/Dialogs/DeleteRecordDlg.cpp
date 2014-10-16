#include <Dialogs/DeleteRecordDlg.hpp>

#include <QtGui/QPushButton>

DeleteRecordDlg::DeleteRecordDlg(QWidget *parent, Qt::WindowFlags f)
:QDialog(parent,f)
{
	setWindowTitle(QString("Delete a trap record"));

	commitBut=new QPushButton("Commit to database",this);
	connect(commitBut, SIGNAL(clicked()),this,SLOT(slot_commit()));

	cancelBut = new QPushButton("Cancel",this);
	connect(cancelBut,SIGNAL(clicked()),this,SLOT(reject()));
}

void DeleteRecordDlg::slot_commit()
{
	accept();
}

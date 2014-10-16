#ifndef NEWRECEVENTDLG_HPP
#define NEWRECEVENTDLG_HPP

#include <QtGui/QDialog>
#include <string>

class QPushButton;
class QLabel;
class QDateEdit;
class QLineEdit;
class QTextEdit;

class NewRecEventDlg: public QDialog
{

	Q_OBJECT
	public:
		NewRecEventDlg(QWidget *parent=0, Qt::WindowFlags f=0);
	public slots:
		virtual void slot_commit();

	private:
		QPushButton *commitBut, *cancelBut;
		QLabel *recDateLbl, *recTypeLbl, *gridRefLbl, *notesLbl;
		QDateEdit *recDateTxt;
		QLineEdit *recTypeTxt,*gridRefTxt;
		QTextEdit *notesTxt;
};




#endif//NEWRECEVENTDLG_HPP

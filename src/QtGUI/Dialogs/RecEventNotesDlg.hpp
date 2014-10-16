#ifndef RECEVENTNOTESDLG_HPP
#define RECEVENTNOTESDLG_HPP

#include <QtGui/QDialog>
#include <string>

class QTextEdit;

class RecEventNotesDlg:public QDialog
{
	Q_OBJECT
	public:
		RecEventNotesDlg(std::string & thenotes, QWidget *parent=0, Qt::WindowFlags f=0);

	public slots:
		virtual void slot_saveNotes(std::string &);
	
	private:
		QTextEdit *textWin;
		QPushButton *saveBut, *cancelBut;

};


#endif//RECEVENTNOTESDLG_HPP



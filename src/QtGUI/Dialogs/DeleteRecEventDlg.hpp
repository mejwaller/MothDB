#ifndef DELETERECEVENTDLG_HPP
#define DELETERECEVENTDLG_HPP

#include <QtGui/QDialog>

class QPushButton;
class QTableView;

class DeleteRecEventDlg:public QDialog
{

	Q_OBJECT
		public:
			DeleteRecEventDlg(QWidget *parent=0, Qt::WindowFlags f=0);
		public slots:
			virtual void slot_commit();

		private:
			QTableView *view;
			QPushButton *commitBut, *findRecBut,*cancelBut;

};


#endif //DELETERECEVENTDLG_HPP

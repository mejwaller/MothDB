#ifndef DELETERECORDDLG_HPP
#define DELETERECORDDLG_HPP

#include <QtGui/QDialog>

class QPushButton;

class DeleteRecordDlg:public QDialog
{

	Q_OBJECT
		public:
			DeleteRecordDlg(QWidget *parent=0, Qt::WindowFlags f=0);
		public slots:
			virtual void slot_commit();

		private:
			QPushButton *commitBut, *cancelBut;

};


#endif //DELETERECORDDLG_HPP

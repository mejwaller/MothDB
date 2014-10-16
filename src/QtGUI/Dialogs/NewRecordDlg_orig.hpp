#ifndef NEWRECORDDLG_HPP
#define NEWRECORDDLG_HPP

#include <QtGui/QDialog>

class QDateEdit;
class QPushButton;
class QLabel;
class QGroupBox;
class QCheckBox;
class QLineEdit;

class NewRecordDlg:public QDialog
{
    Q_OBJECT
    public:
        NewRecordDlg(QWidget *parent = 0, Qt::WindowFlags f=0);
        //NewRecordDlg(QWidget *parent = 0, Qt::WindowFlags f=0):QDialog(parent,f){}
    public slots:
        virtual void commit();
    private:
         QPushButton *addBut, * cancelBut;

         //record event widgets
         QPushButton *recNotesBut;
         QLabel *recDateLbl, *gridRefLbl;
         QDateEdit *recDateTxt;
         QLineEdit *gridRefTxt;
         QCheckBox *useAsCurrent;
         QGroupBox *recEventData;
};

#endif

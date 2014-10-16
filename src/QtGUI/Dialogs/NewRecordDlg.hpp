#ifndef NEWRECORDDLG_HPP
#define NEWRECORDDLG_HPP

#include <QtGui/QDialog>
#include <string>

class QDateEdit;
class QPushButton;
class QLabel;
class QGroupBox;
class QCheckBox;
class QLineEdit;
class QIntValidator;

class NewRecordDlg:public QDialog
{
    Q_OBJECT
    public:
        NewRecordDlg(QWidget *parent = 0, Qt::WindowFlags f=0);
    public slots:
        virtual void slot_commit();
        virtual std::string slot_getSpecies();
        virtual void slot_addRecEventNotes();
        virtual void slot_selectRecEvent();
    private:
         QPushButton *addBut, * cancelBut;

         //record event widgets
         QPushButton *recNotesBut,*existingBut,*selectSpBut,*spNotesBut;
         QLabel *recDateLbl, *recTypeLbl,*gridRefLbl,*speciesLbl,*countLbl;
         QDateEdit *recDateTxt;
         QLineEdit *recTypeText,*gridRefTxt,*speciesTxt,*countTxt;
         QCheckBox *useAsCurrent;
         QGroupBox *recEventData;
         QIntValidator *recCountValidator;
};

	

#endif

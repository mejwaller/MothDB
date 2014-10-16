#ifndef COMMONACTIONS_HPP
#define COMMONACTIONS_HPP

#include <QtCore/QObject>
#include <QtGui/QAction>

#include <iostream>

using namespace std;

class QSqlDatabase;
class QModelIndex;
class Record;

class CommonActions: public QObject
{
    Q_OBJECT
    public:
        static CommonActions *instance();
        void setDB(QSqlDatabase *);
        virtual ~CommonActions();
        bool doCommit(const Record &);

        QAction *getAddRecordAct() const{return addRecordAct;}
        QAction *getAddRecEventAct() const {return addRecEventAct;}
        QAction *getAddTaxonRecAct() const {return addTaxonRecAct;}
        QAction *getEditRecordAct() const{return editRecordAct;}
        QAction *getDeleteRecordAct() const{return deleteRecordAct;}
        QAction *getDeleteRecEventAct() const{return deleteRecEventAct;}
        QAction *getDeleteTaxonRecAct() const{return deleteTaxonRecAct;}
        QAction *getRunQueryAct() const{return runQueryAct;}
        QAction *getChartQueryAct() const{return chartQueryAct;}
       
    public slots:
        void slot_addRecord();
        void slot_addRecEvent();
        void slot_addTaxonRec();
        void slot_editRecord();
        void slot_deleteRecord();
        void slot_deleteRecEvent();
        void slot_deleteTaxonRec();
        void slot_runQuery();
        void slot_chartQuery();   
        void slot_tableSelected(const QModelIndex &);
    signals:
        void tableItemSelected(const QString &tableName);

    private:
        QAction *addRecordAct,*addRecEventAct,*addTaxonRecAct,*editRecordAct,*runQueryAct,*chartQueryAct,
        		*deleteRecordAct,*deleteRecEventAct,*deleteTaxonRecAct;
        static CommonActions *singleton;
        QSqlDatabase *db;
       
        CommonActions();
};

#endif//COMMONACTIONS_HPP

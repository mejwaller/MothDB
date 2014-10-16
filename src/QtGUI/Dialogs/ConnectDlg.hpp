#ifndef CONNECTDLG_HPP
#define CONNECTDLG_HPP

#include <QtGui/QDialog>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtSql/QSqlDatabase>

class QSqlDatabase;

class ConnectDlg:public QDialog
{
    Q_OBJECT
    public:
        ConnectDlg ( QWidget * parent = 0, Qt::WindowFlags f = 0 );
        QSqlDatabase getDatabase() const;
    public slots:
        virtual void tryConnect();    
    private:
        QLineEdit *host,*dataBase,*userName,*passWord;
        QPushButton *connectBut,*quitBut;
        QSqlDatabase db;
};


#endif//CONECTDLG_HPP

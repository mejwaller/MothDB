#include <Dialogs/ConnectDlg.hpp>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QApplication>
#include <QtGui/QMessageBox>
#include <QtSql/QSqlError>


#include <iostream>

using namespace std;

ConnectDlg::ConnectDlg( QWidget * parent, Qt::WindowFlags f)
:QDialog(parent,f)
{  

    QLabel *hostLabel = new QLabel(tr("Hostname:"));
    host = new QLineEdit("localhost");
    QHBoxLayout *hostLayout = new QHBoxLayout();
    hostLayout->addWidget(hostLabel);
    hostLayout->addWidget(host);
    
    QLabel *dbLabel = new QLabel(tr("DataBase:"));
    dataBase = new QLineEdit("mothrecs");
    QHBoxLayout *dbLayout = new QHBoxLayout();
    dbLayout->addWidget(dbLabel);
    dbLayout->addWidget(dataBase);
    
    QLabel *unameLabel = new QLabel(tr("User name:"));
    userName = new QLineEdit("martin");
    QHBoxLayout *unameLayout = new QHBoxLayout();
    unameLayout->addWidget(unameLabel);
    unameLayout->addWidget(userName);
    
    QLabel *passwdLabel = new QLabel(tr("Password:"));
    passWord = new QLineEdit();
    passWord->setEchoMode(QLineEdit::Password);
    QHBoxLayout *passwdLayout = new QHBoxLayout();
    passwdLayout->addWidget(passwdLabel);
    passwdLayout->addWidget(passWord);   
    
    connectBut = new QPushButton("Connect");
    connect(connectBut,SIGNAL(clicked()),this,SLOT(tryConnect()));
    quitBut = new QPushButton("Quit");
    connect(quitBut,SIGNAL(clicked()),this,SLOT(reject()));
    QHBoxLayout *butLayout = new QHBoxLayout();
    butLayout->addWidget(connectBut);
    butLayout->addWidget(quitBut);

    QVBoxLayout *vLayout = new QVBoxLayout(this);    
    vLayout->addLayout(hostLayout);
    vLayout->addLayout(dbLayout);
    vLayout->addLayout(unameLayout);
    vLayout->addLayout(passwdLayout);    
    vLayout->addLayout(butLayout);

    if (QSqlDatabase::drivers().isEmpty())
        QMessageBox::information(this, tr("No database drivers found"),
                                 tr("This demo requires at least one Qt database driver. "
                                    "Please check the documentation how to build the "
                                    "Qt SQL plugins."));
    
}

void ConnectDlg::tryConnect()
{
    
    cout << "adding database" << endl;
    db = QSqlDatabase::addDatabase("QMYSQL");
    cout << "Setting hostname" << endl;
    db.setHostName(host->text());
    db.setDatabaseName(dataBase->text());
    db.setUserName(userName->text());
    db.setPassword(passWord->text());
    if(!db.open())
    {
        if(QMessageBox::critical(this,"Connection Error:",db.lastError().text(),QMessageBox::Retry,QMessageBox::Abort) == QMessageBox::Retry)
        {
            show();
        }
        else
        {
            reject();
            return;
        }
    }
    else
    {
        accept();
    }
}

QSqlDatabase ConnectDlg::getDatabase() const
{
    return db;
}

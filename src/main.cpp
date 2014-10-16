#include <QtGui/qapplication.h>
#include <QtGui/qstatusbar.h>

#include <MainWin.hpp>

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    MainWin mainWin;
    
    cout << "MothDB" << endl;   

    if(mainWin.init() != 0)
    {
        app.exit();
    }
    else
    {    
        mainWin.showWidgets();
        mainWin.show(); 
        return app.exec();
    }
}



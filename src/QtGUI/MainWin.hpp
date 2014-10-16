#ifndef MAINWIN_HPP
#define MAINWIN_HPP

#include <QtGui/QMainWindow>
#include <QtSql/QSqlDatabase>

class QSqlDatabase;
class QSplitter;
class QTreeView;
class QTabWidget;
class QMenu;
class QAction;

class MainWin : public QMainWindow
{
   Q_OBJECT

    public:
        MainWin();
        int init();
        void showWidgets();
        virtual ~MainWin();    
    private:
        void createActions();
        void createMenus();

        QSqlDatabase db;
        QSplitter *splitter;
        QTreeView *tablesView;
        QTabWidget *viewsAndQueries;        

        QMenu *fileMenu;
        QMenu *queryMenu;

        QAction *exitAct;
};
 
#endif//MAINWIN_HPP

#include <TableListModel.hpp>
#include <TreeViewItems/TreeViewItem.hpp>
#include <iostream>

using namespace std;

TableListModel::TableListModel(QObject *parent,const QStringList& tables):QAbstractItemModel(parent),header("Tables"),tableList(tables)
{
    cout << "Tables are " << endl;
    QStringList::const_iterator cit;
    for (cit = tableList.constBegin(); cit != tableList.constEnd(); ++cit)
    {
        cout << (*cit).toLocal8Bit().constData() << endl;
        
    }
}

TableListModel::~TableListModel()
{
}

QVariant TableListModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role == Qt::DisplayRole)
    {
        cout << "HEADERDATA: Header data being returned" << endl;
        return header;
    }
    return QVariant();
}

QModelIndex TableListModel::index(int row,int column,const QModelIndex &parent) const
{
    cout << "INDEX: Starting index() - row = " << row << " column = " << column << endl;
    const QString *data;
    if(row > (tableList.size()-1))//just a list view really with a header - so only 1 column
    {                                                         //and tableList.size() rows
        cout << "INDEX:returning invalid model index" << endl;
        return QModelIndex();
    }
    
    cout << "INDEX:returning table data:" << endl;
    //cout << tableList.at(row).toLocal8Bit().constData() << endl;
    data = &(tableList.at(row));    
    cout << (*data).toLocal8Bit().constData() << endl;

    cout << "INDEX:NOW doign createIndex()..." << endl;
    //yuck - creatIndex takes a (non-const) void * so have to use nasty cast.
    return createIndex(row,column,const_cast<QString *>(data));
}

int TableListModel::rowCount(const QModelIndex &parent) const
{
    cout << "ROWCOUNT: row " << parent.row() << " col " << parent.column() << endl;
    if(!parent.isValid())//'root' item - return row count (no. of tables...)
    {
         cout << "ROWCOUNT:  " << tableList.size() << endl;
         return tableList.size();
    }
    cout << "ROWCOUNT: retunring 0" << endl;
    return 0;//no children of anyhtingthats not the root item
}

int TableListModel::columnCount(const QModelIndex &parent) const 
{
    return 1;
}

QVariant TableListModel::data(const QModelIndex &index, int role) const 
{
    cout << "DATA: In data():" << endl;
    cout << "DATA: (with column = " << index.column() << " and row = " << index.row() <<")" << endl;
    if(!index.isValid() || index.row() > tableList.size()-1)
    {
        cout << "DATA: returning invalid index from data()" << endl;
        return QVariant();
    }
    else
    {
        cout  << "DATA: retunring table data from data():" << endl;
        cout << tableList.at(index.row()).toLocal8Bit().constData() << endl;
        //return QString("test");
        return QVariant(tableList.at(index.row())/*.toLocal8Bit().constData()*/);
    }
}

QModelIndex TableListModel::parent(const QModelIndex &index) const 
{
    return QModelIndex();//parent always root item
}

Qt::ItemFlags TableListModel::flags(const QModelIndex &index) const
 {
     if (!index.isValid())
         return Qt::ItemIsEnabled;

     return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
 }

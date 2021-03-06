#include <TablesView/TableListModel.hpp>
#include <TreeViewItems/TreeViewItem.hpp>
#include <iostream>

using namespace std;

TableListModel::TableListModel(QObject *parent,const QStringList& tables):QAbstractItemModel(parent),tableList(tables)
{
    QList<QVariant> rootData;
    rootData << "Tables";
    rootItem = new TreeViewItem(rootData);
    setupModelData(rootItem);
}

void TableListModel::setupModelData(TreeViewItem *parent)
{
    QList<TreeViewItem *> parents;

    parents << parent;//push the rootitem into the list of parents as thefirst parent


    int number = 0;

    //iterate over each line in the tables list
    while (number < tableList.count()) 
    {
        QList<QVariant> columnData;
        columnData << tableList[number];//get name of table from current line in stringlist

        // Append a new item to the current parent's (the column header or root item here) list of children.
        parents.last()->appendChild(new TreeViewItem(columnData, parents.last()));        

        number++;
    }

}

TableListModel::~TableListModel()
{
}

QVariant TableListModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role == Qt::DisplayRole)
    {
        return rootItem->data(section);
    }
    return QVariant();
}

QModelIndex TableListModel::index(int row,int column,const QModelIndex &parent) const
{
    TreeViewItem *parentItem;

    if(!parent.isValid())
    {
        parentItem = rootItem;
    }
    else
    {
        parentItem = static_cast<TreeViewItem *>(parent.internalPointer());
    }

    TreeViewItem *childItem = parentItem->child(row);

    if(childItem)
    {
        return createIndex(row,column,childItem);
    }
    else
    {
        return QModelIndex();
    }
}

int TableListModel::rowCount(const QModelIndex &parent) const
{
    TreeViewItem *parentItem;
    if(!parent.isValid())
    {
        parentItem = rootItem;
    }
    else
    {
        parentItem = static_cast<TreeViewItem *>(parent.internalPointer());
    }
    
    return parentItem->childCount();

}

int TableListModel::columnCount(const QModelIndex &parent) const 
{
    if(parent.isValid())
    {
       return static_cast<TreeViewItem *>(parent.internalPointer())->columnCount();
    }
    else
    {
        return rootItem->columnCount();
    }    
}

QVariant TableListModel::data(const QModelIndex &index, int role) const 
{

    if(!index.isValid() || role != Qt::DisplayRole)
    { 
        return QVariant();
    }

    TreeViewItem *item = static_cast<TreeViewItem *>(index.internalPointer());

    return item->data(index.column());
}

QModelIndex TableListModel::parent(const QModelIndex &index) const 
{
    if(!index.isValid())
    {
        return QModelIndex();
    }

    TreeViewItem *childItem = static_cast<TreeViewItem *>(index.internalPointer());
    TreeViewItem *parentItem = childItem->parent();

    if(parentItem == rootItem)
    {
        return QModelIndex();
    }
    
    return createIndex(parentItem->row(),0,parentItem);

}

Qt::ItemFlags TableListModel::flags(const QModelIndex &index) const
 {
     if (!index.isValid())
         return Qt::ItemIsEnabled;

     return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
 }

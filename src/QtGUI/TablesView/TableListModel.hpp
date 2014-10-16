#ifndef TABLELISTMODEL_HPP
#define TABLELISTMODEL_HPP

#include <QtCore/QAbstractItemModel>
#include <QtCore/QVariant>
#include <QtCore/QStringList>

class TreeViewItem;

class TableListModel : public QAbstractItemModel
{
    Q_OBJECT
    
    public:
        TableListModel(QObject *parent,const QStringList &tables);
        ~TableListModel();

        virtual QVariant headerData(int section, Qt::Orientation orientation,int role = Qt::DisplayRole) const;
        //pure virtual functions that must be overridden:
        virtual QModelIndex index(int row,int colum,const QModelIndex &parent = QModelIndex()) const; 
        virtual QModelIndex parent(const QModelIndex &index) const;
        virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
        virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
        virtual QVariant data(const QModelIndex &index, int role) const;
        Qt::ItemFlags flags(const QModelIndex &index) const;
    private:
       TreeViewItem *rootItem;
       const QStringList tableList;

        void setupModelData(TreeViewItem *parent);

};

#endif//TABLELISTMODEL_HPP

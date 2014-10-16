#ifndef TREEVIEWITEM_HPP
#define TREEVIEWITEM_HPP

#include <QtCore/QList>
#include <QtCore/QVariant>

class TreeViewItem
{
    public:
        TreeViewItem(const QList<QVariant> &data, TreeViewItem *parent = 0);
        ~TreeViewItem();
        void appendChild(TreeViewItem *child);
        TreeViewItem *child(int row);
        int childCount() const;
        int columnCount() const;
        QVariant data(int column) const;
        int row() const;
        TreeViewItem *parent();
    private:
        QList<TreeViewItem *> childItems;
        QList<QVariant> itemData;
        TreeViewItem *parentItem;
};
        
#endif

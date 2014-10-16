#include <QtCore/QStringList>

#include <TreeViewItems/TreeViewItem.hpp>

TreeViewItem::TreeViewItem(const QList<QVariant> &data, TreeViewItem *parent)
{
    parentItem = parent;
    itemData = data;
}

TreeViewItem::~TreeViewItem()
{
    qDeleteAll(childItems);
}

void TreeViewItem::appendChild(TreeViewItem *item)
{
    childItems.append(item);
}

TreeViewItem *TreeViewItem::child(int row)
{
    return childItems.value(row);
}

int TreeViewItem::childCount() const
{
    return childItems.count();
}

int TreeViewItem::columnCount() const
{
    return itemData.count();
}

QVariant TreeViewItem::data(int column) const
{
    return itemData.value(column);
}

TreeViewItem *TreeViewItem::parent()
{
    return parentItem;
}

int TreeViewItem::row() const
{
    if (parentItem)
        return parentItem->childItems.indexOf(const_cast<TreeViewItem*>(this));

    return 0;
}

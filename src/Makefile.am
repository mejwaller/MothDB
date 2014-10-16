SUBDIRS = QtGUI
bin_PROGRAMS = MothDB
MothDB_SOURCES = main.cpp
MothDB_LDADD = QtGUI/libGUI.a \
    QtGUI/Dialogs/libDialogs.a \
    QtGUI/TablesView/libTablesView.a \
    QtGUI/TreeViewItems/libTreeViewItems.a \
    QtGUI/QueriesSheet/libQueriesSheet.a \
    QtGUI/TableDataView/libTableDataView.a \
    QtGUI/CommonActions/libCommonActions.a \
    QtGUI/QueryRunner/libQueryRunner.a \
    /usr/local/qt/lib/libQtCore.so \
    /usr/local/qt/lib/libQtGui.so \
    /usr/local/qt/lib/libQtSql.so
INCLUDES = -I/usr/local/qt/include

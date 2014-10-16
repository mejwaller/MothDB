#include <QueryRunner/QueryRunner.hpp>

#include<QtSql/QSqlDatabase>

QueryRunner *QueryRunner::singleton = 0;

QueryRunner *QueryRunner::instance()
{
    if(!singleton)
    {
       singleton = new QueryRunner();
    }
    
    return singleton;
}

QueryRunner::QueryRunner()
{
}

QueryRunner::~QueryRunner()
{
    delete singleton;
}

QSqlQuery QueryRunner::runQuery(QSqlDatabase &db,const QString &query)
{
    lastQuery = db.exec(query);
    return lastQuery;
}

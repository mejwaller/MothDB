#ifndef QUERYRUNNER_HPP
#define QUERYRUNNER_HPP

#include <QtSql/QSqlQuery>

class QSqlDatabase; 

class QueryRunner
{
    public:
        static QueryRunner *instance();
        ~QueryRunner();
       QSqlQuery runQuery(QSqlDatabase &,const QString &);
    private:
        static QueryRunner *singleton;
        QSqlQuery lastQuery;
        
        QueryRunner();
};

#endif//QUERYRUNNER_HPP

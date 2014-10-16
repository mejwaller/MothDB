#ifndef RECORD_HPP
#define RECORD_HPP

#include <string>

class Record
{
	public:
		Record():query(""),table(""){}
		Record(std::string theTable):table(theTable){}

		virtual const std::string getQuery() const
		{
			return query;
		}


	protected:
		//every record must be able to build it's query
		virtual void buildQuery() = 0;
		//the query to build
		std::string query;
		//every record muts have a table to query...
		std::string table;

};


#endif//RECORD_HPP

#include <EventRecord.hpp>

using namespace std;

EventRecord::EventRecord(string const &date,string const &type,string const &notes,string const &gridRef)
:Record("record_event"),date_(date),type_(type),notes_(notes),gridRef_(gridRef)
{
	buildQuery();
}

void EventRecord::buildQuery()
{
	query = "INSERT into ";
	query += table + " ";
	query += "(record_date, record_type, grid_ref, notes) ";
	query += "VALUES ('" + date_ + "', '" +  type_ + "', '" + gridRef_ + "', '" + notes_ + "')";
}


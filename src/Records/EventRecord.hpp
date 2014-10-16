#ifndef EVENTRECORD_HPP
#define EVENTRECORD_HPP

#include <Record.hpp>
#include <string>

class EventRecord:public Record
{

	public:
		EventRecord(std::string const &date, std::string const &type, std::string const &notes, std::string const & grid_ref);

	protected:
		void buildQuery();

    //change to PIMPL
	private:
		std::string date_;
		std::string type_;
		std::string notes_;
		std::string gridRef_;	

};


#endif//EVENTRECORD_HPP

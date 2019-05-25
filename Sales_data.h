/**=================================================================================================
 * @file	C:\Users\lenovo\Desktop\VisualStudio2012\7\Sales_data.h.
 *
 * Declares the sales data class
 *===============================================================================================**/

#ifndef SALES_DATA_H
#define SALES_DATA_H

//#include "Version_test.h"

#include <string>
#include <iostream>

class Sales_data {
	friend std::ostream& print(std::ostream&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);

public:
	
#if defined(IN_CLASS_INITS) && defined(DEFAULT_FCNS)
	Sales_data() = default;
#else
	Sales_data() : units_sold(0), revenue(0.0) { }
#endif
#ifdef IN_CLASS_INITS
	Sales_data(const std::string& s) : bookNo(s) { }
#else
	Sales_data(const std::string& s) :
		bookNo(s), units_sold(0), revenue(0.0) { }
#endif
	Sales_data(const std::string& s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p* n) { }
	Sales_data(std::istream&);

	// operations on Sales_data objects
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
//private:
	std::string bookNo;
#ifdef IN_CLASS_INITS   // using the synthesized version is safe only
	unsigned units_sold = 0;
	double revenue = 0.0;
#else
	unsigned units_sold;
	double revenue;
#endif
};

double Sales_data::avg_price() const {
	return this->revenue / this->units_sold;
}

std::ostream& print(std::ostream& out, const Sales_data& book) {
	out << book.bookNo <<" "<< book.units_sold <<" "<< book.revenue;
	out <<"\n" ;
	return out;
}
std::istream& read(std::istream& in, Sales_data& book) {
	in >> book.bookNo >>book.units_sold >> book.revenue;

	return in;
}

inline
bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs)
{
	return lhs.isbn() < rhs.isbn();
}
#endif



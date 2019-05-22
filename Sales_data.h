#pragma once
#include "Version_test.h"
#include <iostream>
#include <string>
using namespace std;
//struct Sales_data {
//	std::string bookNo;  //书籍编号
//	unsigned units_sold = 0;  //数量
//	double revenue = 0.0;
//	unsigned units_sold; //总价
//	double revenue;
//};



//chapter7更新后
//class Sales_data {
//private:
//	string bookNo;
//	unsigned units_sold = 0;
//	double sellingprice = 0.0;
//	double saleprice = 0.0;
//	double discount = 0.0;
//public:
//	string isbn() const { return bookNo; }
//
//	Sales_data& combine(const Sales_data& rhs) {
//		units_sold += rhs.units_sold;
//		saleprice = (rhs.saleprice *rhs.units_sold + saleprice *units_sold) / (rhs.units_sold + units_sold);
//		if ((sellingprice) != 0)
//		discount = saleprice / sellingprice;
//		return *this;
//	}
//}







//Sales_data total;
//if (read(cin, total)) {
//	Sales_data trans；
//		while (read(cin, trans)) {
//			if (total.isbn() == trans.isbn())
//				total.combine(trans);
//			else {
//				print(cout, total) << endl；
//					total = trans;
//			}
//		}
//	print(cout, total) endl;
//}
//else {
//	cerr << "No data ? !"<<endl；
//}

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include "Version_test.h"

#include <string>
#include <iostream>

class Sales_data {
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);
public:
// constructors
// using the synthesized version is safe only
// if we can also use in-class initializers
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
private:
	std::string bookNo;
#ifdef IN_CLASS_INITS   // using the synthesized version is safe only
	unsigned units_sold = 0;
	double revenue = 0.0;
#else
	unsigned units_sold;
	double revenue;
#endif
};


// nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

// used in future chapters
inline
bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs)
{
	return lhs.isbn() < rhs.isbn();
}
#endif
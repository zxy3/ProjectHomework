#pragma once
#include "Version_test.h"
#include <iostream>
#include <string>
using namespace std;
struct Sales_data {
	//chapter7新成员
	string isbn() const {  //isbn()函数定义在了类内部  const的作用是：修改隐式 this 指针的类型，表示this是一个指向和常量的指针
		return bookNo;//用于返回Sales_data 对象的 bookNo 数据成员
	}
	Sales_data& combine(const Sales_data&);//combine 和avg_price()函数定义在了类外部
	double avg_price() const;
	//chapter2成员
	std::string bookNo;  //书籍编号
	unsigned units_sold = 0;  //数量
	double revenue = 0.0;
	unsigned units_sold; //总价
	double revenue;
};
//Sales_data 的非成员接口函数
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
// 输入的交易信息包括 ISBN 、 售出总数和售出价格
//print 函数则负责将给定对象的内容打印到给定的流中
ostream& Sprint(ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}
//read 函数从给定流中将数据读到给定的对象里
istream& read(istream& is, Sales_data& item) {
	double price = 0;
		is >> item.bookNo >> item.units_sold >> price;
		item.revenue = price* item.units_sold;
		return is;
}











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

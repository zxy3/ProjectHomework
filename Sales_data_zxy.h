#pragma once
#include "Version_test.h"
#include <iostream>
#include <string>
using namespace std;
struct Sales_data {
	//chapter7�³�Ա
	string isbn() const {  //isbn()���������������ڲ�  const�������ǣ��޸���ʽ this ָ������ͣ���ʾthis��һ��ָ��ͳ�����ָ��
		return bookNo;//���ڷ���Sales_data ����� bookNo ���ݳ�Ա
	}
	Sales_data& combine(const Sales_data&);//combine ��avg_price()���������������ⲿ
	double avg_price() const;
	//chapter2��Ա
	std::string bookNo;  //�鼮���
	unsigned units_sold = 0;  //����
	double revenue = 0.0;
	unsigned units_sold; //�ܼ�
	double revenue;
};
//Sales_data �ķǳ�Ա�ӿں���
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
// ����Ľ�����Ϣ���� ISBN �� �۳��������۳��۸�
//print �������𽫸�����������ݴ�ӡ������������
ostream& Sprint(ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}
//read �����Ӹ������н����ݶ��������Ķ�����
istream& read(istream& is, Sales_data& item) {
	double price = 0;
		is >> item.bookNo >> item.units_sold >> price;
		item.revenue = price* item.units_sold;
		return is;
}











//chapter7���º�
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
//	Sales_data trans��
//		while (read(cin, trans)) {
//			if (total.isbn() == trans.isbn())
//				total.combine(trans);
//			else {
//				print(cout, total) << endl��
//					total = trans;
//			}
//		}
//	print(cout, total) endl;
//}
//else {
//	cerr << "No data ? !"<<endl��

/**=================================================================================================
 * @file	test7.3.cpp.
 *
 * Implements the test 7.3 class
 * 练习 7.3: 修改 7.1.1 节（ 第 229 页） 的交易处理程序， 令其使用这些成员。
 *===============================================================================================**/
#include <iostream>
#include "Sales_data.h"
using namespace std;
struct Sales_data {
	Sales_data();
	string bookNo;
	unsigned units_sold;
	double revenue;
};
Sales_data::Sales_data()
{
	units_sold = 0;
	revenue = 0.0;
}
int main() {
	cout << "请输入书籍信息：" << " ";
	Sales_data total;
	if (cin >> total.bookNo>>total.units_sold>>total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo>>trans.units_sold>>trans.revenue) {
			if (total.bookNo() == trans.bookNo())
				total.combine(trans);
			else {
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else {
		cerr << "No data?!" << endl;
			return -1;
	}
	return 0;
}
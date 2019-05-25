/**=================================================================================================
 * @file	test7.3.cpp.
 *
 * Implements the test 7.3 class
 * ��ϰ 7.3: �޸� 7.1.1 �ڣ� �� 229 ҳ�� �Ľ��״������ ����ʹ����Щ��Ա��
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
	cout << "�������鼮��Ϣ��" << " ";
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
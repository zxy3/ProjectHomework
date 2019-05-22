/**=================================================================================================
 * @file	test7.3.cpp.
 *
 * Implements the test 7.3 class
 * 练习 7.3: 修改 7.1.1 节（ 第 229 页） 的交易处理程序， 令其使用这些成员。
 *===============================================================================================**/
#include <iostream>
#include "Sales_data.h"
using namespace std;
int main() {
	cout << "请输入书籍信息：" << " ";
	Sales_data total;
	if (cin >> total) {
		Sales_data trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn())
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
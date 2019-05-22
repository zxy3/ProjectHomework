/**=================================================================================================
 * @file	test7.1.cpp.
 *
 * Implements the test 7.1 class
 * 练习 7.1: 使用 2.6.1 节练习定义的 Sales_data 类为 1.6 节 （ 第 21 页） 的交易处理程序编写一个新版本。
 *===============================================================================================**/
#include <iostream>
#include "Sales_data.h"
using namespace std;
int main() {
	cout << "请输入交易记录：" << " ";
	Sales_data total;
	if (cin >> total) {
		Sales_data trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
			}
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
/**=================================================================================================
 * @file	test3.1.cpp.
 *
 * Implements the test 3.1 class
 * 练习 3.1: 使用恰当的 using 声明重做 1.4.1 节（ 第 11 页） 和 2.6.2 节（ 第 67 页） 的练习。
 *
 *===============================================================================================**/
#include<iostream>
#include "Sales_data.h"；
using namespace std;
int main() {
	//练习1.9  输出50到100的和
	int v1 = 50;
	int sum = 0;
	while (v1 < 101) {
		sum += v1;
		++v1;
		//cout << sum<<endl;
	}
	cout << sum << endl;
	//练习1.10 打印1 - 10之间的整数
	 int v1 = 10;
		while (v1 >= 0) {
			cout << v1 << endl;
			--v1;
		}
	//练习1.11 输出任意2个数字中间的所有整数
		int  v1, v2;
		cout << "先输入2个数字";
		cin >> v1;
		cin >> v2;
		if (v1 < v2) {
			while (v1 <= v2) {
				cout << v1 << endl;
				++v1;
			}
		}
		else
			while (v2 <= v1) {
				cout << v2 << endl;
				++v2;
			}
		//练习 2.41:
		//初始化2个书籍
		Sales_data book1, book2;
		double price = 0;
		//输入1号书籍的编号，数量，单价，计算销售总价
		cin >> book1.bookNo >> book1.units_sold >> price;
		book1.revenue = book1.units_sold * price;
		//输入2号书籍的编号，数量，单价，计算销售总价
		cin >> book2.bookNo >> book2.units_sold >> price;
		book2.revenue = book2.units_sold * price;
		//如果2个书籍的编号一致，实现加法，否则报错
		if (book1.bookNo == book2.bookNo) {
			unsigned sumSold = book1.units_sold + book2.units_sold;
			double totalRevenue = book1.revenue + book2.revenue;

			cout << book1.bookNo << "--" << sumSold
				<< "--" << totalRevenue << " ";
			if (sumSold != 0)
				cout << totalRevenue / sumSold << endl;
			else
				cout << "无效数据：没有售出记录" << endl;
			return 0;
		}
		else {
			cerr << "无效数据" << endl;
			return -1;
		}
}
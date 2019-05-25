/**=================================================================================================
 * @file	test7.1.cpp.
 *
 * Implements the test 7.1 class
 * 练习 7.1: 使用 2.6.1 节练习定义的 Sales_data 类为 1.6 节 （ 第 21 页） 的交易处理程序编写一个新版本。
 * 
 * C++中的 struct 和 class 基本是通用的，唯有几个细节不同：
 * 1:使用 class 时，类中的成员默认都是 private 属性的；而使用 struct 时，结构体中的成员默认都是 public 属性的。
 * 2:class 继承默认是 private 继承，而 struct 继承默认是 public 继承。  
 * 3:class 可以使用模板，而 struct 不能。
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
#include"Sales_data.h"
using namespace std;

int main(int argc, char** argv)
{
	Sales_data total;
	//分别是 bookNo ( 书籍编号）、 units_sold	(销售量）、revenue(销售收入）、trans（销售记录）
	cout<<"请输入交易记录( ISBN、销售量、销售收入 )："<<endl;
	if (read(cin, total)) {
		Sales_data trans;
		while (read(cin, trans)) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;//书刊号相同，销售量相加
				total.revenue += trans.revenue;//书刊号相同，销售收入相加
				print(cout, total);
			}
			else {
				cout << "书刊号不同" << " ";
				print(cout, trans);//书刊号不同重置信息
				total = trans;
			}
			cout << "输入下一个记录： " << endl;
		}
	}
	else {
		std::cerr << "No data?!" << std::endl;//结束输入
		return -1;
	}
	return 0;
}
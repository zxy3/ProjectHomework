/**=================================================================================================
 * @file	test6.5.cpp.
 *
 * Implements the test 6.5 class
 * 练习 6.5: 编写一个函数输出其实参的绝对值。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int getAbsolutevalue(int i) {
	int index = i;
	if (index < 0) {
		return -index;
	}
	else {
		return index;
	}
}
int  main() {
	int i;
	cout << "输入任意整数：" << " ";
	cin >> i;
	cout << i << "的绝对值是：" << " " << getAbsolutevalue(i) << endl;
}
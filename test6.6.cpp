/**=================================================================================================
 * @file	test6.6.cpp.
 *
 * Implements the test 6.6 class
 * 练习 6.6: 说明形参、 局部变量以及局部静态变量的区别。 编写一个函数， 同时用到这三种形式。
 *  
 *  
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int getAbsolutevalue(int i) {//形参
	int index = i;//局部变量
	//局部静态变量
	static int j = index;
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
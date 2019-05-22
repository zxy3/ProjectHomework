/**=================================================================================================
 * @file	test6.55.cpp.
 *
 * Implements the test 6.55 class
 * 练习 6.55: 编写 4 个函数， 分别对两个 int 值执行加、 减、 乘、 除运算； 在上一题创建的 vector 对象中保存这些值的指针。
 *===============================================================================================**/
#include <iostream>
#include <vector>
using namespace std;
//加法
int func1(int a, int b) {
	return a + b;
}
int func2(int a, int b) {
	return a - b;
}
int func3(int a, int b) {
	return a + b;
}
int func4(int a, int b) {
	return a / b;
}
int main() {
	decltype(func1)* p1 = func1, * p2 = func2, * p3 = func3, * p4 = func4;//4个指向函数的指针
	vector<decltype(func1)* > vF = { p1, p2, p3, p4 };//用vector对象集合保存
	return 0;
}

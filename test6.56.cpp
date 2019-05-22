/**=================================================================================================
 * @file	test6.56.cpp.
 *
 * Implements the test 6.56 class
 * 练习 6.56： 调用上述 vector 对象中的每个元素并输出其结果。
 * 这题很重要，要多次理解，指向函数的指针。
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
void Compute(int a, int b, int (*p)(int, int)) {
	cout << p(a, b) << endl;//把a,b传递给P指针指向的函数
}
int main() {
	int i = 5, j = 10;
	decltype(func1)* p1 = func1, * p2 = func2, * p3 = func3, * p4 = func4;//4个指向函数的指针
	vector<decltype(func1)* > vF = { p1, p2, p3, p4 };//用vector对象集合保存
	for (auto p : vF) {  // 遍历 vector 中的每个元素， 依次调用四则运算函数
		Compute(i, j, p);
	}
	return 0;
}

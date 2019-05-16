/**=================================================================================================
 * @file	test3.44.cpp.
 *
 * Implements the test 3.44 class
 * 练习 3.44: 改写上一个练习中的程序， 使用类型別名来代替循环控制变量的类型。
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	//初始化二维数组
	int ia[3][4] = { { 0, 1, 2, 3 },{ 4, 5, 6, 7 },{ 8, 9, 10, 11} };
	using int_array = int[4];
	typedef int int_array[4];
	for (int_array* p = ia; p != ia + 3; ++p) {
		for (int* q = *p; q != *p + 4; ++q) {
			cout << *q << " ";
		}
		cout << endl;
	}
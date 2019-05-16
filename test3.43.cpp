/**=================================================================================================
 * @file	test3.43.cpp.
 *
 * Implements the test 3.43 class
 * 练习 3.43： 编写 3 个不同版本的程序， 令其均能输出 ia 的元素。
 * 版本 1 使用范围 for语句管理迭代过程； 
 * 版本 2 和版本 3 都使用普通的 for 语句， 其中版本 2 要求用下标运算符;
 * 版本 3 要求用指针。 
 * 此外， 在所有 3 个版本的程序中都要直接写出数据类型，而不能使用类型别名、 auto 关键字或 decltype 关键字。
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	//初始化二维数组
	int ia[3][4] = { { 0, 1, 2, 3 },{ 4, 5, 6, 7 },{ 8, 9, 10, 11} };
	//版本 1 使用范围 for语句管理迭代过程；
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}
	//版本 2 ,下标运算
	constexpr size_t rowCnt = 3, colCnt = 4;
	for (size_t i = 0; i != rowCnt; ++i) {
			for (size_t j=0; j != colCnt; ++j) {
				cout << ia[i][j] << " ";
			}
			cout << endl;
	}
	//版本3，指针运算
	//int(*p)[4] = ia;
	//p = &ia[2];
	
}

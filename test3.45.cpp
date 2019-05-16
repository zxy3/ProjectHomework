/**=================================================================================================
 * @file	test3.45.cpp.
 *
 * Implements the test 3.45 class
 * 练习 3.45: 再一次改写程序， 这次使用 auto 关键字。
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int ia[3][4] = { { 0, 1, 2, 3 },{ 4, 5, 6, 7 },{ 8, 9, 10, 11} };
	size_t cnt = 0;
	for (auto& row : ia) {
		for (auto& col : row) {
			cout << col << " ";
		}
		cout << endl;
	}
}
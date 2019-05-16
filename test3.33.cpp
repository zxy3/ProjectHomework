/**=================================================================================================
 * @file	test3.33.cpp.
 *
 * Implements the test 3.33 class
 * 练习 3.33: 对于 104 页的程序来说， 如果不初始化 scores 将发生什么？
 * 初试化10个元素，值为0，不影响
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int main() {
	unsigned scores[11];
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
		cout << grade;
	}
}
/**=================================================================================================
 * @file	test5.23.cpp.
 *
 * Implements the test 5.23 class
 * 练习 5.23： 编写一段程序， 从标准输入读取两个整数， 输出第一个数除以第二个数的结果。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int num1, num2;
	cout << "请输入2个数字" << endl;
	cin >> num1 >> num2;
	cout <<num1<<"/"<<num2 <<"="<<num1 / num2 << endl;
}
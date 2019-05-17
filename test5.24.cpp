/**=================================================================================================
 * @file	test5.24.cpp.
 *
 * Implements the test 5.24 class
 * 练习 5.24: 修改你的程序， 使得当第二个数是 0 时抛出异常。 先不要设定 catch 子句,运行程序并真的为除数输入 0, 看看会发生什么？
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int num1, num2;
	cout << "请输入2个数字" << endl;
	cin >> num1 >> num2;
	if (num2 == 0) {
		cout << "被除数不能为0" << endl;
	}
	cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
}
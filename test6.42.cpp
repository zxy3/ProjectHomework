/**=================================================================================================
 * @file	test6.42.cpp.
 *
 * Implements the test 6.42 class
 * 练习 6.42: 给 make_plural 函数（ 参见 6.3.2 节， 第 201 页） 的第二个形参赋予默认实参's'， 
 * 利用新版本的函数输出单词 success 和 failure 的单数和复数形式。
 *===============================================================================================**/
#include <iostream>
#include <string>
using namespace std;
string make_plural(int ctr, const string& word, const string &ending = "s") {
	return (ctr > 1) ? word + ending : word;
}
int main() {
	cout << "success 的单数形式是:" << make_plural(1, "success", "es") << endl;
	cout << "success的复数形式是： " << make_plural(2, "success", "es") << endl;
	cout << "failure 的单数形式是： "<<make_plural(1, "failure") << endl;
	cout << "failure 的单数形式是：" << make_plural(2, "failure")<< endl;
	return 0;
}
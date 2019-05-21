/**=================================================================================================
 * @file	test6.26.cpp.
 *
 * Implements the test 6.26 class
 * 练习 6.26: 编写一个程序， 使其接受本节所示的选项； 输出传递给 main 函数的实参的内容。
 *===============================================================================================**/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	string str;
	for (int i = 1; i != argc; ++i) {
		cout << "argc[" << i << "]: " << argv[i] << endl;
		str += " ";
	}
	cout << str << endl;
	return 0;
}
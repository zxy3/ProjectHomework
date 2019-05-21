/**=================================================================================================
 * @file	test6.25.cpp.
 *
 * Implements the test 6.25 class
 * 练习 6.25： 编写一个 main 函数， 令其接受两个实参。 把实参的内容连接成一个 string对象并输出出来。
 *===============================================================================================**/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	string str;
	for (int i = 1; i != argc; ++i) {
		str += argv[i];//实参内容连接成一个字符串
		str += " ";
	}
	cout << str << endl;
	return 0;
}
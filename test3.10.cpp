/**=================================================================================================
 * @file	test3.10.cpp.
 *
 * Implements the test 3.10 class
 * 练习 3.10: 编写一段程序， 读入一个包含标点符号的字符串， 将标点符号去除后输出字符串剩余的部分。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string text("hello!! world!!");
	int num = text.size();
	for (int i = 0; i < text.size(); ++i)
	{
		if (!ispunct(text[i])&&!isspace(text[i]))
			cout << text[i];
	}
	return 0;
}
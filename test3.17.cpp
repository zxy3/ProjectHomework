/**=================================================================================================
 * @file	test3.17.cpp.
 *
 * Implements the test 3.17 class
 * 练习 3.17: 从 cin 读入一组词并把它们存入一个 vector 对象， 然后设法把所有词都改写为大写形式。 输出改变后的结果， 每个词占一行。
 * 
 * 字符串的结束输入的符号是什么要问下老师。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> v_string;
	string string_data;
	cout << "先输入一组string对象" << endl;

	while (cin >> string_data)
	{
		v_string.push_back(string_data);
	}
	//将每个对象的每个字符更改为大写，默认不出现空格，标点等，因为这里没有处理异常
	for (auto i : v_string)
		for (auto j : i.length)
		{
			i[j] = toupper(i[j]);
		}
	//输出一个字符串对象，换一行
	for (auto i : v_string) {
		cout << i << "  " << endl;
	}
}
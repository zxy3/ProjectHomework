/**=================================================================================================
 * @file	test3.4.cpp.
 *
 * Implements the test 3.4 class
 * 练习 3.4: 编写一段程序读入两个字符串， 比较其是否相等并输出结果。 如果不相等，输出较大的那个字符串。
 * 改写上述程序， 比较输入的两个字符串是否等长， 如果不等长，输出长度较大的那个字符串。
 * 知识点（书上原话）：
 * 1、如果比较两个不等长的字符串的方式是识别一个不同的字符，哪一个较大，则对应的字符串就大。
 * 2、对大小写敏感。
 * 3、如果两个 string 对象的长度不同， 而且较短 string 对象的每个字符都与较长string 对象对应位置上的字符相同， 
 * 就说较短 string 对象小于较长 string对象。
 *===============================================================================================**/
#include <iostream>
#include <string>
using std::string;
using namespace std;//等于using std::cin;using std::cout; using std::endl;
int main()
{
	string text1,text2;
	cout << "输入2个字符串: "<<endl;
	cin >> text1 >> text2;
	if (text1 != text2)
	{
		cout << "2个字符串中较大的是:" << " " << endl;
		cout << (text1 >= text2 ? text1 : text2) << endl;
		if (text1.size() != text2.size())
		{
			cout << "2个字符串中较长的是:" << " " << endl;
			cout << (text1.size() >= text2.size() ? text1 : text2) << endl;
			return 0;
		}
		else
		{
			cout << "2个字符串等长。" << endl;
			return 0;
		}
	}
	else
	{
		cout << "2个字符串完全相等" << endl;
		return 0;
	}
}
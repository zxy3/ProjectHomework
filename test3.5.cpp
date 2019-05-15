/**=================================================================================================
 * @file	test3.5.cpp.
 *
 * Implements the test 3.5 class
 * 练习 3.5: 编写一段程序从标准输入中读入多个字符串并将它们连接在一起， 输出连接成的大字符串。 
 * 然后修改上述程序， 用空格把输入的多个字符串分隔开来。
 *===============================================================================================**/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string text;
	string linkText;
	string blaSpaceLinkText;
	cout << "输入，连接若干个字符串：" << endl;
	while (getline(cin, text))
	{
		linkText += text;
		blaSpaceLinkText += text + " ";
		cout << "连接后的字符串为：" << endl;
		cout << linkText << endl;
		cout << "加入空格后的字符串为：" << endl;
		cout << blaSpaceLinkText << endl;
	}
	return 0;
}
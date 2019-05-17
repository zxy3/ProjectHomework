/**=================================================================================================
 * @file	test5.10.cpp.
 *
 * Implements the test 5.10 class
 * 练习 5.10: 我们之前实现的统计元音字母的程序存在一个问题： 如果元音字母以大写形式出现， 不会被统计在内。
 *  编写一段程序， 既统计元音字母的小写形式， 也统计大写形式， 也就是说，新程序遇和'A'都应该递增 aCnt 的值， 以此类推。
 *  字符或者字符串，命令行结束输入用什么？
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	char cval;
	int char_a = 0, char_e = 0, char_i = 0, char_o = 0, char_u = 0;
	while (cin >> cval)
	{
		switch (cval)
		{
		case 'a':
		case 'A':
			++char_a;
			break;
		case 'e':
		case 'E':
			++char_e;
			break;
		case 'i':
		case 'I':
			++char_i;
			break;
		case 'o':
		case 'O':
			++char_o;
			break;
		case 'u':
		case 'U':
			++char_u;
			break;
		}
	}

	cout << "a或A：" <<" "<<  char_a << endl;
	cout << "e或E：" <<" "<< char_e << endl;
	cout << "i或I：" << " " << char_i << endl;
	cout << "o或O：" << " " << char_o << endl;
	cout << "u或U：" << " " << char_u << endl;

	return 0;
}
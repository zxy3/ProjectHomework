/**=================================================================================================
 * @file	test5.9.cpp.
 *
 * Implements the test 5.9 class
 * 练习 5.9: 编写一段程序， 使用一系列 if 语句统计从 cin 读入的文本中有多少元音字母。
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;
int main() {
	string word;
	cout << "请输入一个单词：" << " " << endl;
	cin >> word;
	while (cin >> word) {
		if (cin.get() == '\n') 
			break;
	}
	//参考将字符串转换为字符数组的方法
	char a[20];//默认单词为20个字母长度以内
	strncpy_s(a, word.c_str(), word.length() + 1);
	int i = 0;
	int char_a = 0, char_e = 0, char_i = 0, char_o = 0, char_u = 0;
	while (i!=10 ) {
		switch (a[i])
		{
		case 'a':
			++char_a;
			break;
		case 'e' :
			++char_e;
			break;
		case 'i':
			++char_i;
			break;
		case 'o':
			++char_o;
			break;
		case 'u':
			++char_u;
			break;
		}
	}
	cout << "a：" << char_a << endl;
	cout << "e" << char_e << endl;
	cout << "i" << char_i << endl;
	cout << "o" << char_o << endl;
	cout << "u" << char_u << endl;



	return 0;
}
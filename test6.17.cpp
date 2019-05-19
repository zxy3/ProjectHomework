/**=================================================================================================
 * @file	test6.17.cpp.
 *
 * Implements the test 6.17 class
 * 练习 6.17: 编写一个函数， 判断 string 对象中是否含有大写字母。 
 * 编写另一个函数,把 string 对象全都改成小写形式。 在这两个函数中你使用的形参类型相同吗？ 为什么？
 *===============================================================================================**/
#include<iostream>
#include<string>
#include <ctype.h>
using namespace std;
void judgeCap(const string& word) {
	cout << word << endl;
	string::size_type i = word.size();
	while (i > 0) {
		if (islower(word[i])) {
			/*bool index = islower(word[i]);
			cout << index << endl;*/
			--i;
		}
		else {
			cout << "输入单词含有大写字母!" << endl;
			break;
		}
	}
}
string resetLowercase(string& word)//函数的声明及定义，My_string需在函数中修改，所以不能使用常量引用。
{
	for (auto i = 0; i < word.size(); i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			word[i] = word[i] + 32;//大写字母小写字母的ASCII码:a-z:97-122 A-Z:65-90 0-9:48-57
		}
	}
	return word;
}

int main() {
	cout << "请输入单词：" << " ";
	string word;
	cin >> word;
    string& s = word;
	string up = resetLowercase(word);
	cout <<"置换为小写后："<<" "<< up << endl;
	//judgeCap(s);
}
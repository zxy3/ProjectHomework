/**=================================================================================================
 * @file	test3.2.cpp.
 *
 * Implements the test 3.2 class
 * 练习 3.2: 编写一段程序从标准输入中一次读入一整行， 然后修改该程序使其一次读入一个词。
 *===============================================================================================**/
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string line;
	// 每次读入一整行， 直至到达文件末尾
		while (getline(cin, line))//一行的结束由一个换行符识别
			cout << line << endl;
	return 0;
	//一次读取一个词
	string word;
	while (cin >> word)//一个词的结束由一个空格符识别
		cout << word << endl;
	return 0;
}
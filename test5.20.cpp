/**=================================================================================================
 * @file	test5.20.cpp.
 *
 * Implements the test 5.20 class
 * 练习 5.20： 编写一段程序， 从标准输入中读取 string 对象的序列直到连续出现两个相同的单词或者所有单词都读完为止。 
 * 使用 while 循环一次读取一个单词， 当一个单词连续出现两次时使用 break 语句终止循环。 
 * 输出连续重复出现的单词， 或者输出一个消息说明没有任何单词是连续重复出现的。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	string My_string1, My_string2;
	do
	{
		cout << "请输入字符串" << endl;
		cin >> My_string1;
		if (My_string1 == My_string2)//出现连续相同的情况，则输出，退出循环
		{
			cout << My_string1<<"重复2次" << endl;
			break;
		}
		else
			My_string2 = My_string1;
	} while (cin);
}
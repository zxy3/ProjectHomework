/**=================================================================================================
 * @file	test5.21.cpp.
 *
 * Implements the test 5.21 class
 * 练习 5.21： 修改 5.5.1 节（ 第 171 页） 练习题的程序， 使其找到的重复单词必须以大写字母开头。
 *===============================================================================================**/
#include <iostream>    
#include <string>    
#include <vector>    
using namespace std;
void main()
{

	string My_string1, My_string2;
	int flag = 0;//记录是否有重复单词出现  
	cout << "请输入单词："<<" ";
	while (cin >> My_string1)
	{

		if (My_string1[0] > 'Z' || My_string1[0] < 'A')//字符串的第一个字母
		{
			My_string2 = My_string1;
			cout << "请继续输入单词：";  
			continue;
		}
		if (My_string1 == My_string2)
		{
			cout << My_string1 <<"重复2次"<< endl;
			flag = 1;
			break;
		}
		else
			My_string2 = My_string1;
		cout << "请继续输入单词：";
	}
	if (flag == 0)
	{
		cout << "无重复单词出现" << endl;
	}
	system("pause");
}
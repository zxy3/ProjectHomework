/**=================================================================================================
 * @file	test5.19.cpp.
 *
 * Implements the test 5.19 class
 * 练习 5.19： 编写一段程序， 使用 do while 循环重复地执行下述任务： 首先提示用户输入两个 string 对象， 然后挑出较短的那个并输出它。
 *  
 *  跟前面对比字符串的类似
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	do
	{
		string My_string1, My_string2;
		cout << "请输入两个字符串" << endl;
		cin >> My_string1 >> My_string2;
		if (My_string1.size() > My_string2.size())
		{
			cout << My_string2 << endl;
		}
		else
		{
			cout << My_string1 << endl;
		}
	} while (cin);//实际上这个循环会一直执行下去
}
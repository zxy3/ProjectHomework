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
int  main()
{
	string string1, temp;
	string tips;
	do
	{
		cout << "请输入两个字符串" << endl;
		cin >> string1 >> temp;
		if (string1.size() > temp.size())
		{
			cout << "较短的是：" << " " << temp << endl;
		}
		else {
			cout << "较短的是：" << " " << string1 << endl;
		}
		cout << "是否要继续下去: yes or no" << endl;
		cin >> tips;
	} while ( !tips.empty() && tips[0]!='n');//实际上这个循环会一直执行下去

	return 0;
}
/**=================================================================================================
 * @file	test5.14.cpp.
 *
 * Implements the test 5.14 class
 * 练习 5.14： 编写一段程序， 从标准输入中读取若干 string 对象并查找连续重复出现的单词。 
 * 所谓连续重复出现的意思是： 一个单词后面紧跟着这个单词本身。要求记录连续重复出现的最大次数以及对应的单词。 
 * 如果这样的单词存在， 输出重复出现的最大次数;
 * 如果不存在， 输出一条信息说明仟何单词都没有连续出现过。 
 * 例如， 如果输入是how now now now brown cow cow
 * 那么输出应该表明单词 now 连续出现了 3 次。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	string My_string, before_string, max_repeatstring;
	int repeat_number = 0, flag = 0;
	while (cin >> My_string)
	{
		if (My_string == before_string)
		{
			++repeat_number;
		}
		else
		{
			repeat_number = 1;
			before_string = My_string;
		}

		if (flag < repeat_number)
		{
			flag = repeat_number;
			max_repeatstring = before_string;
		}//设置flag,max_repeatstring用来保存当前比较完字符串后的最大重复次数和对应字符串
	}
	if (flag == 1)
	{
		cout << "没有重复的字符串出现" << endl;
	}
	else
	{
		cout << "单词" << max_repeatstring << "出现了" << flag << "次" << endl;
	}
}
/**=================================================================================================
 * @file	test5.14.cpp.
 *
 * Implements the test 5.14 class
 * 练习 5.14： 编写一段程序， 从标准输入中读取若干 string 对象并查找连续重复出现的单词。 
 * 所谓连续重复出现的意思是： 一个单词后面紧跟着这个单词本身。要求记录连续重复出现的最大次数以及对应的单词。 
 * 如果这样的单词存在， 输出重复出现的最大次数;如果不存在， 输出一条信息说明任何单词都没有连续出现过。 
 * 例如， 如果输入是how now now now brown cow cow
 * 那么输出应该表明单词 now 连续出现了 3 次。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string string, temp, maxString;
	int repNum = 0, repMax = 0;
	cout << "请输入若干单词：" << endl;
	while (cin >> string)
	{
		if (string == temp)
		{
			++repNum;
		}
		else
		{
			repNum = 1;
			temp = string;
		}
		if (repMax < repNum)//目前如果2个单词出现次数相同，只能记录第一次出现的单词。
		{
			repMax = repNum;
			maxString = string;
		}
	}
	if (repMax == 1)
	{
		cout << "无重复！" << endl;
	}
	else
	{
		cout << "单词" << maxString << "出现:" <<" "<< repMax << "次" << endl;
	}
	return 0;
}
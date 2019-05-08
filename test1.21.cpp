/**=================================================================================================
 * @file	test1.21.cpp.
 *
 * Implements the test 1.21 class
 * 题目：输入2个isbn相同的书籍，输出他们的和
 * 输入：第一个参数编号相同即可
 *===============================================================================================**/

#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item item1, item2;
	std::cout << "输入2个书籍对象" << std::endl;
	std::cin >> item1 >> item2 ; //输入2个书籍对象
	if (item1.isbn() == item2.isbn()) {//==是数值上的相等
	std::cout << item1 + item2 << std::endl;//输出2个对象相加的结果，此处区别于2个数字相加的结果
	return 0;
	}
	else
	{
	  std::cerr << "Date must be same" << std::endl;
	 	return -1;
	}
}
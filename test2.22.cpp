/**=================================================================================================
 * @file	test2.22.cpp.
 *
 * Implements the test 2.22 class
 * 题目：输出多个具有相同isbn的书籍信息，然后输出
 * 输入：输入多条数据，每条数据第一个参数一致。结束输入：ctrl+z 然后回车，不要同时按
 * 输出：与test2.21相同
 *===============================================================================================**/
#include<iostream>
#include"Sales_item.h"
int  main() {
	Sales_item item;
	std::cout << "输入若干书籍对象" << std::endl;
	while (std::cin>>item)
	{
		std::cout << item << std::endl;
	}
		return 0;
}
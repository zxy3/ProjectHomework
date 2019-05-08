/**=================================================================================================
 * @file	test2.23.cpp.
 *
 * Implements the test 2.23 class
 * 编写多条记录，统计每本书有几条记录,随机输入，条数不限。
 * 思路：假定所有的编号都是已知的
 *===============================================================================================**/
#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item item;
	int a,b,c;
	a = 0;
	b = 0;
	c = 0;
	while (std::cin >> item) {
		if (item.isbn() == "1") {
			a++;
		}
		else if(item.isbn() == "2")
		{
			b++;
		}
		else if (item.isbn() == "3") {
			c++;
		}
	}
	std::cout << "isbn为1的书有： " << a << " 本;"<<std::endl;
	std::cout << "isbn为2的书有： " << b << " 本;" << std::endl;
	std::cout << "isbn为3的书有： " << c << " 本." << std::endl;

}
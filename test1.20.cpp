/**=================================================================================================
 * @file	test1.20.cpp.
 *
 * Implements the test 1.20 class
 * 输入一组销售记录，然后输出.
 * 输入编号，册数，单价。
 * 输出：编号，册数，总价，单价。
 *===============================================================================================**/
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item  item;
	std::cout << "输入一个销售记录" << std::endl;
	std::cin >> item;
	std::cout << item << std::endl;
	return 0;
}
/**=================================================================================================
 * @file	test1.25.cpp.
 *
 * Implements the test 1.25 class
 * 
 *===============================================================================================**/
#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item total;//保存下一条记录的变量
	//读第一条交易记录，确保有数据可以处理
	if (std::cin >> total) {
		Sales_item trans;//保存和的变量
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
			}
			else
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
		
	}
	else {
		std::cerr << "没有输入" << std::endl;
		return -1;
	}
	return 0;
}
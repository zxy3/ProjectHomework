/**=================================================================================================
 * @file	test2.42.cpp.
 *
 * Implements the test 2.42 class
 * 练习 2.42: 根据你自己的理解重写一个 Sales_data.h 头文件， 并以此为基础重做2.6.2 节（ 第 67 页） 的练习。
 *===============================================================================================**/
#pragma once
#include "Version_test.h"
#include <iostream>
#include <string>
struct Sales_data {
	std::string bookNo;  //书籍编号
	unsigned units_sold = 0;  //数量
	double revenue = 0.0;
	unsigned units_sold; //总价
	double revenue;
};
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
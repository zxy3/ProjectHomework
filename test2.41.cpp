/**=================================================================================================
 * @file	test2.41.cpp.
 *
 * Implements the test 2.41 class
 * 练习 2.41: 使用你自己的 Sales_data 类重写 1.5.1 节（ 第 20 页）、 1.5.2 节（ 第 21 页）和 1.6 节（ 第 22 页） 的练习。 
 * 眼下先把 Sales_data 类的定义和 main 函数放在同一个文件里。
 * 新建了Sales_data.h头文件，利用里面的创建的对象，所有的方法在main函数中自己写。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	//初始化2个书籍
	Sales_data book1,book2;
	double price = 0;  
	//输入1号书籍的编号，数量，单价，计算销售总价
	std::cin >> book1.bookNo >> book1.units_sold >> price;
	book1.revenue = book1.units_sold * price;
	//输入2号书籍的编号，数量，单价，计算销售总价
	std::cin >> book2.bookNo >> book2.units_sold >> price;
	book2.revenue = book2.units_sold * price;
	//如果2个书籍的编号一致，实现加法，否则报错
	if (book1.bookNo == book2.bookNo) {
		unsigned sumSold = book1.units_sold + book2.units_sold;
		double totalRevenue = book1.revenue + book2.revenue;

		std::cout << book1.bookNo << "--" << sumSold
			<< "--" << totalRevenue << " ";
		if (sumSold!= 0)
			std::cout << totalRevenue / sumSold << std::endl;
		else
			std::cout << "无效数据：没有售出记录" << std::endl;
		return 0; 
	}
	else {  
		std::cerr << "无效数据"<< std::endl;
		return -1;
	}
}
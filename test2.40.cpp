/**=================================================================================================
 * @file	test3.40.cpp.
 *
 * Implements the test 3.40 class
 * 练习 2.40: 根据自己的理解写出 Sales data 类， 最好与书中的例子有所区别。
 * 先写成员，方法先省略。假如以下是头文件
 *===============================================================================================**/

#include "Version_test.h"
#include <string>
//这是一个Sales_data对象中包含的元素
struct Sales_data {
	std::string bookNo;  //书籍编号
	unsigned units_sold = 0;  //单价
	double revenue = 0.0;  //数量
	unsigned units_sold; //总价
	double revenue;
};
//后面是Sales_data元素可以使用的方法
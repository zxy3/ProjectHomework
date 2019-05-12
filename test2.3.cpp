/**=================================================================================================
 * @file	test2.3.cpp.
 *
 * Implements the test 2.3 class
 * 读程序写结果
 * 30
 * 4294967266
 * 30
 * -30
 * 0
 * 0
 *===============================================================================================**/
#include<iostream>
int main() {
	unsigned u = 10, u2 = 40;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;//无符号数不能小于0，否则结果须视在当前机器上 int 所占位数而定。
	int i = 10, i2 = 40;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

}
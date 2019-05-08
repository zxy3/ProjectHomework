/**=================================================================================================
 * @file	test2.3.cpp.
 *
 * Implements the test 2.3 class
 * ¶Á³ÌÐòÐ´½á¹û
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
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 40;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

}
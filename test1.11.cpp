/**=================================================================================================
 * @file	test1.11.cpp.
 *
 * Implements the test 1.11 class
 * 练习1.11 输出任意2个数字中间的所有整数
 *===============================================================================================**/

#include<iostream>
int main() {
	int  v1, v2;
	std::cout << "先输入2个数字";
	std::cin >> v1;
	std::cin >> v2;
	if (v1 < v2) {
		while (v1 <= v2) {
			std::cout << v1<<std::endl;
			++v1;
		}
	}
	else
		while (v2 <= v1) {
			std::cout << v2 << std::endl;
			++v2;
		}
	return 0;
}
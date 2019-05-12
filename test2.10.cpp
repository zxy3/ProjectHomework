/**=================================================================================================
 * @file	test2.10.cpp.
 *
 * Implements the test 2.10 class
 * 下列变量的初值分别是什么？
 * std::string global_str;
 * int global_int;
 * int main(){
 *		int local_int;
 *		std::string local_str;
 * }
 * int global_int初值为0，其他均无初值,local_int没有初值无法打印
 *===============================================================================================**/
#include<iostream>
std::string  global_str;
int global_int;

int main() {
	int local_int;
	std::string local_str;
	std::cout << global_str << std::endl;
	std::cout << global_int << std::endl;
	//std::cout << local_int << std::endl;
	std::cout << local_str << std::endl;
}
/**=================================================================================================
 * @file	test2.10.cpp.
 *
 * Implements the test 2.10 class
 * ���б����ĳ�ֵ�ֱ���ʲô��
 * std::string global_str;
 * int global_int;
 * int main(){
 *		int local_int;
 *		std::string local_str;
 * }
 * int global_int��ֵΪ0���������޳�ֵ,local_intû�г�ֵ�޷���ӡ
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
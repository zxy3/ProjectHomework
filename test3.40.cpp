/**=================================================================================================
 * @file	test3.40.cpp.
 *
 * Implements the test 3.40 class
 * 练习 3.40： 编写一段程序， 定义两个字符数组并用字符串字面值初始化它们； 接着再定义一个字符数组存放前两个数组连接后的结果。 
 * 使用 strcpy 和 strcat 把前两个数组的内容拷贝到第三个数组中。
 *===============================================================================================**/
#define _CRT_SECURE_NO_WARNINGS  //不加这句话就会报错
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstddef>
using namespace std;

int main()
{
	//定义2个字符串字面值
	const char ca1[] = "Hello World";
	const char ca2[] = "I want an apple";
	char c[200];
	strcpy(c, ca1);
	strcat(c, " ");
	strcat(c, ca2);
	cout << c;
	return 0;
}
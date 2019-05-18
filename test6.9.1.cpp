/**=================================================================================================
 * @file	test6.9.cpp.
 *
 * Implements the test 6.9 class
 * 练习 6.9： 编写你自己的 fact .cc 和 factMain.cc， 这两个文件都应该包含上一小节的练>』 中编写的 
 * Chapter 6 .h 头文件。 通过这些文件， 理解你的编译器是如何支持分离式编译的。
 *===============================================================================================**/
#include<iostream>
#include<string>
#include "Chapters.h"
using namespace std;
int fact(int i) {
	int index = i;
	return index * 2;
}
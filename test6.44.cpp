/**=================================================================================================
 * @file	test6.44.cpp.
 *
 * Implements the test 6.44 class
 * 练习 6.44: 将 6.2.2 节（ 第 189 页） 的 isShorter 函数改写成内联函数。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
inline bool isShorter(const string& si, const string& s2) {
	return si.size() < s2.size();
}
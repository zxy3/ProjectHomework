/**=================================================================================================
 * @file	test4.23.cpp.
 *
 * Implements the test 4.23 class
 * 练习 4.23： 因为运算符的优先级问题， 下面这条表达式无法通过编译。 根据 4.12 节中的表 （ 第 147 页） 指出它的问题在哪里？ 应该如何修改？
 * string s = "word";
 * string p1 = s + s[s.size()-1] =='s' ?"":"s";
 * 
 * 没有与操作数匹配的运算符,加括号，手动修改优先级
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s = "word";
	//string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	return 0;
}
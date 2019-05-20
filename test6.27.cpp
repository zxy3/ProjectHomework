/**=================================================================================================
 * @file	test6.27.cpp.
 *
 * Implements the test 6.27 class
 * 练习 6.27： 编写一个函数， 它的参数是 initializer_list<int>类型的对象， 函数的功能是计算列表中所有元素的和。
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
#include<initializer>
using namespace std;
int he(initializer_list<int> i)
{
	int n = 0;
	for (auto beg = i.begin(); beg != i.end(); ++beg)
	{

		n += (*beg);
	}
	return n;
}
int main()
{
	initializer_list<int>lst{ 1,2,3,4 };
	int sum = he(lst);
	cout& lt; &lt; "The sum is:   "& lt; &lt; sum& lt; &lt; endl;
	cin.get();
	cin.get();
	return 0;
}
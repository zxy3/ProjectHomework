/**=================================================================================================
 * @file	test6.27.cpp.
 *
 * Implements the test 6.27 class
 * 练习 6.27： 编写一个函数， 它的参数是 initializer_list<int>类型的对象， 函数的功能是计算列表中所有元素的和。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int summation(initializer_list<int> i)//依次传入i,形成一个i列表
{
	int sumForList = 0;
	for (auto beg = i.begin(); beg != i.end(); ++beg)
	{
		sumForList += (*beg);
	}
	return sumForList;
}
int main()
{
	initializer_list<int>lst{ 1,2,3,4 };//也可以用户自己输入
	int sum = summation(lst);
	cout << "输入序列为：" << " ";
	for (auto beg = lst.begin(); beg != lst.end(); ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	cout<< "序列和为:   "<<sum<< endl;
	cin.get();
	return 0;
}
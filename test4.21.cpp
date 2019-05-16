/**=================================================================================================
 * @file	test4.21.cpp.
 *
 * Implements the test 4.21 class
 * 练习 4.21: 编写一段程序， 使用条件运算符从 vector<int>中找到哪些元素的值是奇数， 然后将这些奇数值翻倍。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	//初始化vector
	int a[10] = { 0,1,2,3,6,5,4,7,8,9 };
	vector<int> v1(a, a + 10);
	cout << "原始数据:" << endl;
	for (auto i = v1.begin(); i !=v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	cout << "奇数乘以2:" << endl;
	for (auto k = v1.begin(); k != v1.end(); k++)
	{
		if (*k % 2 != 0) {
			cout <<*k<<"->"<< *k*2 << endl;
		}
	}
	return 0;
}
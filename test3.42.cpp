/**=================================================================================================
 * @file	test3.42.cpp.
 *
 * Implements the test 3.42 class
 * 练习 3.42: 编写一段程序， 将含有整数元素的 vector 对象拷贝给一个整型数组。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int a[10];
	int j = 0;
	vector<int> v1(10, 0);//初始化10个Int类型的对象都是0
	for (auto i = v1.begin(); i !=v1.end(); i++)
	{
		a[j] = *i;
		cout << a[j] << " ";
		j++;
	}
	return 0;
}

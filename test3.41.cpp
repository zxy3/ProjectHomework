/**=================================================================================================
 * @file	test3.41.cpp.
 *
 * Implements the test 3.41 class
 * 练习 3.41: 编写一段程序， 用整型数组初始化一个 vector 对象。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int> v1(a, a + 10);
	for (auto i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i <<" ";
	}
	return 0;
}
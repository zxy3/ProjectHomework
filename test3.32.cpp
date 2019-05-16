/**=================================================================================================
 * @file	test3.32.cpp.
 *
 * Implements the test 3.32 class
 * 练习 3.32: 将上一题刚刚创建的数组拷贝给另外一个数组。 利用 vector 重写程序， 实现类似的功能。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int> v1(a, a + 10);
	vector<int> v2 = v1;
	vector<int> v3;
	int b[10];
	for (int i = 0; i < 10; i++)
	{
		b[i] = a[i];//数组复制只能单个值赋值
		cout << b[i] << " ";
		v3.push_back(a[i]);//初始化vector数组
		cout << v3[i] << " " << endl;
	}
	vector<int> v4 = v3;
	for (auto i = v4.begin(); i != v4.end(); i++) {
		cout << *i << " ";
	}
}
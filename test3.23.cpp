/**=================================================================================================
 * @file	test3.23.cpp.
 *
 * Implements the test 3.23 class
 * 练习 3.23: 编写一段程序， 创建一个含有 U) 个整数的 vector 对象， 然后使用迭代器将所有元素的值都变成原来的两倍。
 * 输出 vector 对象的内容， 检验程序是否正确。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> text(10, 5);
	cout << "未修改前，原始数据：" << " " << endl;
	for (auto& i : text) {
		cout << i << " ";
	}
	cout << " " << endl;
	cout << "乘以2倍以后" << endl;
	for (auto it = text.begin(); it != text.end(); it++) 
	{
		*it *= 2;
		cout << *it << " " ;
	}
	cout << " " << endl;
	return 0;
}
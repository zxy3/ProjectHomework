/**=================================================================================================
 * @file	test4.6.cpp.
 *
 * Implements the test 4.6 class
 * 练习 4.6: 写出一条表达式用于确定一个整数是奇数还是偶数。
 *===============================================================================================**/
#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "输入一个整数"<<endl;
	cin >> a;
	if (a % 2)
	{
		cout << a<<" "<<"是奇数";
	}
	else
	{
		cout << a << " " << "是偶数";
	}
}
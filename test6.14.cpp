/**=================================================================================================
 * @file	test6.14.cpp.
 *
 * Implements the test 6.14 class
 * 练习 6.14: 举一个形参应该是引用类型的例子， 再举一个形参不能是引用类型的例子。
 *===============================================================================================**/
//形参可以是引用类型
#include<iostream>
#include<string>
using namespace std;
void exchange(int& i, int& j) {
	int temp;
	temp = i;
	i = j;
	j = temp;
}
int main() {
	int j, i;
	cout << "请输入2个数字：" << endl;
	cin >> j >> i;
	cout << "交换前:" << " " << j << " " << i << endl;
	exchange(i, j);
	cout << "交换后:" << " " << j << " " << i << endl;
}
//形参不可以是引用类型
//暂时没想好，后面想起来再说
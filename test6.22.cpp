/**=================================================================================================
 * @file	test6.22.cpp.
 *
 * Implements the test 6.22 class
 * 练习 6.22: 编写一个函数， 令其交换两个 int 指针。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
void  exchange(int* a, int* b) {
	int* temp;
	temp = a;
	a = b;
	b = temp;
	cout <<"交换后："<<" "<< *a << " " << *b << endl;
}
int main() {
	cout << "请输入2个数字：" << endl;
	int num1, num2;
	cin >> num1 >> num2;
	cout << "交换前：" << " " << num1 << " " << num2 << endl;
	exchange(&num1, &num2);
}
/**=================================================================================================
 * @file	test6.11.cpp.
 *
 * Implements the test 6.11 class
 * 练习 6.11: 编写并验证你自己的 reset 函数， 使其作用于引用类型的参数。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
void exchange(int& i) {
	i = 0;
}
int main() {
	int j = 42;
	exchange(j);
	cout << j << endl;
}
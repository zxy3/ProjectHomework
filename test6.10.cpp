/**=================================================================================================
 * @file	test6.10.cpp.
 *
 * Implements the test 6.10 class
 * 练习 6.10: 编写一个函数， 使用指针形参交换两个整数的值。 在代码中调用该函数并输出交换后的结果， 以此验证函数的正确性。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int change(int& i, int& j) {//实际上只有这一个地方用到了指针，交换值也没用到指针
	int a;
	a = i;
	i = j;
	j = a;
	return 0;
}
int main() {
	int i = 1;
	int j = 10;
	cout << i << " " << j << endl;
	change(i, j);
	cout << i << " " << j << endl;
}

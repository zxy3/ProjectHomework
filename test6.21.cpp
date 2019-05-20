/**=================================================================================================
 * @file	test6.21.cpp.
 *
 * Implements the test 6.21 class
 * 练习 6.21: 编写一个函数， 令其接受两个参数： 一个是 int 型的数， 另一个是 int 指针。 
 * 函数比较 int 的值和指针所指的值， 返回较大的那个。 
 * 在该函数中指针的类型应该是什么？ int型
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int selectLarge(int num1, int* num2) {
	if (num1 > * num2) {
		return num1;
	}
	else {
		return *num2;
	}
}
int main() {
	cout << "请输入2个整数！" << endl;
	int num1, num2;
	int* num3 = &num2;
	cin >> num1 >> num2;
	cout <<"较大的数是："<< selectLarge(num1, num3)<<endl;
}
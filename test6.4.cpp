/**=================================================================================================
 * @file	test6.4.cpp.
 *
 * Implements the test 6.4 class
 * 练习 6.4: 编写一个与用户交互的函数， 要求用户输入一个数字， 计算生成该数字的阶乘。 在 main 函数中调用该函数。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int getFactorial(int i) {
	int index = i;
	int product = 1;
	while (index != 0) {
		product *= index--;
	}
	return product;
}
int  main() {
	int i;
	cout<<"输入阶乘数："<<" ";
	cin >> i;
	cout <<i<<"阶乘是："<<" "<< getFactorial(i) << endl;
}
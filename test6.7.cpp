/**=================================================================================================
 * @file	test6.7.cpp.
 *
 * Implements the test 6.7 class
 * 练习 6.7: 编写一个函数， 当它第一次被调用时返冋 0， 以后每次被调用返冋值加 1。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int used() {
	int index = 0;
	static int j = 0;
	++j;
	if (j == 1) {
		return 0;
	}
	else {
		return 1;
	}
}
int  main() {
	int i = 0;
	while (i < 10) {
		cout <<"调用次数:"<<i<<"返回值:"<<" "<< used() << endl;
		++i;
	}
}
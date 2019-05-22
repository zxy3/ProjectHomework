/**=================================================================================================
 * @file	test6.51.cpp.
 *
 * Implements the test 6.51 class
 * 练习 6.51： 编写函数 f 的 4 个版本， 令其各输出一条可以区分的消息。 验证上一个练习的答案 ， 如果你回答错了， 
 * 反复研究本节的内容直到你弄清自己错在何处。
 *  
 *  上一题回答的是对的。
 *===============================================================================================**/
#include <iostream>
using namespace std;
void f() {
	cout <<" void f():该函数无须参数"<< endl;
}
void f(int) {
	cout << "void f(int)该函数有一个整型参数" << endl;
}
void f(int, int) {
	cout << "void f(int, int)该函数有两个整型参数" << endl;
}
void f(double a, double b = 3.14) {
	cout <<"void f(double a, double b = 3.14)该函数有两个双精度浮点型参数"<< endl;
}
int main() {
	//f(2.56, 42);  有多个重载类型函数，不匹配
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	return 0;
}


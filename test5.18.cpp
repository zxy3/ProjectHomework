/**=================================================================================================
 * @file	test5.18.cpp.
 *
 * Implements the test 5.18 class
 * 练习 5.18： 说明下列循环的含义并改正其中的错误。
 * (a)do  int v1, v2;
 * cout << "Please enter two numbers to sum:" ;
 * if (cin >> v1>> v2)
 * cout<< "Sum is: " << v1+ v2 << endl;
 * while (cin);
 * 错误：do语句块没有用花括号。
 * 书本原话：
 * do while 语句应该在括号包围起来的条件后面用一个分号表示语句结束。
 * (b)do {
 * // ...
 * } while (int ival = get_response());
 * 错误：因为对于 do while 来说先执行语句或者块， 后判断条件， 所以不允许在条件部分定义变量。
 * (c)do {
 *			int ival = get_response();
 * } while (ival);
 * 错误：“ival”: 未声明的标识符。条件语句中的变量，应该定义在循环外部。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int main() {
	do {
		int ival = get_response();
	} while (ival);
	return 0;
}
int get_response() {
	return 2;
}
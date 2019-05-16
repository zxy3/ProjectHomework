/**=================================================================================================
 * @file	test4.28.cpp.
 *
 * Implements the test 4.28 class
 * 练习 4.28: 编写一段程序， 输出每一种内置类型所占空间的大小。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	cout << "int"<<" "<< sizeof(int) << endl;
	cout << "double" <<" "<< sizeof(double) << endl;
	cout << "float" << " "<<sizeof(float) << endl;
	cout << "string" <<" "<< sizeof(string) << endl;
	cout << "float" << " "<< sizeof(float) << endl;
}
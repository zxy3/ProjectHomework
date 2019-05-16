/**=================================================================================================
 * @file	test3.35.cpp.
 *
 * Implements the test 3.35 class
 * 练习 3.35: 编写一段程序， 利用指针将数组中的元素置为 0。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int *e = &arr[10];
	for (int* b = arr; b != e; ++b) {
		cout << *b << " ";
	}
	cout << endl;
	int* p = arr; //赋给p数组arr的首地址
	for (int* p = arr; p != e; ++p)
	{
		*p = 0;  //指针所指对象的改变
		cout << *p<<" ";
	}
	return 0;
}
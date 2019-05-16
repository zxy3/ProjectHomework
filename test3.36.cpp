/**=================================================================================================
 * @file	test3.36.cpp.
 *
 * Implements the test 3.36 class
 * 练习 3.36: 编写一段程序， 比较两个数组是否相等。 再写一段程序， 比较两个 vector对象是否相等。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };//也可以用户自己输入
	int b[10] = { 0,1,2,3,4,5,6,7,8,9 };//也可以用户自己输入
	int i = 0,j = 0;
	/*while (!isspace(a[i])) {
		i++;
	}
	while (!isspace(b[j])) {
		j++;
	}*/
		for (int i = 0; i < 10; i++)
		{
			if (a[i] != b[i])
			{
				cout << "数组不一致" << endl;
				break;
			}
		}
		//cout << "数组一致" << endl;
	
	return 0;
}
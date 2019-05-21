/**=================================================================================================
 * @file	test6.33.cpp.
 *
 * Implements the test 6.33 class
 * 练习 6.33: 编写一个递归函数， 输出 vector 对象的内容。
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;

void print(vector<int> vlnt, unsigned index)
{
	unsigned sz = vlnt.size();
	if (!vlnt .empty() && index < sz) {
		cout << vlnt[index] << endl;
		print(vlnt, index + 1);
	}
}
int main(int argc, char* argv[])
{
	int a[10] = { 2,2,3,6,5,4,7,8,55,5 };
	vector<int> Example(a, a + 10);
	print(Example, Example.size() - 1);
	return 0;
}
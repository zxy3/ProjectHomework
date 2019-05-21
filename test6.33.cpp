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
	if (!vlnt.empty() && index < sz) {//否则：跳出递归的条件
		cout << vlnt[index] << " ";
		print(vlnt, index+1);
	}
}
int main(int argc, char* argv[])
{
	vector<int> Example{ 2,2,3,6,5,4,7,8,55,5 };
	cout << "原序列:" << endl;
	auto a = Example.begin();
	auto b = Example.end();
	while (a != b) {
		cout << *a << " ";
		++a;
	}
	cout << endl;
	cout << "递归输出后:" << endl;
	print(Example, 0);
	return 0;
}
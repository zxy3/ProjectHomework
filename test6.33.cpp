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

void Get_val(vector<int> a, int ix)//函数的声明及定义，接受两个参数
{
	if (ix != -1)
	{
		cout << a[ix] << endl;
		ix--;
		Get_val(a, ix);//递归
	}
}
int main(int argc, char* argv[])
{
	int a[10] = { 2,2,3,6,5,4,7,8,55,5 };
	vector<int> Example(a, a + 10);
	Get_val(Example, Example.size() - 1);//注意下标从0开始
	return 0;//代表执行成功
}
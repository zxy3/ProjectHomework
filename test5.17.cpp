/**=================================================================================================
 * @file	test5.17.cpp.
 *
 * Implements the test 5.17 class
 * 练习 5.17： 假设有两个包含整数的 vector 对象， 编写一段程序， 检验其中一个 vector对象是否是另一个的前缀。 
 * 为了实现这一目标， 对于两个不等长的 vector 对象， 只需挑出长度较短的那个， 把它的所有元素和另一个 vector 对象比较即可。 
 * 例如， 如果两个 vector 对象的元素分别是 0、 1、 1、 2 和 0、 1、 1、 2、 3、 5、 8, 则程序的返回结果应该为真。
 *   
 *  感觉有点像KMP算法
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int a[5] = { 0,1,2,3,4 };
	int b[6] = { 0,1,2,3,4,5 };//也可以写成用户自己输入
	vector<int> My_vec1(a, a + 5);//借助数组初始化vector对象
	vector<int> My_vec2(b, b + 6);//因为用的VS2010所以不支持列表初始化，用的是构造函数的初始化方法
	int small_size = My_vec1.size() > My_vec2.size() ? My_vec2.size() : My_vec1.size();//挑出较小者
	for (int i = 0; i <= small_size; i++)
	{
		if (My_vec1[i] != My_vec2[i])
		{
			cout << "False" << endl;
			return 0;//如有不匹配的元素即输出False结束
		}
	}
	cout << "True" << endl;
	return 0;//如果用void main(),可以用一个flag来表示是否每个元素都相等
}
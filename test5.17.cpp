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
	vector<int> vec1;//也可以自己输
	vector<int> vec2;
	int i,j;
	cout << "输入第一个字符串:" << " " << endl;
	while (cin>>j) {
		vec1.push_back(j);
	}
	cout << "输入第二个字符串:" << " " << endl;
	while (cin >>i ) {
		vec2.push_back(i);
	}
	int small_size = vec1.size() > vec2.size() ? vec2.size() : vec1.size();//只需挑出长度较短的那个
	cout << "较小字符串长度为：" << " " << small_size << endl;
	cout << "是否相等；" << " ";
	for (int i = 0; i != small_size; i++)
	{
		if (vec1[i] != vec2[i])
		{
			cout << "False" << endl;
			return -1;
		}
	}
	cout << "True" << endl;
	return 0;
}
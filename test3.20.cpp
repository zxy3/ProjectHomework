/**=================================================================================================
 * @file	test3.20.cpp.
 *
 * Implements the test 3.20 class
 * 练习 3.20 读入一组整数并把它们存入一个 vector 对象， 将每对相邻整数的和输出出来。 
 * 改写你的程序， 这次要求先输出第 1 个和最后 1 个元素的和， 接着输出第 2 个和倒数第 2 个元素的和， 以此类推。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> vector_data;
	int numdata, i=1;
	cout << "123" << endl;

	while (cin >> numdata&&i !=10)//ctrl+x+回车  结束输入
	{
		vector_data.push_back(numdata);//push_back 负责把一个值当成 vector 对象的尾元素“ 压到（ push)” vector 对象的“ 尾端（ back)”。
		i++;
	}

	auto sum = vector_data[0] + vector_data[1];
	cout << sum << endl;
	for (auto k:vector_data)
	{
		auto sum = vector_data[k] + vector_data[k+1];
		cout << sum<< endl;
	}

}
/**=================================================================================================
 * @file	test3.24.cpp.
 *
 * Implements the test 3.24 class
 * 练习 3.24: 请使用迭代器重做 3.3.3 节（ 第 94 页） 的最后一个练习。
 * (练习 3.20 读入一组整数并把它们存入一个 vector 对象， 将每对相邻整数的和输出出来。
 *  改写你的程序， 这次要求先输出第 1 个和最后 1 个元素的和， 接着输出第 2 个和倒数第 2 个元素的和， 以此类推。)
 *  迭代器就是2个方法，一个s.begin，一个s.end
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> text(10);
	int numdata, i = 1;
	while (cin >> numdata && i != 10)//ctrl+x+回车  结束输入
	{
		text.push_back(numdata);//push_back 负责把一个值当成 vector 对象的尾元素“ 压到（ push)” vector 对象的“ 尾端（ back)”。
		i++;
	}
	for(auto vector_begin = text.begin(), vector_end = text.end(); vector_begin != vector_end; ++vector_begin)
	{
		cout << *vector_begin + *(vector_begin++) << " ";//这种计算结果是错的，暂时不知道为什么
	}
	return 0;
}
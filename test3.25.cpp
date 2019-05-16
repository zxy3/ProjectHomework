/**=================================================================================================
 * @file	test3.25.cpp.
 *
 * Implements the test 3.25 class
 * 练习 3.25: 3.3.3 节（ 第 93 页） 划分分数段的程序是使用下标运算符实现的， 请利用迭代器改写该程序并实现完全相同的功能。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> grade(10, 0);
	int scores, fraction;
	//初始化分数对象
	while (cin >> fraction && fraction <= 100)//ctrl+x+回车  结束输入
	{
		grade.push_back(fraction);//push_back 负责把一个值当成 vector 对象的尾元素“ 压到（ push)” vector 对象的“ 尾端（ back)”。
	}
	//计算分数等级
	vector<unsigned> alt_scores(11, 0);
	for (auto it = grade.begin(); it != grade.end(); ++it) {//迭代器处理，主要再循环这一步
		unsigned i = *it;
		++(*(alt_scores.begin() + i / 10));
	}
	// 测试目前10分以下会直接显示为10
	// 输出每个分数等级的个数
	cout << "alt_scores.size = " << alt_scores.size() << endl;
	for (auto it = alt_scores.begin(); it != alt_scores.end(); ++it)
		cout << *it << " ";
	cout << endl;
}
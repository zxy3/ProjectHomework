/**=================================================================================================
 * @file	test3.14.cpp.
 *
 * Implements the test 3.14 class
 * 练习 3.14: 编写一段程序， 用 cin 读入一组整数并把它们存入一个 vector 对象。
 *===============================================================================================**/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v_int;//定义int类型的对象，可以看做是一个集合，里面全是Int对象
	int numdata;
	cout << "首先输入一组int类型的数据：" << endl;

	while (cin >> numdata)//ctrl+x+回车  结束输入
	{
		v_int.push_back(numdata);//push_back 负责把一个值当成 vector 对象的尾元素“ 压到（ push)” vector 对象的“ 尾端（ back)”。
	}

	//输出验证，对象是否创建成功
	for (auto i : v_int) {
		cout << i << "  ";
	}
	return 0;
}
/**=================================================================================================
 * @file	test3.15.cpp.
 *
 * Implements the test 3.15 class
 * 练习 3.15: 改写上题的程序， 不过这次读入的是字符串。
 * 要问下老师，结束输入怎么弄
 *===============================================================================================**/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> v_string;//定义int类型的对象，可以看做是一个集合，里面全是Int对象
	string stringdata;
	cout << "首先输入一组string 类型的数据：" << endl;

	while (cin >> stringdata)//ctrl+x+回车  结束输入,字符串时不管用
	{
		v_string.push_back(stringdata);//push_back 负责把一个值当成 vector 对象的尾元素“ 压到（ push)” vector 对象的“ 尾端（ back)”。
	}

	//输出验证，对象是否创建成功
	for (auto i : v_string) {
		cout << i << "  ";
	}
	return 0;
}
/**=================================================================================================
 * @file	test6.47.cpp.
 *
 * Implements the test 6.47 class
 * 练习 6.47: 改写 6.3.2 节（ 第 205 页 ）练习中使用递归输出 vector 内容的程序， 使其有条件地输出与执行过程有关的信息。 
 * 例如， 每次调用时输出 vector 对象的大小。 分别在打开和关闭调试器的情况下编译并执行这个程序。
 *===============================================================================================**/
#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> vlnt, unsigned index) {
	unsigned sz = vlnt.size();
#ifndef NDEBUG//没有定义，执行中间代码
	cout << "vector对象的大小是：" <<" "<< sz << endl;
	//预处理器定义的几个其他的名字
	cerr << __FILE__<<endl;
	cerr << __FILEW__<<endl;
	cerr << __func__<<endl;
	cerr << __TIME__<<endl;
#endif 
	if (!vlnt.empty() && index < sz) {
		cout << vlnt[index] << endl;
		print(vlnt, index + 1);
		}
}
int main() {
	vector<int> v = { 1,3,5,7,9,11,13,15 };
		print(v, 0);
	return 0;
}

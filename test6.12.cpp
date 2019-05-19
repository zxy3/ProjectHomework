/**=================================================================================================
 * @file	test6.12.cpp.
 *
 * Implements the test 6.12 class
 * 练习 6.12： 改写 6.2.1 节中练 6.10 ( 第 188 页） 的程序， 使用引用而非指针交换两个整数的值。 你觉得哪种方法更易于使用呢？ 为什么？
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
void exchange(int& i,int &j) {
	int temp;
	temp = i;
	i = j;
	j = temp;
}
int main() {
	int j , i;
	cout << "请输入2个数字：" << endl;
	cin >> j >> i;
	cout <<"交换前:"<< " " << j <<" "<<i<< endl;
	exchange(i,j);
	cout << "交换后:"<< " " << j << " "<< i<< endl;
}
/**=================================================================================================
 * @file	test6.3.cpp.
 *
 * Implements the test 6.3 class
 * 练习 6.3: 编写你自己的 fact 函数， 上机检查是否正确。
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int fact(int i) {
	int index = i;
	return index * 5;
}
int fact(int i,int j) {
	int index1 = i;
	int index2 = j;
	return index1+index2;
}
int main() {
	cout<<fact(5)<<endl;
	cout << fact(5, 5) << endl;
}
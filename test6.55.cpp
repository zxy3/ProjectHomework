/**=================================================================================================
 * @file	test6.55.cpp.
 *
 * Implements the test 6.55 class
 * ��ϰ 6.55: ��д 4 �������� �ֱ������ int ִֵ�мӡ� ���� �ˡ� �����㣻 ����һ�ⴴ���� vector �����б�����Щֵ��ָ�롣
 *===============================================================================================**/
#include <iostream>
#include <vector>
using namespace std;
//�ӷ�
int func1(int a, int b) {
	return a + b;
}
int func2(int a, int b) {
	return a - b;
}
int func3(int a, int b) {
	return a + b;
}
int func4(int a, int b) {
	return a / b;
}
int main() {
	decltype(func1)* p1 = func1, * p2 = func2, * p3 = func3, * p4 = func4;//4��ָ������ָ��
	vector<decltype(func1)* > vF = { p1, p2, p3, p4 };//��vector���󼯺ϱ���
	return 0;
}

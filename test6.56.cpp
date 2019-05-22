/**=================================================================================================
 * @file	test6.56.cpp.
 *
 * Implements the test 6.56 class
 * ��ϰ 6.56�� �������� vector �����е�ÿ��Ԫ�ز����������
 * �������Ҫ��Ҫ�����⣬ָ������ָ�롣
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
void Compute(int a, int b, int (*p)(int, int)) {
	cout << p(a, b) << endl;//��a,b���ݸ�Pָ��ָ��ĺ���
}
int main() {
	int i = 5, j = 10;
	decltype(func1)* p1 = func1, * p2 = func2, * p3 = func3, * p4 = func4;//4��ָ������ָ��
	vector<decltype(func1)* > vF = { p1, p2, p3, p4 };//��vector���󼯺ϱ���
	for (auto p : vF) {  // ���� vector �е�ÿ��Ԫ�أ� ���ε����������㺯��
		Compute(i, j, p);
	}
	return 0;
}

/**=================================================================================================
 * @file	test3.33.cpp.
 *
 * Implements the test 3.33 class
 * ��ϰ 3.33: ���� 104 ҳ�ĳ�����˵�� �������ʼ�� scores ������ʲô��
 * ���Ի�10��Ԫ�أ�ֵΪ0����Ӱ��
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int main() {
	unsigned scores[11];
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
		cout << grade;
	}
}
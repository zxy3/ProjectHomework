/**=================================================================================================
 * @file	test4.11.cpp.
 *
 * Implements the test 4.11 class
 * ��ϰ 4.11: ��дһ�����ʽ���ڲ��� 4 ��ֵ a�� b�� c�� d �Ĺ�ϵ�� ȷ�� a ���� b�� b ���� c�� c ���� d��
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	cout << "����4������" << endl;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a > b) && (b > c) && (c > d)) {
		cout << "a>b>c>d" << endl;
	}
	else {
		cout << "�ǵݼ�����" << endl;
	}
}
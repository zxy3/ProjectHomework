/**=================================================================================================
 * @file	test6.5.cpp.
 *
 * Implements the test 6.5 class
 * ��ϰ 6.5: ��дһ�����������ʵ�εľ���ֵ��
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int getAbsolutevalue(int i) {
	int index = i;
	if (index < 0) {
		return -index;
	}
	else {
		return index;
	}
}
int  main() {
	int i;
	cout << "��������������" << " ";
	cin >> i;
	cout << i << "�ľ���ֵ�ǣ�" << " " << getAbsolutevalue(i) << endl;
}
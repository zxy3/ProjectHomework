/**=================================================================================================
 * @file	test6.6.cpp.
 *
 * Implements the test 6.6 class
 * ��ϰ 6.6: ˵���βΡ� �ֲ������Լ��ֲ���̬���������� ��дһ�������� ͬʱ�õ���������ʽ��
 *  
 *  
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int getAbsolutevalue(int i) {//�β�
	int index = i;//�ֲ�����
	//�ֲ���̬����
	static int j = index;
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
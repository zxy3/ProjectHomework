/**=================================================================================================
 * @file	test6.21.cpp.
 *
 * Implements the test 6.21 class
 * ��ϰ 6.21: ��дһ�������� ����������������� һ���� int �͵����� ��һ���� int ָ�롣 
 * �����Ƚ� int ��ֵ��ָ����ָ��ֵ�� ���ؽϴ���Ǹ��� 
 * �ڸú�����ָ�������Ӧ����ʲô�� int��
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int selectLarge(int num1, int* num2) {
	if (num1 > * num2) {
		return num1;
	}
	else {
		return *num2;
	}
}
int main() {
	cout << "������2��������" << endl;
	int num1, num2;
	int* num3 = &num2;
	cin >> num1 >> num2;
	cout <<"�ϴ�����ǣ�"<< selectLarge(num1, num3)<<endl;
}
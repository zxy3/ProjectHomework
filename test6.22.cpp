/**=================================================================================================
 * @file	test6.22.cpp.
 *
 * Implements the test 6.22 class
 * ��ϰ 6.22: ��дһ�������� ���佻������ int ָ�롣
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
void  exchange(int* a, int* b) {
	int* temp;
	temp = a;
	a = b;
	b = temp;
	cout <<"������"<<" "<< *a << " " << *b << endl;
}
int main() {
	cout << "������2�����֣�" << endl;
	int num1, num2;
	cin >> num1 >> num2;
	cout << "����ǰ��" << " " << num1 << " " << num2 << endl;
	exchange(&num1, &num2);
}
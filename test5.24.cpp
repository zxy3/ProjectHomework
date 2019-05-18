/**=================================================================================================
 * @file	test5.24.cpp.
 *
 * Implements the test 5.24 class
 * ��ϰ 5.24: �޸���ĳ��� ʹ�õ��ڶ������� 0 ʱ�׳��쳣�� �Ȳ�Ҫ�趨 catch �Ӿ�,���г������Ϊ�������� 0, �����ᷢ��ʲô��
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int num1, num2;
	cout << "������2������" << endl;
	cin >> num1 ;
	try {
		cin >> num2;
		if (num2 == 0) {
			throw runtime_error("������󣺳�������Ϊ0��");
		}
	}
	catch (runtime_error err) {
		cout << err.what();
	}
	cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
}
/**=================================================================================================
 * @file	test5.25.cpp.
 *
 * Implements the test 5.25 class
 * ��ϰ 5.25: �޸���һ��ĳ��� ʹ�� try ����ȥ�����쳣�� catch �Ӿ�Ӧ��Ϊ�û����һ����ʾ��Ϣ�� 
 * ѯ�����Ƿ���������������ִ�� try��������ݡ�
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int num1, num2;
	cout << "������2������" << endl;
	while (cin >> num1) {
		try {
			cin >> num2;
			if (num2 == 0) {
				throw runtime_error("������󣺳�������Ϊ0��");
			}
		}
		catch (runtime_error err)
		{
			cout << err.what() << "  " << "\n�Ƿ���Ҫ��������? Enter y or n:" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n') {
				break;
			}
			else {
				cout << "������2������" << endl;
				continue;
			}
		}
		cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		cout << "��������룡" << endl;
	}
}
		
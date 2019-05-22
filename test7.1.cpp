/**=================================================================================================
 * @file	test7.1.cpp.
 *
 * Implements the test 7.1 class
 * ��ϰ 7.1: ʹ�� 2.6.1 ����ϰ����� Sales_data ��Ϊ 1.6 �� �� �� 21 ҳ�� �Ľ��״�������дһ���°汾��
 *===============================================================================================**/
#include <iostream>
#include "Sales_data.h"
using namespace std;
int main() {
	cout << "�����뽻�׼�¼��" << " ";
	Sales_data total;
	if (cin >> total) {
		Sales_data trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
			}
			else {
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
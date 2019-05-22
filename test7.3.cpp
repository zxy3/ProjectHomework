/**=================================================================================================
 * @file	test7.3.cpp.
 *
 * Implements the test 7.3 class
 * ��ϰ 7.3: �޸� 7.1.1 �ڣ� �� 229 ҳ�� �Ľ��״������ ����ʹ����Щ��Ա��
 *===============================================================================================**/
#include <iostream>
#include "Sales_data.h"
using namespace std;
int main() {
	cout << "�������鼮��Ϣ��" << " ";
	Sales_data total;
	if (cin >> total) {
		Sales_data trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
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
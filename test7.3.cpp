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
	if (read(cin,total)) {
		Sales_data trans;
		while (read(cin, trans)) {
			if (total.bookNo == trans.bookNo) {
				total.combine(trans);
			}
			else {
				print(cout,total);
				total = trans;
			}
		}
		print(cout, total);
	}
	else {
		cerr << "No data?!" << endl;
			return -1;
	}
	return 0;
}
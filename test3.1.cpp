/**=================================================================================================
 * @file	test3.1.cpp.
 *
 * Implements the test 3.1 class
 * ��ϰ 3.1: ʹ��ǡ���� using �������� 1.4.1 �ڣ� �� 11 ҳ�� �� 2.6.2 �ڣ� �� 67 ҳ�� ����ϰ��
 *
 *===============================================================================================**/
#include<iostream>
#include "Sales_data.h"��
using namespace std;
int main() {
	//��ϰ1.9  ���50��100�ĺ�
	int v1 = 50;
	int sum = 0;
	while (v1 < 101) {
		sum += v1;
		++v1;
		//cout << sum<<endl;
	}
	cout << sum << endl;
	//��ϰ1.10 ��ӡ1 - 10֮�������
	 int v1 = 10;
		while (v1 >= 0) {
			cout << v1 << endl;
			--v1;
		}
	//��ϰ1.11 �������2�������м����������
		int  v1, v2;
		cout << "������2������";
		cin >> v1;
		cin >> v2;
		if (v1 < v2) {
			while (v1 <= v2) {
				cout << v1 << endl;
				++v1;
			}
		}
		else
			while (v2 <= v1) {
				cout << v2 << endl;
				++v2;
			}
		//��ϰ 2.41:
		//��ʼ��2���鼮
		Sales_data book1, book2;
		double price = 0;
		//����1���鼮�ı�ţ����������ۣ����������ܼ�
		cin >> book1.bookNo >> book1.units_sold >> price;
		book1.revenue = book1.units_sold * price;
		//����2���鼮�ı�ţ����������ۣ����������ܼ�
		cin >> book2.bookNo >> book2.units_sold >> price;
		book2.revenue = book2.units_sold * price;
		//���2���鼮�ı��һ�£�ʵ�ּӷ������򱨴�
		if (book1.bookNo == book2.bookNo) {
			unsigned sumSold = book1.units_sold + book2.units_sold;
			double totalRevenue = book1.revenue + book2.revenue;

			cout << book1.bookNo << "--" << sumSold
				<< "--" << totalRevenue << " ";
			if (sumSold != 0)
				cout << totalRevenue / sumSold << endl;
			else
				cout << "��Ч���ݣ�û���۳���¼" << endl;
			return 0;
		}
		else {
			cerr << "��Ч����" << endl;
			return -1;
		}
}
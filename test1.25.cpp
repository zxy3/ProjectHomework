/**=================================================================================================
 * @file	test1.25.cpp.
 *
 * Implements the test 1.25 class
 * 
 *===============================================================================================**/
#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item total;//������һ����¼�ı���
	//����һ�����׼�¼��ȷ�������ݿ��Դ���
	if (std::cin >> total) {
		Sales_item trans;//����͵ı���
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
			}
			else
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
		
	}
	else {
		std::cerr << "û������" << std::endl;
		return -1;
	}
	return 0;
}
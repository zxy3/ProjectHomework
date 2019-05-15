/**=================================================================================================
 * @file	test2.41.cpp.
 *
 * Implements the test 2.41 class
 * ��ϰ 2.41: ʹ�����Լ��� Sales_data ����д 1.5.1 �ڣ� �� 20 ҳ���� 1.5.2 �ڣ� �� 21 ҳ���� 1.6 �ڣ� �� 22 ҳ�� ����ϰ�� 
 * �����Ȱ� Sales_data ��Ķ���� main ��������ͬһ���ļ��
 * �½���Sales_data.hͷ�ļ�����������Ĵ����Ķ������еķ�����main�������Լ�д��
 *===============================================================================================**/
#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	//��ʼ��2���鼮
	Sales_data book1,book2;
	double price = 0;  
	//����1���鼮�ı�ţ����������ۣ����������ܼ�
	std::cin >> book1.bookNo >> book1.units_sold >> price;
	book1.revenue = book1.units_sold * price;
	//����2���鼮�ı�ţ����������ۣ����������ܼ�
	std::cin >> book2.bookNo >> book2.units_sold >> price;
	book2.revenue = book2.units_sold * price;
	//���2���鼮�ı��һ�£�ʵ�ּӷ������򱨴�
	if (book1.bookNo == book2.bookNo) {
		unsigned sumSold = book1.units_sold + book2.units_sold;
		double totalRevenue = book1.revenue + book2.revenue;

		std::cout << book1.bookNo << "--" << sumSold
			<< "--" << totalRevenue << " ";
		if (sumSold!= 0)
			std::cout << totalRevenue / sumSold << std::endl;
		else
			std::cout << "��Ч���ݣ�û���۳���¼" << std::endl;
		return 0; 
	}
	else {  
		std::cerr << "��Ч����"<< std::endl;
		return -1;
	}
}
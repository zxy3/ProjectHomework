/**=================================================================================================
 * @file	test1.21.cpp.
 *
 * Implements the test 1.21 class
 * ��Ŀ������2��isbn��ͬ���鼮��������ǵĺ�
 * ���룺��һ�����������ͬ����
 *===============================================================================================**/

#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item item1, item2;
	std::cout << "����2���鼮����" << std::endl;
	std::cin >> item1 >> item2 ; //����2���鼮����
	if (item1.isbn() == item2.isbn()) {//==����ֵ�ϵ����
	std::cout << item1 + item2 << std::endl;//���2��������ӵĽ�����˴�������2��������ӵĽ��
	return 0;
	}
	else
	{
	  std::cerr << "Date must be same" << std::endl;
	 	return -1;
	}
}
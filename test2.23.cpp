/**=================================================================================================
 * @file	test2.23.cpp.
 *
 * Implements the test 2.23 class
 * ��д������¼��ͳ��ÿ�����м�����¼,������룬�������ޡ�
 * ˼·���ٶ����еı�Ŷ�����֪��
 *===============================================================================================**/
#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item item;
	int a,b,c;
	a = 0;
	b = 0;
	c = 0;
	while (std::cin >> item) {
		if (item.isbn() == "1") {
			a++;
		}
		else if(item.isbn() == "2")
		{
			b++;
		}
		else if (item.isbn() == "3") {
			c++;
		}
	}
	std::cout << "isbnΪ1�����У� " << a << " ��;"<<std::endl;
	std::cout << "isbnΪ2�����У� " << b << " ��;" << std::endl;
	std::cout << "isbnΪ3�����У� " << c << " ��." << std::endl;

}
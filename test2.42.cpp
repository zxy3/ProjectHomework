/**=================================================================================================
 * @file	test2.42.cpp.
 *
 * Implements the test 2.42 class
 * ��ϰ 2.42: �������Լ��������дһ�� Sales_data.h ͷ�ļ��� ���Դ�Ϊ��������2.6.2 �ڣ� �� 67 ҳ�� ����ϰ��
 *===============================================================================================**/
#pragma once
#include "Version_test.h"
#include <iostream>
#include <string>
struct Sales_data {
	std::string bookNo;  //�鼮���
	unsigned units_sold = 0;  //����
	double revenue = 0.0;
	unsigned units_sold; //�ܼ�
	double revenue;
};
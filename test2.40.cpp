/**=================================================================================================
 * @file	test3.40.cpp.
 *
 * Implements the test 3.40 class
 * ��ϰ 2.40: �����Լ������д�� Sales data �࣬ ��������е�������������
 * ��д��Ա��������ʡ�ԡ�����������ͷ�ļ�
 *===============================================================================================**/

#include "Version_test.h"
#include <string>
//����һ��Sales_data�����а�����Ԫ��
struct Sales_data {
	std::string bookNo;  //�鼮���
	unsigned units_sold = 0;  //����
	double revenue = 0.0;  //����
	unsigned units_sold; //�ܼ�
	double revenue;
};
//������Sales_dataԪ�ؿ���ʹ�õķ���
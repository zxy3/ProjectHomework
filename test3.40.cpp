/**=================================================================================================
 * @file	test3.40.cpp.
 *
 * Implements the test 3.40 class
 * ��ϰ 3.40�� ��дһ�γ��� ���������ַ����鲢���ַ�������ֵ��ʼ�����ǣ� �����ٶ���һ���ַ�������ǰ�����������Ӻ�Ľ���� 
 * ʹ�� strcpy �� strcat ��ǰ������������ݿ����������������С�
 *===============================================================================================**/
#define _CRT_SECURE_NO_WARNINGS  //������仰�ͻᱨ��
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstddef>
using namespace std;

int main()
{
	//����2���ַ�������ֵ
	const char ca1[] = "Hello World";
	const char ca2[] = "I want an apple";
	char c[200];
	strcpy(c, ca1);
	strcat(c, " ");
	strcat(c, ca2);
	cout << c;
	return 0;
}
/**=================================================================================================
 * @file	test7.5.cpp.
 *
 * Implements the test 7.5 class
 * ��ϰ 7.5: ����� Person �����ṩһЩ����ʹ���ܹ�����������סַ�� ��Щ�����Ƿ�Ӧ���� const ���أ� ����ԭ��
 *  
 *  ����ȡ���ı䣺const
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	string strName; //�� ��
	string strAddress; // �� ַ
public:		
	string getName() const { return strName; } // �� �� �� ��
	string getAddress() const { return strAddress; } // �� �� �� ַ
};
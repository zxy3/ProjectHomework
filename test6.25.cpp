/**=================================================================================================
 * @file	test6.25.cpp.
 *
 * Implements the test 6.25 class
 * ��ϰ 6.25�� ��дһ�� main ������ �����������ʵ�Ρ� ��ʵ�ε��������ӳ�һ�� string�������������
 *===============================================================================================**/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	string str;
	for (int i = 1; i != argc; ++i) {
		str += argv[i];//ʵ���������ӳ�һ���ַ���
		str += " ";
	}
	cout << str << endl;
	return 0;
}
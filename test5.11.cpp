/**=================================================================================================
 * @file	test5.11.cpp.
 *
 * Implements the test 5.11 class
 * ��ϰ 5.11: �޸�ͳ��Ԫ����ĸ�ĳ��� ʹ��Ҳ��ͳ�ƿո� �� �Ʊ���ͻ��з���������
 * ��ν������룿
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	char cval;
	int char_a = 0, char_e = 0, char_i = 0, char_o = 0, char_u = 0, sum_space = 0, sum_table = 0, sum_newline = 0;
	while (cin >> std::noskipws >> cval) // �˴���std::noskipws��ʾ���ǲ������κεط��Ŀհף������Ʊ���Ϳո�ȣ�
	{
		switch (cval)
		{
		case 'a':
		case 'A':
			++char_a;
			break;
		case 'e':
		case 'E':
			++char_e;
			break;
		case 'i':
		case 'I':
			++char_i;
			break;
		case 'o':
		case 'O':
			++char_o;
			break;
		case 'u':
		case 'U':
			++char_u;
			break;
		case ' '://�ո�
			++sum_space;
			break;
		case '\t'://�����Ʊ��
			++sum_table;
			break;
		case '\n'://���з�
			++sum_newline;
			break;
		}
	}
	cout << "Ԫ����ĸa�ĸ���Ϊ��" << char_a << endl;
	cout << "Ԫ����ĸe�ĸ���Ϊ��" << char_e << endl;
	cout << "Ԫ����ĸi�ĸ���Ϊ��" << char_i << endl;
	cout << "Ԫ����ĸo�ĸ���Ϊ��" << char_o << endl;
	cout << "Ԫ����ĸu�ĸ���Ϊ��" << char_u << endl;
	cout << "�ո�ĸ���Ϊ��" << sum_space << endl;
	cout << "�Ʊ���ĸ���Ϊ��" << sum_table << endl;
	cout << "���з��ĸ���Ϊ��" << sum_newline << endl;
}
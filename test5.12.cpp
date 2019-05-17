/**=================================================================================================
 * @file	test5.12.cpp.
 *
 * Implements the test 5.12 class
 * ��ϰ 5.12�� �޸�ͳ��Ԫ����ĸ�ĳ��� ʹ����ͳ�����º��������ַ����ַ����е�����:ff �� fl �� fi��
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	char cval, char_before = '\0'; //������е�0ֵ��ʾ��Ϊ'\0',�ɷ�ֹ���ĳ�ʼֵ(�����)������ĳ���ַ���ֵ.
	int char_a = 0, char_e = 0, char_i = 0, char_o = 0, char_u = 0, 
		sum_space = 0, sum_table = 0, sum_newline = 0,
		sum_ff = 0, sum_fl = 0, sum_fi = 0;//���ff,fl,fi
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
			if (char_before == 'f')
			{
				++sum_fi;
			}
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
		case ' ':
			++sum_space;
			break;
		case '\t':
			++sum_table;
			break;
		case '\n':
			++sum_newline;
			break;
		case 'f':
			if (char_before == 'f')
			{
				++sum_ff;
			}
			break;
		case 'l':
			if (char_before == 'f')
			{
				++sum_fl;
			}
			break;
		}
		char_before = cval;//����ǰ���ַ�����char_before����Ϊ�´��жϵ�����
		//����´��ж���char_beforeΪf�ַ�����ôֻҪ���жϵ�ǰ�ַ��Ƿ�Ϊf��l��i����
	}
	cout << "Ԫ����ĸa�ĸ���Ϊ��" << char_a << endl;
	cout << "Ԫ����ĸe�ĸ���Ϊ��" << char_e << endl;
	cout << "Ԫ����ĸi�ĸ���Ϊ��" << char_i << endl;
	cout << "Ԫ����ĸo�ĸ���Ϊ��" << char_o << endl;
	cout << "Ԫ����ĸu�ĸ���Ϊ��" << char_u << endl;
	cout << "�ո�ĸ���Ϊ��" << sum_space << endl;
	cout << "�Ʊ���ĸ���Ϊ��" << sum_table << endl;
	cout << "���з��ĸ���Ϊ��" << sum_newline << endl;
	cout << "�ַ�����ff�ĸ���Ϊ��" << sum_ff << endl;
	cout << "�ַ�����fl�ĸ���Ϊ��" << sum_fl << endl;
	cout << "�ַ�����fi�ĸ���Ϊ��" << sum_fi << endl;
}
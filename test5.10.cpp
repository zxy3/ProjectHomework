/**=================================================================================================
 * @file	test5.10.cpp.
 *
 * Implements the test 5.10 class
 * ��ϰ 5.10: ����֮ǰʵ�ֵ�ͳ��Ԫ����ĸ�ĳ������һ�����⣺ ���Ԫ����ĸ�Դ�д��ʽ���֣� ���ᱻͳ�����ڡ�
 *  ��дһ�γ��� ��ͳ��Ԫ����ĸ��Сд��ʽ�� Ҳͳ�ƴ�д��ʽ�� Ҳ����˵���³�������'A'��Ӧ�õ��� aCnt ��ֵ�� �Դ����ơ�
 *  �ַ������ַ����������н���������ʲô��
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	char cval;
	int char_a = 0, char_e = 0, char_i = 0, char_o = 0, char_u = 0;
	while (cin >> cval)
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
		}
	}

	cout << "a��A��" <<" "<<  char_a << endl;
	cout << "e��E��" <<" "<< char_e << endl;
	cout << "i��I��" << " " << char_i << endl;
	cout << "o��O��" << " " << char_o << endl;
	cout << "u��U��" << " " << char_u << endl;

	return 0;
}
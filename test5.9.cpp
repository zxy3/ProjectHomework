/**=================================================================================================
 * @file	test5.9.cpp.
 *
 * Implements the test 5.9 class
 * ��ϰ 5.9: ��дһ�γ��� ʹ��һϵ�� if ���ͳ�ƴ� cin ������ı����ж���Ԫ����ĸ��
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;
int main() {
	string word;
	cout << "������һ�����ʣ�" << " " << endl;
	cin >> word;
	while (cin >> word) {
		if (cin.get() == '\n') 
			break;
	}
	//�ο����ַ���ת��Ϊ�ַ�����ķ���
	char a[20];//Ĭ�ϵ���Ϊ20����ĸ��������
	strncpy_s(a, word.c_str(), word.length() + 1);
	int i = 0;
	int char_a = 0, char_e = 0, char_i = 0, char_o = 0, char_u = 0;
	while (i!=10 ) {
		switch (a[i])
		{
		case 'a':
			++char_a;
			break;
		case 'e' :
			++char_e;
			break;
		case 'i':
			++char_i;
			break;
		case 'o':
			++char_o;
			break;
		case 'u':
			++char_u;
			break;
		}
	}
	cout << "a��" << char_a << endl;
	cout << "e" << char_e << endl;
	cout << "i" << char_i << endl;
	cout << "o" << char_o << endl;
	cout << "u" << char_u << endl;



	return 0;
}
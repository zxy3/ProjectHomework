/**=================================================================================================
 * @file	test3.5.cpp.
 *
 * Implements the test 3.5 class
 * ��ϰ 3.5: ��дһ�γ���ӱ�׼�����ж������ַ�����������������һ�� ������ӳɵĴ��ַ����� 
 * Ȼ���޸��������� �ÿո������Ķ���ַ����ָ�������
 *===============================================================================================**/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string text;
	string linkText;
	string blaSpaceLinkText;
	cout << "���룬�������ɸ��ַ�����" << endl;
	while (getline(cin, text))
	{
		linkText += text;
		blaSpaceLinkText += text + " ";
		cout << "���Ӻ���ַ���Ϊ��" << endl;
		cout << linkText << endl;
		cout << "����ո����ַ���Ϊ��" << endl;
		cout << blaSpaceLinkText << endl;
	}
	return 0;
}
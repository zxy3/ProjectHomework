/**=================================================================================================
 * @file	test3.10.cpp.
 *
 * Implements the test 3.10 class
 * ��ϰ 3.10: ��дһ�γ��� ����һ�����������ŵ��ַ����� ��������ȥ��������ַ���ʣ��Ĳ��֡�
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string text("hello!! world!!");
	int num = text.size();
	for (int i = 0; i < text.size(); ++i)
	{
		if (!ispunct(text[i])&&!isspace(text[i]))
			cout << text[i];
	}
	return 0;
}
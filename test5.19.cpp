/**=================================================================================================
 * @file	test5.19.cpp.
 *
 * Implements the test 5.19 class
 * ��ϰ 5.19�� ��дһ�γ��� ʹ�� do while ѭ���ظ���ִ���������� ������ʾ�û��������� string ���� Ȼ�������϶̵��Ǹ����������
 *  
 *  ��ǰ��Ա��ַ���������
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	do
	{
		string My_string1, My_string2;
		cout << "�����������ַ���" << endl;
		cin >> My_string1 >> My_string2;
		if (My_string1.size() > My_string2.size())
		{
			cout << My_string2 << endl;
		}
		else
		{
			cout << My_string1 << endl;
		}
	} while (cin);//ʵ�������ѭ����һֱִ����ȥ
}
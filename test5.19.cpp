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
int  main()
{
	string string1, temp;
	string tips;
	do
	{
		cout << "�����������ַ���" << endl;
		cin >> string1 >> temp;
		if (string1.size() > temp.size())
		{
			cout << "�϶̵��ǣ�" << " " << temp << endl;
		}
		else {
			cout << "�϶̵��ǣ�" << " " << string1 << endl;
		}
		cout << "�Ƿ�Ҫ������ȥ: yes or no" << endl;
		cin >> tips;
	} while ( !tips.empty() && tips[0]!='n');//ʵ�������ѭ����һֱִ����ȥ

	return 0;
}
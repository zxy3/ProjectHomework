/**=================================================================================================
 * @file	test5.21.cpp.
 *
 * Implements the test 5.21 class
 * ��ϰ 5.21�� �޸� 5.5.1 �ڣ� �� 171 ҳ�� ��ϰ��ĳ��� ʹ���ҵ����ظ����ʱ����Դ�д��ĸ��ͷ��
 *===============================================================================================**/
#include <iostream>    
#include <string>    
#include <vector>    
using namespace std;
void main()
{

	string My_string1, My_string2;
	int flag = 0;//��¼�Ƿ����ظ����ʳ���  
	cout << "�����뵥�ʣ�"<<" ";
	while (cin >> My_string1)
	{

		if (My_string1[0] > 'Z' || My_string1[0] < 'A')//�ַ����ĵ�һ����ĸ
		{
			My_string2 = My_string1;
			cout << "��������뵥�ʣ�";  
			continue;
		}
		if (My_string1 == My_string2)
		{
			cout << My_string1 <<"�ظ�2��"<< endl;
			flag = 1;
			break;
		}
		else
			My_string2 = My_string1;
		cout << "��������뵥�ʣ�";
	}
	if (flag == 0)
	{
		cout << "���ظ����ʳ���" << endl;
	}
	system("pause");
}
/**=================================================================================================
 * @file	test5.14.cpp.
 *
 * Implements the test 5.14 class
 * ��ϰ 5.14�� ��дһ�γ��� �ӱ�׼�����ж�ȡ���� string ���󲢲��������ظ����ֵĵ��ʡ� 
 * ��ν�����ظ����ֵ���˼�ǣ� һ�����ʺ��������������ʱ���Ҫ���¼�����ظ����ֵ��������Լ���Ӧ�ĵ��ʡ� 
 * ��������ĵ��ʴ��ڣ� ����ظ����ֵ�������;
 * ��������ڣ� ���һ����Ϣ˵��Ǫ�ε��ʶ�û���������ֹ��� 
 * ���磬 ���������how now now now brown cow cow
 * ��ô���Ӧ�ñ������� now ���������� 3 �Ρ�
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	string My_string, before_string, max_repeatstring;
	int repeat_number = 0, flag = 0;
	while (cin >> My_string)
	{
		if (My_string == before_string)
		{
			++repeat_number;
		}
		else
		{
			repeat_number = 1;
			before_string = My_string;
		}

		if (flag < repeat_number)
		{
			flag = repeat_number;
			max_repeatstring = before_string;
		}//����flag,max_repeatstring�������浱ǰ�Ƚ����ַ����������ظ������Ͷ�Ӧ�ַ���
	}
	if (flag == 1)
	{
		cout << "û���ظ����ַ�������" << endl;
	}
	else
	{
		cout << "����" << max_repeatstring << "������" << flag << "��" << endl;
	}
}
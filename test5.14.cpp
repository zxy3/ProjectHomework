/**=================================================================================================
 * @file	test5.14.cpp.
 *
 * Implements the test 5.14 class
 * ��ϰ 5.14�� ��дһ�γ��� �ӱ�׼�����ж�ȡ���� string ���󲢲��������ظ����ֵĵ��ʡ� 
 * ��ν�����ظ����ֵ���˼�ǣ� һ�����ʺ��������������ʱ���Ҫ���¼�����ظ����ֵ��������Լ���Ӧ�ĵ��ʡ� 
 * ��������ĵ��ʴ��ڣ� ����ظ����ֵ�������;��������ڣ� ���һ����Ϣ˵���κε��ʶ�û���������ֹ��� 
 * ���磬 ���������how now now now brown cow cow
 * ��ô���Ӧ�ñ������� now ���������� 3 �Ρ�
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string string, temp, maxString;
	int repNum = 0, repMax = 0;
	cout << "���������ɵ��ʣ�" << endl;
	while (cin >> string)
	{
		if (string == temp)
		{
			++repNum;
		}
		else
		{
			repNum = 1;
			temp = string;
		}
		if (repMax < repNum)//Ŀǰ���2�����ʳ��ִ�����ͬ��ֻ�ܼ�¼��һ�γ��ֵĵ��ʡ�
		{
			repMax = repNum;
			maxString = string;
		}
	}
	if (repMax == 1)
	{
		cout << "���ظ���" << endl;
	}
	else
	{
		cout << "����" << maxString << "����:" <<" "<< repMax << "��" << endl;
	}
	return 0;
}
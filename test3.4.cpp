/**=================================================================================================
 * @file	test3.4.cpp.
 *
 * Implements the test 3.4 class
 * ��ϰ 3.4: ��дһ�γ�����������ַ����� �Ƚ����Ƿ���Ȳ��������� �������ȣ�����ϴ���Ǹ��ַ�����
 * ��д�������� �Ƚ�����������ַ����Ƿ�ȳ��� ������ȳ���������Ƚϴ���Ǹ��ַ�����
 * ֪ʶ�㣨����ԭ������
 * 1������Ƚ��������ȳ����ַ����ķ�ʽ��ʶ��һ����ͬ���ַ�����һ���ϴ����Ӧ���ַ����ʹ�
 * 2���Դ�Сд���С�
 * 3��������� string ����ĳ��Ȳ�ͬ�� ���ҽ϶� string �����ÿ���ַ�����ϳ�string �����Ӧλ���ϵ��ַ���ͬ�� 
 * ��˵�϶� string ����С�ڽϳ� string����
 *===============================================================================================**/
#include <iostream>
#include <string>
using std::string;
using namespace std;//����using std::cin;using std::cout; using std::endl;
int main()
{
	string text1,text2;
	cout << "����2���ַ���: "<<endl;
	cin >> text1 >> text2;
	if (text1 != text2)
	{
		cout << "2���ַ����нϴ����:" << " " << endl;
		cout << (text1 >= text2 ? text1 : text2) << endl;
		if (text1.size() != text2.size())
		{
			cout << "2���ַ����нϳ�����:" << " " << endl;
			cout << (text1.size() >= text2.size() ? text1 : text2) << endl;
			return 0;
		}
		else
		{
			cout << "2���ַ����ȳ���" << endl;
			return 0;
		}
	}
	else
	{
		cout << "2���ַ�����ȫ���" << endl;
		return 0;
	}
}
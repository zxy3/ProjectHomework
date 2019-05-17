/**=================================================================================================
 * @file	test5.25.cpp.
 *
 * Implements the test 5.25 class
 * ��ϰ 5.25: �޸���һ��ĳ��� ʹ�� try ����ȥ�����쳣�� catch �Ӿ�Ӧ��Ϊ�û����һ����ʾ��Ϣ�� 
 * ѯ�����Ƿ���������������ִ�� try��������ݡ�
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
void main()
{
	int a, b;
	cout << "���������������������";
	while (cin >> a >> b)
	{
		try
		{
			if (b == 0) throw std::runtime_error("����������Ϊ0");//runtime_error�쳣��:ֻ��������ʱ���ܼ���������
			cout << static_cast<double>(a) / b << endl;//���ǵ���������������С�������,�Ƚ�aǿ��ת��Ϊdouble����
		}
		catch (runtime_error err)//err��runtime_error���һ��ʵ��
		{
			cout << err.what(); //ʵ���ĳ�Ա���������������ɱ��������
			cout << "\n�Ƿ���Ҫ��������? Enter y or n:" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;//breakֻ�����ڿ��������ѭ������
		}//����˵try�Ǽ���쳣�ģ�����������쳣����throw(�׳�)һ���쳣��Ȼ��catch���������쳣�Ĵ���
		//���û��catch���֣�����try����Ȼ�ᱨ��
	}
}
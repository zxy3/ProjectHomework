/**=================================================================================================
 * @file	test5.17.cpp.
 *
 * Implements the test 5.17 class
 * ��ϰ 5.17�� �������������������� vector ���� ��дһ�γ��� ��������һ�� vector�����Ƿ�����һ����ǰ׺�� 
 * Ϊ��ʵ����һĿ�꣬ �����������ȳ��� vector ���� ֻ���������Ƚ϶̵��Ǹ��� ����������Ԫ�غ���һ�� vector ����Ƚϼ��ɡ� 
 * ���磬 ������� vector �����Ԫ�طֱ��� 0�� 1�� 1�� 2 �� 0�� 1�� 1�� 2�� 3�� 5�� 8, �����ķ��ؽ��Ӧ��Ϊ�档
 *   
 *  �о��е���KMP�㷨
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string line1, line2;
	getline(cin, line1);
	cout << "��һ���ַ�����:" << " " << line1 << endl;
	getline(cin, line2);
	cout << "��һ���ַ�����:" << " " << line2 << endl;
	
	string::size_type small_size = line1.size() > line2.size() ? line2.size() : line1.size();//ֻ���������Ƚ϶̵��Ǹ�
	cout << "��С�ַ�������Ϊ��" << " " << small_size << endl;
	cout << "�Ƿ���ȣ�" << " ";
	for (int i = 0; i != small_size; i++)
	{
		if (line1[i] != line2[i])
		{
			cout << "False" << endl;
			return -1;
		}
	}
	cout << "True" << endl;
	return 0;
}
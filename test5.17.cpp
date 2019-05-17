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
	vector<int> vec1;//Ҳ�����Լ���
	vector<int> vec2;
	int i,j;
	cout << "�����һ���ַ���:" << " " << endl;
	while (cin>>j) {
		vec1.push_back(j);
	}
	cout << "����ڶ����ַ���:" << " " << endl;
	while (cin >>i ) {
		vec2.push_back(i);
	}
	int small_size = vec1.size() > vec2.size() ? vec2.size() : vec1.size();//ֻ���������Ƚ϶̵��Ǹ�
	cout << "��С�ַ�������Ϊ��" << " " << small_size << endl;
	cout << "�Ƿ���ȣ�" << " ";
	for (int i = 0; i != small_size; i++)
	{
		if (vec1[i] != vec2[i])
		{
			cout << "False" << endl;
			return -1;
		}
	}
	cout << "True" << endl;
	return 0;
}
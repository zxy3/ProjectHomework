/**=================================================================================================
 * @file	test3.17.cpp.
 *
 * Implements the test 3.17 class
 * ��ϰ 3.17: �� cin ����һ��ʲ������Ǵ���һ�� vector ���� Ȼ���跨�����дʶ���дΪ��д��ʽ�� ����ı��Ľ���� ÿ����ռһ�С�
 * 
 * �ַ����Ľ�������ķ�����ʲôҪ������ʦ��
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> v_string;
	string string_data;
	cout << "������һ��string����" << endl;

	while (cin >> string_data)
	{
		v_string.push_back(string_data);
	}
	//��ÿ�������ÿ���ַ�����Ϊ��д��Ĭ�ϲ����ֿո񣬱��ȣ���Ϊ����û�д����쳣
	for (auto i : v_string)
		for (auto j : i.length)
		{
			i[j] = toupper(i[j]);
		}
	//���һ���ַ������󣬻�һ��
	for (auto i : v_string) {
		cout << i << "  " << endl;
	}
}
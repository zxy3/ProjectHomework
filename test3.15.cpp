/**=================================================================================================
 * @file	test3.15.cpp.
 *
 * Implements the test 3.15 class
 * ��ϰ 3.15: ��д����ĳ��� ������ζ�������ַ�����
 * Ҫ������ʦ������������ôŪ
 *===============================================================================================**/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> v_string;//����int���͵Ķ��󣬿��Կ�����һ�����ϣ�����ȫ��Int����
	string stringdata;
	cout << "��������һ��string ���͵����ݣ�" << endl;

	while (cin >> stringdata)//ctrl+x+�س�  ��������,�ַ���ʱ������
	{
		v_string.push_back(stringdata);//push_back �����һ��ֵ���� vector �����βԪ�ء� ѹ���� push)�� vector ����ġ� β�ˣ� back)����
	}

	//�����֤�������Ƿ񴴽��ɹ�
	for (auto i : v_string) {
		cout << i << "  ";
	}
	return 0;
}
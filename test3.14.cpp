/**=================================================================================================
 * @file	test3.14.cpp.
 *
 * Implements the test 3.14 class
 * ��ϰ 3.14: ��дһ�γ��� �� cin ����һ�������������Ǵ���һ�� vector ����
 *===============================================================================================**/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v_int;//����int���͵Ķ��󣬿��Կ�����һ�����ϣ�����ȫ��Int����
	int numdata;
	cout << "��������һ��int���͵����ݣ�" << endl;

	while (cin >> numdata)//ctrl+x+�س�  ��������
	{
		v_int.push_back(numdata);//push_back �����һ��ֵ���� vector �����βԪ�ء� ѹ���� push)�� vector ����ġ� β�ˣ� back)����
	}

	//�����֤�������Ƿ񴴽��ɹ�
	for (auto i : v_int) {
		cout << i << "  ";
	}
	return 0;
}
/**=================================================================================================
 * @file	test3.23.cpp.
 *
 * Implements the test 3.23 class
 * ��ϰ 3.23: ��дһ�γ��� ����һ������ U) �������� vector ���� Ȼ��ʹ�õ�����������Ԫ�ص�ֵ�����ԭ����������
 * ��� vector ��������ݣ� ��������Ƿ���ȷ��
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> text(10, 5);
	cout << "δ�޸�ǰ��ԭʼ���ݣ�" << " " << endl;
	for (auto& i : text) {
		cout << i << " ";
	}
	cout << " " << endl;
	cout << "����2���Ժ�" << endl;
	for (auto it = text.begin(); it != text.end(); it++) 
	{
		*it *= 2;
		cout << *it << " " ;
	}
	cout << " " << endl;
	return 0;
}
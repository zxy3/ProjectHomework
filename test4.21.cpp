/**=================================================================================================
 * @file	test4.21.cpp.
 *
 * Implements the test 4.21 class
 * ��ϰ 4.21: ��дһ�γ��� ʹ������������� vector<int>���ҵ���ЩԪ�ص�ֵ�������� Ȼ����Щ����ֵ������
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	//��ʼ��vector
	int a[10] = { 0,1,2,3,6,5,4,7,8,9 };
	vector<int> v1(a, a + 10);
	cout << "ԭʼ����:" << endl;
	for (auto i = v1.begin(); i !=v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	cout << "��������2:" << endl;
	for (auto k = v1.begin(); k != v1.end(); k++)
	{
		if (*k % 2 != 0) {
			cout <<*k<<"->"<< *k*2 << endl;
		}
	}
	return 0;
}
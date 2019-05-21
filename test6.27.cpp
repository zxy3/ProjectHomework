/**=================================================================================================
 * @file	test6.27.cpp.
 *
 * Implements the test 6.27 class
 * ��ϰ 6.27�� ��дһ�������� ���Ĳ����� initializer_list<int>���͵Ķ��� �����Ĺ����Ǽ����б�������Ԫ�صĺ͡�
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int summation(initializer_list<int> i)//���δ���i,�γ�һ��i�б�
{
	int sumForList = 0;
	for (auto beg = i.begin(); beg != i.end(); ++beg)
	{
		sumForList += (*beg);
	}
	return sumForList;
}
int main()
{
	initializer_list<int>lst{ 1,2,3,4 };//Ҳ�����û��Լ�����
	int sum = summation(lst);
	cout << "��������Ϊ��" << " ";
	for (auto beg = lst.begin(); beg != lst.end(); ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	cout<< "���к�Ϊ:   "<<sum<< endl;
	cin.get();
	return 0;
}
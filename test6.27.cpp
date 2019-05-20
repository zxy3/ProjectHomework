/**=================================================================================================
 * @file	test6.27.cpp.
 *
 * Implements the test 6.27 class
 * ��ϰ 6.27�� ��дһ�������� ���Ĳ����� initializer_list<int>���͵Ķ��� �����Ĺ����Ǽ����б�������Ԫ�صĺ͡�
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
#include<initializer>
using namespace std;
int he(initializer_list<int> i)
{
	int n = 0;
	for (auto beg = i.begin(); beg != i.end(); ++beg)
	{

		n += (*beg);
	}
	return n;
}
int main()
{
	initializer_list<int>lst{ 1,2,3,4 };
	int sum = he(lst);
	cout& lt; &lt; "The sum is:   "& lt; &lt; sum& lt; &lt; endl;
	cin.get();
	cin.get();
	return 0;
}
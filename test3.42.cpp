/**=================================================================================================
 * @file	test3.42.cpp.
 *
 * Implements the test 3.42 class
 * ��ϰ 3.42: ��дһ�γ��� ����������Ԫ�ص� vector ���󿽱���һ���������顣
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int a[10];
	int j = 0;
	vector<int> v1(10, 0);//��ʼ��10��Int���͵Ķ�����0
	for (auto i = v1.begin(); i !=v1.end(); i++)
	{
		a[j] = *i;
		cout << a[j] << " ";
		j++;
	}
	return 0;
}

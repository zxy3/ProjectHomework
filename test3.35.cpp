/**=================================================================================================
 * @file	test3.35.cpp.
 *
 * Implements the test 3.35 class
 * ��ϰ 3.35: ��дһ�γ��� ����ָ�뽫�����е�Ԫ����Ϊ 0��
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int *e = &arr[10];
	for (int* b = arr; b != e; ++b) {
		cout << *b << " ";
	}
	cout << endl;
	int* p = arr; //����p����arr���׵�ַ
	for (int* p = arr; p != e; ++p)
	{
		*p = 0;  //ָ����ָ����ĸı�
		cout << *p<<" ";
	}
	return 0;
}
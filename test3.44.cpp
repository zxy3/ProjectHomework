/**=================================================================================================
 * @file	test3.44.cpp.
 *
 * Implements the test 3.44 class
 * ��ϰ 3.44: ��д��һ����ϰ�еĳ��� ʹ�����̈́e��������ѭ�����Ʊ��������͡�
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	//��ʼ����ά����
	int ia[3][4] = { { 0, 1, 2, 3 },{ 4, 5, 6, 7 },{ 8, 9, 10, 11} };
	using int_array = int[4];
	typedef int int_array[4];
	for (int_array* p = ia; p != ia + 3; ++p) {
		for (int* q = *p; q != *p + 4; ++q) {
			cout << *q << " ";
		}
		cout << endl;
	}
/**=================================================================================================
 * @file	test6.7.cpp.
 *
 * Implements the test 6.7 class
 * ��ϰ 6.7: ��дһ�������� ������һ�α�����ʱ���� 0�� �Ժ�ÿ�α����÷���ֵ�� 1��
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int used() {
	int index = 0;
	static int j = 0;
	++j;
	if (j == 1) {
		return 0;
	}
	else {
		return 1;
	}
}
int  main() {
	int i = 0;
	while (i < 10) {
		cout <<"���ô���:"<<i<<"����ֵ:"<<" "<< used() << endl;
		++i;
	}
}
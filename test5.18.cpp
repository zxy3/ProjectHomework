/**=================================================================================================
 * @file	test5.18.cpp.
 *
 * Implements the test 5.18 class
 * ��ϰ 5.18�� ˵������ѭ���ĺ��岢�������еĴ���
 * (a)do  int v1, v2;
 * cout << "Please enter two numbers to sum:" ;
 * if (cin >> v1>> v2)
 * cout<< "Sum is: " << v1+ v2 << endl;
 * while (cin);
 * ����do����û���û����š�
 * �鱾ԭ����
 * do while ���Ӧ�������Ű�Χ����������������һ���ֺű�ʾ��������
 * (b)do {
 * // ...
 * } while (int ival = get_response());
 * ������Ϊ���� do while ��˵��ִ�������߿飬 ���ж������� ���Բ��������������ֶ��������
 * (c)do {
 *			int ival = get_response();
 * } while (ival);
 * ���󣺡�ival��: δ�����ı�ʶ������������еı�����Ӧ�ö�����ѭ���ⲿ��
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int main() {
	do {
		int ival = get_response();
	} while (ival);
	return 0;
}
int get_response() {
	return 2;
}
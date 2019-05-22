/**=================================================================================================
 * @file	test6.42.cpp.
 *
 * Implements the test 6.42 class
 * ��ϰ 6.42: �� make_plural ������ �μ� 6.3.2 �ڣ� �� 201 ҳ�� �ĵڶ����βθ���Ĭ��ʵ��'s'�� 
 * �����°汾�ĺ���������� success �� failure �ĵ����͸�����ʽ��
 *===============================================================================================**/
#include <iostream>
#include <string>
using namespace std;
string make_plural(int ctr, const string& word, const string &ending = "s") {
	return (ctr > 1) ? word + ending : word;
}
int main() {
	cout << "success �ĵ�����ʽ��:" << make_plural(1, "success", "es") << endl;
	cout << "success�ĸ�����ʽ�ǣ� " << make_plural(2, "success", "es") << endl;
	cout << "failure �ĵ�����ʽ�ǣ� "<<make_plural(1, "failure") << endl;
	cout << "failure �ĵ�����ʽ�ǣ�" << make_plural(2, "failure")<< endl;
	return 0;
}
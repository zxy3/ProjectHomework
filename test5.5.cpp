/**=================================================================================================
 * @file	test5.5.cpp.
 *
 * Implements the test 5.5 class
 * ��ϰ 5.5: дһ���Լ��ĳ��� ʹ�� if else ���ʵ�ְ����ֳɼ�ת������ĸ�ɼ���Ҫ��
 * 
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	cout << "��������ĳɼ�:" << " ";
	int score;
	cin >> score;
	while (score > 100 || score < 0) {
		cout << "����Ƿ�,�����䣡" << endl;
		cin >> score;
	}
	cout <<"����ĳɼ��ǣ�"<<" "<< score<<endl;
	cout << "�ȼ�Ϊ��" << " ";
	if (90 < score&&score < 100) {
		cout << "A" << endl;
	}
	else if (80 < score && score < 90) {
		cout << "B" << endl;
	}
	else if (70 < score && score < 80) {
		cout << "C" << endl;
	}
	else if (60 < score && score < 70) {
		cout << "D" << endl;
	}
	else {
		cout << "E" << endl;
	}
}
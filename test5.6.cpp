/**=================================================================================================
 * @file	��ϰ5.6.cpp.
 *
 * Implements the 5.6 class
 * ��ϰ 5.6: ��д��һ��ĳ��� ʹ������������� �μ� 4.7 �ڣ� �� 134 ҳ�� ���� if else��䡣
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
	cout << "����ĳɼ��ǣ�" << " " << score << endl;
	cout << "�ȼ�Ϊ��" << " ";
	string finalgrade;
	finalgrade = (score > 90) ? "A": (score < 60) ? "E" : ((score < 70)&& (score > 60)) ? "D" 
		: ((score < 80) && (score > 70)) ? "C" : "B";
	cout <<finalgrade<<endl;
}
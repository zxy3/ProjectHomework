/**=================================================================================================
 * @file	test4.22.cpp.
 *
 * Implements the test 4.22 class
 * ��ϰ 4.22: ���ڵ�ʾ�����򽫳ɼ����ֳ� high pass�� pass �� fail ���֣� ��չ�ó���ʹ���һ���� 60 �ֵ� 75 ��֮��ĳɼ��趨Ϊ low pass�� 
 * Ҫ�������������汾�� һ���汾ֻʹ������������� ����һ���汾ʹ�� 1 ������ if ��䡣 �ĸ��汾�ĳ������������أ� Ϊʲô��
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int score;
	cout << "Please Input the grade :";
	cin >> score;
	string finalgrade;
	finalgrade = (score >= 90) ? "high" : (score >= 70) ? "pass" : (score >= 60) ? "Low pass" : "fail";
	cout << finalgrade;
	return 0;
}
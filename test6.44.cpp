/**=================================================================================================
 * @file	test6.44.cpp.
 *
 * Implements the test 6.44 class
 * ��ϰ 6.44: �� 6.2.2 �ڣ� �� 189 ҳ�� �� isShorter ������д������������
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
inline bool isShorter(const string& si, const string& s2) {
	return si.size() < s2.size();
}
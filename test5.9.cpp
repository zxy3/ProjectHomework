/**=================================================================================================
 * @file	test5.9.cpp.
 *
 * Implements the test 5.9 class
 * ��ϰ 5.9: ��дһ�γ��� ʹ��һϵ�� if ���ͳ�ƴ� cin ������ı����ж���Ԫ����ĸ��
 *  
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

	char ch;
	while (cin >> ch) {
		// ��if������ʵ��
		if (ch == 'a') {
			++aCnt;
		}if (ch == 'e') {
			++eCnt;
		}if (ch == 'i') {
			++iCnt;
		}if (ch == 'o') {
			++oCnt;
		}if (ch == 'u') {
			++uCnt;
		}
	}
	// print results
	cout << "Number of vowel a: " <<" "<< aCnt << '\n'<< "Number of vowel e:" <<" "<< eCnt << '\n'
		<< "Number of vowel i: " << " "<<iCnt << '\n'<< "Number of vowel o: " << " "<<oCnt << '\n'
		<< "Number of vowel u:" << " "<<uCnt << endl;

	return 0;
}
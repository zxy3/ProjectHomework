/**=================================================================================================
 * @file	test5.10.cpp.
 *
 * Implements the test 5.10 class
 * ��ϰ 5.10: ����֮ǰʵ�ֵ�ͳ��Ԫ����ĸ�ĳ������һ�����⣺ ���Ԫ����ĸ�Դ�д��ʽ���֣� ���ᱻͳ�����ڡ�
 *  ��дһ�γ��� ��ͳ��Ԫ����ĸ��Сд��ʽ�� Ҳͳ�ƴ�д��ʽ�� Ҳ����˵���³�������'A'��Ӧ�õ��� aCnt ��ֵ�� �Դ����ơ�
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
		switch (ch) {
		case 'a':case'A'://����д��case ��a��||'A'
		
			++aCnt;
			break;
		case 'e':case 'E':
			++eCnt;
			break;
		case 'i':case'I':
			++iCnt;
			break;
		case 'o':case'O':
			++oCnt;
			break;
		case 'u':case'U':
			++uCnt;
			break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << endl;

	return 0;
}
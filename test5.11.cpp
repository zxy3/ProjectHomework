/**=================================================================================================
 * @file	test5.11.cpp.
 *
 * Implements the test 5.11 class
 * ��ϰ 5.11: �޸�ͳ��Ԫ����ĸ�ĳ��� ʹ��Ҳ��ͳ�ƿո� �� �Ʊ���ͻ��з���������
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, nCnt=0, tCnt = 0, spaceCnt = 0;

	char ch;
	while (cin >> std::noskipws >> ch) {//�������κη���
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
		case '\n':
			++nCnt;
			break;
		case '\t':
			++tCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of vowel space: \t" << spaceCnt << '\n'
		<< "Number of vowel ����: \t" << nCnt << '\n'
		<< "Number of vowel �Ʊ��\t" << tCnt << endl;

	return 0;
}
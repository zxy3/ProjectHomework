/**=================================================================================================
 * @file	test5.12.cpp.
 *
 * Implements the test 5.12 class
 * ��ϰ 5.12�� �޸�ͳ��Ԫ����ĸ�ĳ��� ʹ����ͳ�����º��������ַ����ַ����е�����:ff �� fl �� fi��
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, nCnt = 0, tCnt = 0, spaceCnt = 0,temp = 0,flCnt = 0,fiCnt = 0, ffCnt = 0;

	char ch;
	cout << "�뿪ʼ�������:(�ַ���,�ո�,�س�,�Ʊ��,ff,fi,fI)" << endl;
	while (cin >> std::noskipws >> ch) {//�������κη���
		switch (ch) {
		case 'a':case'A'://����д��case ��a��||'A'

			++aCnt;
			break;
		case 'e':case 'E':
			++eCnt;
			break;
		case 'i':
			if (temp == 'f') {
				++fiCnt;
			}
			else {
				++iCnt;
			}
			break;
		case'I':
			if (temp == 'f') {
				++flCnt;
			}
			else {
				++iCnt;
			}
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
		case'f':
			if (temp == 'f') {//������3��f�ᱻ��¼2��
				++ffCnt;
			}
			break;
		}
		temp = ch;
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of vowel space: \t" << spaceCnt << '\n'
		<< "Number of vowel ����: \t" << nCnt << '\n'
		<< "Number of vowel �Ʊ��\t" << tCnt << '\n'
		<< "Number of vowel ff\t" << ffCnt << '\n'
		<< "Number of vowel fi\t" << fiCnt << '\n'
		<< "Number of vowel fI\t" << flCnt << endl;


	return 0;
}
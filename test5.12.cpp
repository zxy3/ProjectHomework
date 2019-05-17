/**=================================================================================================
 * @file	test5.12.cpp.
 *
 * Implements the test 5.12 class
 * 练习 5.12： 修改统计元音字母的程序， 使其能统计以下含有两个字符的字符序列的数量:ff 、 fl 和 fi。
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
	cout << "请开始你的输入:(字符串,空格,回车,制表符,ff,fi,fI)" << endl;
	while (cin >> std::noskipws >> ch) {//不忽略任何符号
		switch (ch) {
		case 'a':case'A'://不能写成case ’a‘||'A'

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
			if (temp == 'f') {//连续的3个f会被记录2次
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
		<< "Number of vowel 换行: \t" << nCnt << '\n'
		<< "Number of vowel 制表符\t" << tCnt << '\n'
		<< "Number of vowel ff\t" << ffCnt << '\n'
		<< "Number of vowel fi\t" << fiCnt << '\n'
		<< "Number of vowel fI\t" << flCnt << endl;


	return 0;
}
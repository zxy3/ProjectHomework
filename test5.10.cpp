/**=================================================================================================
 * @file	test5.10.cpp.
 *
 * Implements the test 5.10 class
 * 练习 5.10: 我们之前实现的统计元音字母的程序存在一个问题： 如果元音字母以大写形式出现， 不会被统计在内。
 *  编写一段程序， 既统计元音字母的小写形式， 也统计大写形式， 也就是说，新程序遇和'A'都应该递增 aCnt 的值， 以此类推。
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
		case 'a':case'A'://不能写成case ’a‘||'A'
		
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
/**=================================================================================================
 * @file	test5.9.cpp.
 *
 * Implements the test 5.9 class
 * 练习 5.9: 编写一段程序， 使用一系列 if 语句统计从 cin 读入的文本中有多少元音字母。
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
		// 用if语句进行实现
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
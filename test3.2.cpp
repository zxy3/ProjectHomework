/**=================================================================================================
 * @file	test3.2.cpp.
 *
 * Implements the test 3.2 class
 * ��ϰ 3.2: ��дһ�γ���ӱ�׼������һ�ζ���һ���У� Ȼ���޸ĸó���ʹ��һ�ζ���һ���ʡ�
 *===============================================================================================**/
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string line;
	// ÿ�ζ���һ���У� ֱ�������ļ�ĩβ
		while (getline(cin, line))//һ�еĽ�����һ�����з�ʶ��
			cout << line << endl;
	return 0;
	//һ�ζ�ȡһ����
	string word;
	while (cin >> word)//һ���ʵĽ�����һ���ո��ʶ��
		cout << word << endl;
	return 0;
}
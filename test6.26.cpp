/**=================================================================================================
 * @file	test6.26.cpp.
 *
 * Implements the test 6.26 class
 * ��ϰ 6.26: ��дһ������ ʹ����ܱ�����ʾ��ѡ� ������ݸ� main ������ʵ�ε����ݡ�
 *===============================================================================================**/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	string str;
	for (int i = 1; i != argc; ++i) {
		cout << "argc[" << i << "]: " << argv[i] << endl;
		str += " ";
	}
	cout << str << endl;
	return 0;
}
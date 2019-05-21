/**=================================================================================================
 * @file	test6.33.cpp.
 *
 * Implements the test 6.33 class
 * ��ϰ 6.33: ��дһ���ݹ麯���� ��� vector ��������ݡ�
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;

void print(vector<int> vlnt, unsigned index)
{
	unsigned sz = vlnt.size();
	if (!vlnt.empty() && index < sz) {//���������ݹ������
		cout << vlnt[index] << " ";
		print(vlnt, index+1);
	}
}
int main(int argc, char* argv[])
{
	vector<int> Example{ 2,2,3,6,5,4,7,8,55,5 };
	cout << "ԭ����:" << endl;
	auto a = Example.begin();
	auto b = Example.end();
	while (a != b) {
		cout << *a << " ";
		++a;
	}
	cout << endl;
	cout << "�ݹ������:" << endl;
	print(Example, 0);
	return 0;
}
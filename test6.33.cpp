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

void Get_val(vector<int> a, int ix)//���������������壬������������
{
	if (ix != -1)
	{
		cout << a[ix] << endl;
		ix--;
		Get_val(a, ix);//�ݹ�
	}
}
int main(int argc, char* argv[])
{
	int a[10] = { 2,2,3,6,5,4,7,8,55,5 };
	vector<int> Example(a, a + 10);
	Get_val(Example, Example.size() - 1);//ע���±��0��ʼ
	return 0;//����ִ�гɹ�
}
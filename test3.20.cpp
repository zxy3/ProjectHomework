/**=================================================================================================
 * @file	test3.20.cpp.
 *
 * Implements the test 3.20 class
 * ��ϰ 3.20 ����һ�������������Ǵ���һ�� vector ���� ��ÿ�����������ĺ���������� 
 * ��д��ĳ��� ���Ҫ��������� 1 ������� 1 ��Ԫ�صĺͣ� ��������� 2 ���͵����� 2 ��Ԫ�صĺͣ� �Դ����ơ�
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> vector_data;
	int numdata, i=1;
	cout << "123" << endl;

	while (cin >> numdata&&i !=10)//ctrl+x+�س�  ��������
	{
		vector_data.push_back(numdata);//push_back �����һ��ֵ���� vector �����βԪ�ء� ѹ���� push)�� vector ����ġ� β�ˣ� back)����
		i++;
	}

	auto sum = vector_data[0] + vector_data[1];
	cout << sum << endl;
	for (auto k:vector_data)
	{
		auto sum = vector_data[k] + vector_data[k+1];
		cout << sum<< endl;
	}

}
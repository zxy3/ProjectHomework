/**=================================================================================================
 * @file	test3.24.cpp.
 *
 * Implements the test 3.24 class
 * ��ϰ 3.24: ��ʹ�õ��������� 3.3.3 �ڣ� �� 94 ҳ�� �����һ����ϰ��
 * (��ϰ 3.20 ����һ�������������Ǵ���һ�� vector ���� ��ÿ�����������ĺ����������
 *  ��д��ĳ��� ���Ҫ��������� 1 ������� 1 ��Ԫ�صĺͣ� ��������� 2 ���͵����� 2 ��Ԫ�صĺͣ� �Դ����ơ�)
 *  ����������2��������һ��s.begin��һ��s.end
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> text(10);
	int numdata, i = 1;
	while (cin >> numdata && i != 10)//ctrl+x+�س�  ��������
	{
		text.push_back(numdata);//push_back �����һ��ֵ���� vector �����βԪ�ء� ѹ���� push)�� vector ����ġ� β�ˣ� back)����
		i++;
	}
	for(auto vector_begin = text.begin(), vector_end = text.end(); vector_begin != vector_end; ++vector_begin)
	{
		cout << *vector_begin + *(vector_begin++) << " ";//���ּ������Ǵ�ģ���ʱ��֪��Ϊʲô
	}
	return 0;
}
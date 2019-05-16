/**=================================================================================================
 * @file	test3.25.cpp.
 *
 * Implements the test 3.25 class
 * ��ϰ 3.25: 3.3.3 �ڣ� �� 93 ҳ�� ���ַ����εĳ�����ʹ���±������ʵ�ֵģ� �����õ�������д�ó���ʵ����ȫ��ͬ�Ĺ��ܡ�
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> grade(10, 0);
	int scores, fraction;
	//��ʼ����������
	while (cin >> fraction && fraction <= 100)//ctrl+x+�س�  ��������
	{
		grade.push_back(fraction);//push_back �����һ��ֵ���� vector �����βԪ�ء� ѹ���� push)�� vector ����ġ� β�ˣ� back)����
	}
	//��������ȼ�
	vector<unsigned> alt_scores(11, 0);
	for (auto it = grade.begin(); it != grade.end(); ++it) {//������������Ҫ��ѭ����һ��
		unsigned i = *it;
		++(*(alt_scores.begin() + i / 10));
	}
	// ����Ŀǰ10�����»�ֱ����ʾΪ10
	// ���ÿ�������ȼ��ĸ���
	cout << "alt_scores.size = " << alt_scores.size() << endl;
	for (auto it = alt_scores.begin(); it != alt_scores.end(); ++it)
		cout << *it << " ";
	cout << endl;
}
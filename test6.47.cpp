/**=================================================================================================
 * @file	test6.47.cpp.
 *
 * Implements the test 6.47 class
 * ��ϰ 6.47: ��д 6.3.2 �ڣ� �� 205 ҳ ����ϰ��ʹ�õݹ���� vector ���ݵĳ��� ʹ���������������ִ�й����йص���Ϣ�� 
 * ���磬 ÿ�ε���ʱ��� vector ����Ĵ�С�� �ֱ��ڴ򿪺͹رյ�����������±��벢ִ���������
 *===============================================================================================**/
#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> vlnt, unsigned index) {
	unsigned sz = vlnt.size();
#ifndef NDEBUG//û�ж��壬ִ���м����
	cout << "vector����Ĵ�С�ǣ�" <<" "<< sz << endl;
	//Ԥ����������ļ�������������
	cerr << __FILE__<<endl;
	cerr << __FILEW__<<endl;
	cerr << __func__<<endl;
	cerr << __TIME__<<endl;
#endif 
	if (!vlnt.empty() && index < sz) {
		cout << vlnt[index] << endl;
		print(vlnt, index + 1);
		}
}
int main() {
	vector<int> v = { 1,3,5,7,9,11,13,15 };
		print(v, 0);
	return 0;
}

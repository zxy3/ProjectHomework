/**=================================================================================================
 * @file	test6.4.cpp.
 *
 * Implements the test 6.4 class
 * ��ϰ 6.4: ��дһ�����û������ĺ����� Ҫ���û�����һ�����֣� �������ɸ����ֵĽ׳ˡ� �� main �����е��øú�����
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int getFactorial(int i) {
	int index = i;
	int product = 1;
	while (index != 0) {
		product *= index--;
	}
	return product;
}
int  main() {
	int i;
	cout<<"����׳�����"<<" ";
	cin >> i;
	cout <<i<<"�׳��ǣ�"<<" "<< getFactorial(i) << endl;
}
/**=================================================================================================
 * @file	test3.8.cpp.
 *
 * Implements the test 3.8 class
 * ��ϰ 3.8: �ֱ��� while ѭ���ʹ�ͳ�� for ѭ����д��һ��ĳ��� �����������ʽ�����أ� Ϊʲô��
 * ���������⣬��������֮ǰ�Ĵ��룬���º�Ĵ��벻���ܡ�
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s("hello world1155!!");//�ַ���Ҳ�����Լ�����
	cout << s << endl;
	//c++ 11forѭ��
	for (auto& i : s) {
		i = 'X';//�ո��ַ�Ҳ�ᴦ���X
	}
	cout << s << endl;
	//c++��ͳѭ��
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]);++index) {
		/*if (isspace(s[i])) {
			s[i] =' ';
		}
		else {*/
			s[index] = 'X';//�ո��ַ�Ҳ�ᴦ���X
			//s[index] = toupper(s[index]);
		//}
	}
	cout << s << endl;
	//c++ whileѭ��
	auto j = 0;
	while (j < s.size()) {
		s[j] = 'X';//�ո��ַ�Ҳ�ᴦ���X
		j++;
	}
	cout << s << endl;

	//test  !isspace
	string w("some string");
	for (decltype(w.size()) index = 0;index != w.size() && !isspace(w[index]); ++index)
		w[index]= toupper(w[index]);
	cout << w;
}
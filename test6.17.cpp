/**=================================================================================================
 * @file	test6.17.cpp.
 *
 * Implements the test 6.17 class
 * ��ϰ 6.17: ��дһ�������� �ж� string �������Ƿ��д�д��ĸ�� 
 * ��д��һ������,�� string ����ȫ���ĳ�Сд��ʽ�� ����������������ʹ�õ��β�������ͬ�� Ϊʲô��
 *===============================================================================================**/
#include<iostream>
#include<string>
#include <ctype.h>
using namespace std;
void judgeCap(const string& word) {
	cout << word << endl;
	string::size_type i = word.size();
	while (i > 0) {
		if (islower(word[i])) {
			/*bool index = islower(word[i]);
			cout << index << endl;*/
			--i;
		}
		else {
			cout << "���뵥�ʺ��д�д��ĸ!" << endl;
			break;
		}
	}
}
string resetLowercase(string& word)//���������������壬My_string���ں������޸ģ����Բ���ʹ�ó������á�
{
	for (auto i = 0; i < word.size(); i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			word[i] = word[i] + 32;//��д��ĸСд��ĸ��ASCII��:a-z:97-122 A-Z:65-90 0-9:48-57
		}
	}
	return word;
}

int main() {
	cout << "�����뵥�ʣ�" << " ";
	string word;
	cin >> word;
    string& s = word;
	string up = resetLowercase(word);
	cout <<"�û�ΪСд��"<<" "<< up << endl;
	//judgeCap(s);
}
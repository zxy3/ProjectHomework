/**=================================================================================================
 * @file	test5.21.cpp.
 *
 * Implements the test 5.21 class
 * ��ϰ 5.21�� �޸� 5.5.1 �ڣ� �� 171 ҳ�� ��ϰ��ĳ��� ʹ���ҵ����ظ����ʱ����Դ�д��ĸ��ͷ��
 *===============================================================================================**/
#include <iostream>    
#include <string>    
#include <vector>    
using namespace std;
int main()
{
	string string1, temp;
	cout << "������2���ַ���:" << endl;
	cin >> string1;
	while (cin >> temp) {
		if (string1 == temp &&(string1[0]>='Z'|| string1[0] <= 'A')) {//Ϊʲô����д��string1[0]>='Z'&& string1[0] <= 'A'
			cout << "�ظ�����2�ε��ַ��������ַ���д����:" << " " << string1 << endl;
			break;
		}
		else {
			cout << "2���ַ�������ȣ����������1���ַ���������һ���ַ����Աȣ�" << endl;
			string1 = temp;
		}
	}
	return 0;
}


//continue�汾
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// int main()
// {
//	string string1, temp;
//	cout << "������2���ַ���:" << endl;
//	while (cin >> string1) {
//		if (string1[0] > 'Z' || string1[0] < 'A') {
//			cout << "����ĸ�Ǵ�д" << endl;
//			continue;
//		}
//		else {
//			break;
//		}
//	}
//	while (cin >> temp) {
//		if (temp[0] > 'Z' || temp[0] < 'A') {
//			cout << "����ĸ�Ǵ�д" << endl;
//			continue;
//		}
//		else {
//			if (string1 == temp) {//Ϊʲô����д��string1[0]>='Z'&& string1[0] <= 'A'
//				cout << "�ظ�����2�ε��ַ��������ַ���д����:" << " " << string1 << endl;
//				break;
//			}
//			else {
//				cout << "2���ַ�������ȣ����������1���ַ���������һ���ַ����Աȣ�" << endl;
//				string1 = temp;
//			}
//		}
//	}
//	return 0;
// }

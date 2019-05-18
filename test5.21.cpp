/**=================================================================================================
 * @file	test5.21.cpp.
 *
 * Implements the test 5.21 class
 * 练习 5.21： 修改 5.5.1 节（ 第 171 页） 练习题的程序， 使其找到的重复单词必须以大写字母开头。
 *===============================================================================================**/
#include <iostream>    
#include <string>    
#include <vector>    
using namespace std;
int main()
{
	string string1, temp;
	cout << "请输入2个字符串:" << endl;
	cin >> string1;
	while (cin >> temp) {
		if (string1 == temp &&(string1[0]>='Z'|| string1[0] <= 'A')) {//为什么不能写成string1[0]>='Z'&& string1[0] <= 'A'
			cout << "重复出现2次的字符串且首字符大写的是:" << " " << string1 << endl;
			break;
		}
		else {
			cout << "2个字符串不相等，请继续输入1个字符串，与上一个字符串对比：" << endl;
			string1 = temp;
		}
	}
	return 0;
}


//continue版本
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// int main()
// {
//	string string1, temp;
//	cout << "请输入2个字符串:" << endl;
//	while (cin >> string1) {
//		if (string1[0] > 'Z' || string1[0] < 'A') {
//			cout << "首字母非大写" << endl;
//			continue;
//		}
//		else {
//			break;
//		}
//	}
//	while (cin >> temp) {
//		if (temp[0] > 'Z' || temp[0] < 'A') {
//			cout << "首字母非大写" << endl;
//			continue;
//		}
//		else {
//			if (string1 == temp) {//为什么不能写成string1[0]>='Z'&& string1[0] <= 'A'
//				cout << "重复出现2次的字符串且首字符大写的是:" << " " << string1 << endl;
//				break;
//			}
//			else {
//				cout << "2个字符串不相等，请继续输入1个字符串，与上一个字符串对比：" << endl;
//				string1 = temp;
//			}
//		}
//	}
//	return 0;
// }

/**=================================================================================================
 * @file	test5.20.cpp.
 *
 * Implements the test 5.20 class
 * 练习 5.20： 编写一段程序， 从标准输入中读取 string 对象的序列直到连续出现两个相同的单词或者所有单词都读完为止。 
 * 使用 while 循环一次读取一个单词， 当一个单词连续出现两次时使用 break 语句终止循环。 
 * 输出连续重复出现的单词， 或者输出一个消息说明没有任何单词是连续重复出现的。
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
		if (string1 == temp) {
			cout << "重复出现2次的字符串是:" <<" "<< string1 << endl;
			break;
		}
		else {
			cout << "2个字符串不相等，请继续输入1个字符串，与上一个字符串对比：" << endl;
			string1 = temp;
		}
	}
	return 0;
}
/**=================================================================================================
 * @file	test3.8.cpp.
 *
 * Implements the test 3.8 class
 * 练习 3.8: 分别用 while 循环和传统的 for 循环重写第一题的程序， 你觉得哪种形式更好呢？ 为什么？
 * 测试有问题，编译后会跑之前的代码，更新后的代码不会跑。
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s("hello world1155!!");//字符串也可以自己输入
	cout << s << endl;
	//c++ 11for循环
	for (auto& i : s) {
		i = 'X';//空格字符也会处理成X
	}
	cout << s << endl;
	//c++传统循环
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]);++index) {
		/*if (isspace(s[i])) {
			s[i] =' ';
		}
		else {*/
			s[index] = 'X';//空格字符也会处理成X
			//s[index] = toupper(s[index]);
		//}
	}
	cout << s << endl;
	//c++ while循环
	auto j = 0;
	while (j < s.size()) {
		s[j] = 'X';//空格字符也会处理成X
		j++;
	}
	cout << s << endl;

	//test  !isspace
	string w("some string");
	for (decltype(w.size()) index = 0;index != w.size() && !isspace(w[index]); ++index)
		w[index]= toupper(w[index]);
	cout << w;
}
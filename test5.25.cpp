/**=================================================================================================
 * @file	test5.25.cpp.
 *
 * Implements the test 5.25 class
 * 练习 5.25: 修改上一题的程序， 使用 try 语句块去捕获异常。 catch 子句应该为用户输出一条提示信息， 
 * 询问其是否输入新数并重新执行 try语句块的内容。
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int num1, num2;
	cout << "请输入2个数字" << endl;
	while (cin >> num1) {
		try {
			cin >> num2;
			if (num2 == 0) {
				throw runtime_error("输入错误：除数不能为0。");
			}
		}
		catch (runtime_error err)
		{
			cout << err.what() << "  " << "\n是否需要重新输入? Enter y or n:" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n') {
				break;
			}
			else {
				cout << "请输入2个数字" << endl;
				continue;
			}
		}
		cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		cout << "请继续输入！" << endl;
	}
}
		
/**=================================================================================================
 * @file	test4.22.cpp.
 *
 * Implements the test 4.22 class
 * 练习 4.22: 本节的示例程序将成绩划分成 high pass、 pass 和 fail 三种， 扩展该程序使其进一步将 60 分到 75 分之间的成绩设定为 low pass。 
 * 要求程序包含两个版本： 一个版本只使用条件运算符； 另外一个版本使用 1 个或多个 if 语句。 哪个版本的程序更容易理解呢？ 为什么？
 *===============================================================================================**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int score;
	cout << "Please Input the grade :";
	cin >> score;
	string finalgrade;
	finalgrade = (score >= 90) ? "high" : (score >= 70) ? "pass" : (score >= 60) ? "Low pass" : "fail";
	cout << finalgrade;
	return 0;
}
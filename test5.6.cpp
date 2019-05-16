/**=================================================================================================
 * @file	练习5.6.cpp.
 *
 * Implements the 5.6 class
 * 练习 5.6: 改写上一题的程序， 使用条件运算符（ 参见 4.7 节， 第 134 页） 代替 if else语句。
 *===============================================================================================**/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	cout << "请输入你的成绩:" << " ";
	int score;
	cin >> score;
	while (score > 100 || score < 0) {
		cout << "输入非法,请重输！" << endl;
		cin >> score;
	}
	cout << "输入的成绩是：" << " " << score << endl;
	cout << "等级为：" << " ";
	string finalgrade;
	finalgrade = (score > 90) ? "A": (score < 60) ? "E" : ((score < 70)&& (score > 60)) ? "D" 
		: ((score < 80) && (score > 70)) ? "C" : "B";
	cout <<finalgrade<<endl;
}
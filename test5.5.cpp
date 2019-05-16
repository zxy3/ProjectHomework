/**=================================================================================================
 * @file	test5.5.cpp.
 *
 * Implements the test 5.5 class
 * 练习 5.5: 写一段自己的程序， 使用 if else 语句实现把数字成绩转换成字母成绩的要求。
 * 
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
	cout <<"输入的成绩是："<<" "<< score<<endl;
	cout << "等级为：" << " ";
	if (90 < score&&score < 100) {
		cout << "A" << endl;
	}
	else if (80 < score && score < 90) {
		cout << "B" << endl;
	}
	else if (70 < score && score < 80) {
		cout << "C" << endl;
	}
	else if (60 < score && score < 70) {
		cout << "D" << endl;
	}
	else {
		cout << "E" << endl;
	}
}
/**=================================================================================================
 * @file	test7.5.cpp.
 *
 * Implements the test 7.5 class
 * 练习 7.5: 在你的 Person 类中提供一些操作使其能够返冋姓名和住址。 这些函数是否应该是 const 的呢？ 解释原因。
 *  
 *  仅读取不改变：const
 *===============================================================================================**/
#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	string strName; //姓名
	string strAddress; // 地址
public:		
	string getName() const { return strName; } // 返回姓名
	string getAddress() const { return strAddress; } // 返回地址
};
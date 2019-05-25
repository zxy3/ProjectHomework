/**=================================================================================================
 * @file	test7.5.cpp.
 *
 * Implements the test 7.5 class
 * 练习 7.5: 在你的 Person 类中提供一些操作使其能够返冋姓名和住址。 这些函数是否应该是 const 的呢？ 解释原因。
 *  
 *  仅读取不改变：const
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Person
{
public:
	Person(string Client_name, string Client_address);//构造函数
	Person();//构造函数的重载

	string name;
	string address;

	void Show_info()
	{
		cout << name << "'s" << " address is " <<" "<<address << endl;
	}

	string& const getname()
	{
		return name;
	}
	string& const getaddress()
	{
		return address;
	}
	std::istream& read(std::istream& is, Person& per) {
		is >> per.name >> per.address;
		return is;
	}
	std::ostream &print(std::ostream& os, const Person& per) {
		os << per.name << per.address;
		os << "\n";
		return os;
	}
};

Person::Person(string Client_name, string Client_address) :name(Client_name), address(Client_address) {};//构造函数定义内部变量
//此处我们在一个文件内定义了该类，如若类较大，应置于.h文件中
int main(int argc, char** argv)
{
	Person Client1("Mr.right", "your heart");    
	Client1.Show_info();   
	return 0;
}
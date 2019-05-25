/**=================================================================================================
 * @file	test7.5.cpp.
 *
 * Implements the test 7.5 class
 * ��ϰ 7.5: ����� Person �����ṩһЩ����ʹ���ܹ�����������סַ�� ��Щ�����Ƿ�Ӧ���� const ���أ� ����ԭ��
 *  
 *  ����ȡ���ı䣺const
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Person
{
public:
	Person(string Client_name, string Client_address);//���캯��
	Person();//���캯��������

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

Person::Person(string Client_name, string Client_address) :name(Client_name), address(Client_address) {};//���캯�������ڲ�����
//�˴�������һ���ļ��ڶ����˸��࣬������ϴ�Ӧ����.h�ļ���
int main(int argc, char** argv)
{
	Person Client1("Mr.right", "your heart");    
	Client1.Show_info();   
	return 0;
}
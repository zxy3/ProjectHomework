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
public://����Ϊpublic
	Person(string Client_name, string Client_address);//���캯��
	Person();//���캯��������

	string name;
	string address;//�ڲ�����

	void Show_info()
	{
		cout << name << "'s" << " address is " << address << endl;
	}//���ڶ��庯��

	string& const getname()
	{
		return name;
	}
	string& const getaddress()
	{
		return address;
	}//����������ַ�ĺ�����ֻ�ɷ��ʣ������޸�
};
Person::Person(string Client_name, string Client_address) :name(Client_name), address(Client_address) {};//���캯�������ڲ�����
//�˴�������һ���ļ��ڶ����˸��࣬������ϴ�Ӧ����.h�ļ���
int main(int argc, char** argv)
{
	Person Client1("Mr.right", "your heart");    //ʵ����
	Client1.Show_info();    //�������е���ʾ��Ϣ����
	return 0;
}
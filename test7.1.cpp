/**=================================================================================================
 * @file	test7.1.cpp.
 *
 * Implements the test 7.1 class
 * ��ϰ 7.1: ʹ�� 2.6.1 ����ϰ����� Sales_data ��Ϊ 1.6 �� �� �� 21 ҳ�� �Ľ��״�������дһ���°汾��
 * 
 * C++�е� struct �� class ������ͨ�õģ�Ψ�м���ϸ�ڲ�ͬ��
 * 1:ʹ�� class ʱ�����еĳ�ԱĬ�϶��� private ���Եģ���ʹ�� struct ʱ���ṹ���еĳ�ԱĬ�϶��� public ���Եġ�
 * 2:class �̳�Ĭ���� private �̳У��� struct �̳�Ĭ���� public �̳С�  
 * 3:class ����ʹ��ģ�壬�� struct ���ܡ�
 *===============================================================================================**/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
struct Sales_data {
	Sales_data();
	string bookNo;
	unsigned units_sold;
	double revenue;
};
Sales_data::Sales_data()
{
	units_sold = 0;
	revenue = 0.0;
}

int main(int argc, char** argv)
{
	Sales_data total;
	//�ֱ��� bookNo ( �鼮��ţ��� units_sold	(����������revenue(�������룩��trans�����ۼ�¼��
	cout<<"�����뽻�׼�¼( ISBN������������������ ���� "<<endl;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		cout << "������һ����¼�� " << endl;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;//�鿯����ͬ�����������
				total.revenue += trans.revenue;//�鿯����ͬ�������������
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << endl;
			}
			else {
				cout << "�鿯�Ų�ͬ" << " ";
				cout << trans.bookNo << " " << trans.units_sold << " "<< trans.revenue << endl;//�鿯�Ų�ͬ������Ϣ
				total = trans;
			}
			cout << "������һ����¼�� " << endl;
		}
		//cout << total.bookNo << " " << total.units_sold << " " << total.revenue<< endl;
	}
	else {
		std::cerr << "No data?!" << std::endl;//��������
		return -1;
	}
	return 0;
}
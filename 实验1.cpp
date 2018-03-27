#include <iostream>
#include <string>
using namespace std;
class Employee{
public:
	Employee(string m_name,string m_address,string m_city,int m_postcode);
	Employee(){};
	~Employee(){};
	void changename();
	void display();
	void setname(string n)
	{
		name=n;
	}
	void setaddress(string a)
	{
		address=a;
	}
	void setcity(string c)
	{
		city=c;
	}
	void setpostcode(int p)
	{
		postcode=p;
	}
private:
	string name;
	string address;
	string city;
	int postcode;
};
Employee::Employee(string m_name,string m_address,string m_city,int m_postcode)
{
	name=m_name;
	address=m_address;
	city=m_city;
	postcode=m_postcode;
}
void Employee::display()
{
	cout<<"����:"<<name<<endl;
	cout<<"�ֵ�:"<<address<<endl;
	cout<<"����:"<<city<<endl;
	cout<<"�ʱ�:"<<postcode<<endl;
}
void Employee::changename()
{
	string n;
	getline(cin,n,'\n');
	name=n;
}
void main()
{
	int i;
	Employee e[5];
	for(i=0;i<5;i++)
	{
		cout<<"�����"<<i+1<<"�����������ֵ������к��ʱ�(��5��):"<<endl;
		string m_name,m_address,m_city;
		int m_postcode;
		cin>>m_name>>m_address>>m_city;
		cin>>m_postcode;
		e[i].setname(m_name);
		e[i].setaddress(m_address);
		e[i].setcity(m_city);
		e[i].setpostcode(m_postcode);
	}
	cout<<"*************�����Ϣ*************"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"***�����"<<i+1<<"������Ϣ::"<<endl;
		e[i].display();
	}
}
 

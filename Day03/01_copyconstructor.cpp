/*
	copyconstructor(���������)	
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char m_name[20];
	int m_age;
public:
	Person(const char* name, int age) 
	{
		cout << "Constructor call!!" << endl;
		strcpy(m_name, name);
		m_age = age;
	}
	void printPerson()
	{
		cout << "name: " << m_name << ", " << "age: " << m_age << endl;
	}
};

int main()
{

	Person p("ȫ�浿", 30);
	p.printPerson();
								// ���� �����ڸ� ����Ʈ�� �������� - "Constructor call!!" ����� ������ ����
	Person p2(p);				// ���� ������ ��� ȣ�� 1
	p2.printPerson();
	
	Person p3 = p;				// ���� ������ ��� ȣ�� 2
	p3.printPerson();

	
	return 0;
}
/*
	
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class MyClass
{
private:
	int id;
	char name[20];
	int age;
public:
	MyClass() {} // �⺻������

	MyClass(int _id, const char* _name, int _age) // �Ű������� �ִ� ������
	{
		this -> id = _id;
		strcpy(this -> name, _name);
		this -> age = _age;
	}

	void getData()
	{
		cout << "ID: " << id << endl;
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};

int main()
{
	MyClass obj;
	MyClass obj2(1, "��ö��", 20);
	obj2.printData();
	return 0;
}
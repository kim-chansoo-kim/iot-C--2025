/*
	���ڿ� ����Ҷ� ����� ����ϴ°� ű
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
	void setData(int _id, const char* _name, int _age)
	{
		id = _id;
		strcpy(name, _name);
		age = _age;
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
	obj.setData(1, "��ö��", 20);
	obj.getData();
	return 0;
}
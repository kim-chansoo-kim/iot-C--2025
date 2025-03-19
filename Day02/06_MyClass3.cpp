/*
	MyClass 3
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class MyClass
{
private:
	int id;
	char* name;
	int age;
public:
	MyClass() : id(0), age(0), name(nullptr) {}		// �⺻������ �ʱ�ȭ ����

	MyClass(int _id, const char* _name, int _age)	// �Ű������� �ִ� ������
	{
		id = _id;
		name = new char[strlen(_name) + 1];			// ���� �޸� �Ҵ�
		strcpy(name, _name);						// char�� ������ �ʱ�ȭ
		age = _age;
	}

	~MyClass()										// �Ҹ���(�ڵ�ȣ��, �����Ҵ��� ����� ������ �ۼ��� �ʿ����)
	{
		delete name;								// ���� �޸� ���� [] == Ÿ���� �迭�� �ƴϱ� ������ �ʿ䰡 ����
	}

	void getData()
	{
		cout << "ID: " << id << endl << "�̸�: " << name << endl << "����: " << age << endl;
	}
};

int main()
{
	MyClass obj2(1, "��ö��", 20);
	obj2.getData();
	return 0;
}
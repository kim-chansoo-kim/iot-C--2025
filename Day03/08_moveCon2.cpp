/*
	�̵� ������(T&&)
	r-value ���۷���(reference) �� �Ķ���ͷ� ���� �̵� ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char name[10];
	int age;
public:
	// �Է�2�� �޴� ������
	Human(const char* _name, int _age)
	{
		cout << "������ ȣ��" << endl;
		strncpy(this->name, _name, (strlen(_name) + 1));
		this->age = _age;
	}

	// ���� ������
	Human(const Human& other)
	{
		cout << "���� ������ ȣ��" << endl;
		strncpy(this->name, other.name, (strlen(other.name) + 1));
		this->age = other.age;
	}

	// �̵� ������
	Human(Human&& other)
	{
		cout << "�̵� ������ ȣ��" << endl;
		strncpy(this->name, other.name, (strlen(other.name) + 1));
		this->age = other.age;
	}

	void printHuman()
	{
		cout << "�̸�: " << name << ", " << "����: " << age << endl << endl;
	}
};

int main()
{
	Human h("ȫ�浿", 30);
	h.printHuman();

	Human h2(h);
	h2.printHuman();

	Human h3 = move(h);		// Human h3(move(h));
	h3.printHuman();
	return 0;
}
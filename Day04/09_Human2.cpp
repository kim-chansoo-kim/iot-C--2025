/*
	step4
	char �������� name, int Ÿ���� age, ��� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
	xman = copyman�� �����Ű�ÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human
{
private:
	char* name;
	int age;
public:
	// �⺻ ������
	Human(const char* n = " ", int a = 0) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(this->name, n);
	}

	// ���� ������
	Human(const Human& other) : age(other.age)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
	
	}

	//// ���� ���� ������
	//Human& operator=(const Human& other)
	//{
	//		name = new char[strlen(other.name) + 1];
	//		strcpy(this->name, other.name);
	//		age = other.age;
	//	return *this;
	//}

	// �Ҹ���
	~Human() { delete[] name; }

	// ��� �Լ�
	void showHuman() const
	{
		std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
	}
	Human& operator=(const Human& rhs);
};
Human& Human::operator=(const Human& rhs)
{
	if (this != &rhs)
	{	
		delete[] name;
		this->name = new char[strlen(rhs.name) + 1];
		strcpy(this->name, rhs.name);
		this->age = rhs.age;
	}

	return *this;
}


int main()
{
	Human man("ȫ��", 56);
	man.showHuman();

	Human copyman = man;
	copyman.showHuman();

	Human xman;
	xman = copyman;
	xman.showHuman();

	return 0;
}
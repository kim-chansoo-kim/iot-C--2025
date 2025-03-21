/*
	step3
	char �������� name, int Ÿ���� age, ��� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
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
	Human(const char* n = " ", int a = 0)
	{
		name = new char[strlen(n) + 1];
		strcpy(this->name, n);
		a = age;
	}

	// ���� ������
	Human(const Human& other)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		age = other.age;
	}

	// �Ҹ���
	~Human() { delete[] name; }

	// ��� �Լ�
	void showHuman() const
	{
		std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
	}
};

int main()
{
	Human man("ȫ��", 30);
	man.showHuman();

	Human copyman = man;
	copyman.showHuman();
	return 0;
}
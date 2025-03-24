/*
	Inhertance(���)2 - class ���ο� ������ ����
	protected ���������ڴ� ��ӹ��� �ڽ��� ���� �����ϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Human
{
protected:
	char name[20];
	int age;
public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	}
	void getData()
	{
		std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
	}
};

class Student : public Human
{
private:
	int studentID;
public:
	Student(const char* aname, int aage, int astudentID) : Human(aname, aage)
	{
		studentID = astudentID;
	}
	void showStudent()
	{
		std::cout << "�̸�: " << name << ", ����: " << age << ", �й�: " << studentID << std::endl; // protected�� ó�� ����
	}
};

int main()
{
	Human h("ȫ�浿", 30);
	h.getData();

	Student h2("�Ӳ���", 25, 202503);
	h2.getData();
	h2.showStudent();

	return 0;
}
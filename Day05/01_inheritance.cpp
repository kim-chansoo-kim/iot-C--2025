/*
	Inhertance(���)
	private, public, protected
	is a(������ �����̴�, ����), has a(���� ����) ���谡 �����ؾ� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Human										// �θ�Ŭ����, ����Ŭ����, ����Ŭ����, ���̽�Ŭ����
{
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};

class Student : public Human					// �ڽ�Ŭ����, �Ļ�Ŭ����, ����Ŭ����, ����̹��� Ŭ����
{
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID);
	void showStudent();
};
// HumanŬ���� ����Human
Human::Human(const char* aname, int aage)
{
	strcpy(name, aname);
	age = aage;
}
// Humna����Լ� getData
void Human::getData()
{
	std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
}
// ��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ�.
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage)
{
	/*strcpy(name, aname);
	age = aage;*/ // �Ⱦ�
	studentID = astudentID;
}

void Student::showStudent()
{
	//std::cout << "�̸�: " << name << std::endl; // �ڽ��� �θ� ���� �Ұ���.
	std::cout << "�й�: " << studentID << std::endl;
}

int main()
{
	Human h("ȫ�浿", 30);
	h.getData();

	Student h2("�Ӳ���", 25, 202503);
	h2.getData();
	h2.showStudent();

	return 0;
}
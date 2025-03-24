/*
	Inhertance(상속)2 - class 내부에 내용을 생성
	protected 접근제어자는 상속받은 자식이 접근 가능하다.
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
		std::cout << "이름: " << name << ", 나이: " << age << std::endl;
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
		std::cout << "이름: " << name << ", 나이: " << age << ", 학번: " << studentID << std::endl; // protected로 처리 가능
	}
};

int main()
{
	Human h("홍길동", 30);
	h.getData();

	Student h2("임꺽정", 25, 202503);
	h2.getData();
	h2.showStudent();

	return 0;
}
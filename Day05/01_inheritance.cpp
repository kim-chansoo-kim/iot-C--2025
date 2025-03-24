/*
	Inhertance(상속)
	private, public, protected
	is a(무엇은 무엇이다, 관계), has a(소유 관계) 관계가 성립해야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Human										// 부모클래스, 기초클래스, 슈퍼클래스, 베이스클래스
{
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};

class Student : public Human					// 자식클래스, 파생클래스, 서브클래스, 드라이버드 클래스
{
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID);
	void showStudent();
};
// Human클래스 안의Human
Human::Human(const char* aname, int aage)
{
	strcpy(name, aname);
	age = aage;
}
// Humna출력함수 getData
void Human::getData()
{
	std::cout << "이름: " << name << ", 나이: " << age << std::endl;
}
// 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화를 한다.
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage)
{
	/*strcpy(name, aname);
	age = aage;*/ // 안씀
	studentID = astudentID;
}

void Student::showStudent()
{
	//std::cout << "이름: " << name << std::endl; // 자식이 부모에 접근 불가능.
	std::cout << "학번: " << studentID << std::endl;
}

int main()
{
	Human h("홍길동", 30);
	h.getData();

	Student h2("임꺽정", 25, 202503);
	h2.getData();
	h2.showStudent();

	return 0;
}
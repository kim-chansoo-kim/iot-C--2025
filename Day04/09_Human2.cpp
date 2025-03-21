/*
	step4
	char 포인터의 name, int 타입의 age, 출력 담당하는 showHuman()을 가지는 Human 클래스가 있다.
	name을 동적할당하고 나이 30, 이름 홍명보인 man객체를 생성하시오.
	man 객체를 복사하여 copyman 객체를 생성하시오.
	xman = copyman을 실행시키시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human
{
private:
	char* name;
	int age;
public:
	// 기본 생성자
	Human(const char* n = " ", int a = 0) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(this->name, n);
	}

	// 복사 생성자
	Human(const Human& other) : age(other.age)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
	
	}

	//// 복사 대입 연산자
	//Human& operator=(const Human& other)
	//{
	//		name = new char[strlen(other.name) + 1];
	//		strcpy(this->name, other.name);
	//		age = other.age;
	//	return *this;
	//}

	// 소멸자
	~Human() { delete[] name; }

	// 출력 함수
	void showHuman() const
	{
		std::cout << "이름: " << name << ", 나이: " << age << std::endl;
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
	Human man("홍명보", 56);
	man.showHuman();

	Human copyman = man;
	copyman.showHuman();

	Human xman;
	xman = copyman;
	xman.showHuman();

	return 0;
}
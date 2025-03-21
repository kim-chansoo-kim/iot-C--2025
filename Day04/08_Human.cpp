/*
	step3
	char 포인터의 name, int 타입의 age, 출력 담당하는 showHuman()을 가지는 Human 클래스가 있다.
	name을 동적할당하고 나이 30, 이름 홍명보인 man객체를 생성하시오.
	man 객체를 복사하여 copyman 객체를 생성하시오.
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
	Human(const char* n = " ", int a = 0)
	{
		name = new char[strlen(n) + 1];
		strcpy(this->name, n);
		a = age;
	}

	// 복사 생성자
	Human(const Human& other)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		age = other.age;
	}

	// 소멸자
	~Human() { delete[] name; }

	// 출력 함수
	void showHuman() const
	{
		std::cout << "이름: " << name << ", 나이: " << age << std::endl;
	}
};

int main()
{
	Human man("홍명보", 30);
	man.showHuman();

	Human copyman = man;
	copyman.showHuman();
	return 0;
}
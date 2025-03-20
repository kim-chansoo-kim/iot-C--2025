/*
	이동 생성자(T&&)
	r-value 레퍼런스(reference) 를 파라미터로 갖는 이동 생성자
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
	// 입력2개 받는 생성자
	Human(const char* _name, int _age)
	{
		cout << "생성자 호출" << endl;
		strncpy(this->name, _name, (strlen(_name) + 1));
		this->age = _age;
	}

	// 복사 생성자
	Human(const Human& other)
	{
		cout << "복사 생성자 호출" << endl;
		strncpy(this->name, other.name, (strlen(other.name) + 1));
		this->age = other.age;
	}

	// 이동 생성자
	Human(Human&& other)
	{
		cout << "이동 생성자 호출" << endl;
		strncpy(this->name, other.name, (strlen(other.name) + 1));
		this->age = other.age;
	}

	void printHuman()
	{
		cout << "이름: " << name << ", " << "나이: " << age << endl << endl;
	}
};

int main()
{
	Human h("홍길동", 30);
	h.printHuman();

	Human h2(h);
	h2.printHuman();

	Human h3 = move(h);		// Human h3(move(h));
	h3.printHuman();
	return 0;
}
/* 
	copyconstructor - 예제 name을 동적 할당으로 받기
	동적할당 받은경우 복사하는 객체도 동적 할당 받아서 별개로 복사하여 저장이 되어야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	// 생성자
	Person(const char* name, int age)
	{
		cout << "constructor call!!" << endl;
		this->name = new char[strlen(name) + 1];		// 동적 할당
		strcpy(this->name, name);
		this->age = age;
	}
	// 복사 생성자
	Person(const Person& other)
	{
		cout << "copy constructor!!" << endl;
		this->name = new char[strlen(other.name) + 1];	// 복사 생성자에서 동적할당을 하면 깊은 복사(안하면 얕은 복사)
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	// 출력함수
	void printPerson()
	{
		cout << "name: " << this->name << ", " << "age: " << this->age << endl;
	}

	~Person() { delete[] this->name; }
};

int main()
{
	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();
	return 0;
}
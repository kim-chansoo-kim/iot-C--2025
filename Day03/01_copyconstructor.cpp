/*
	copyconstructor(복사생성자)	
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char m_name[20];
	int m_age;
public:
	Person(const char* name, int age) 
	{
		cout << "Constructor call!!" << endl;
		strcpy(m_name, name);
		m_age = age;
	}
	void printPerson()
	{
		cout << "name: " << m_name << ", " << "age: " << m_age << endl;
	}
};

int main()
{

	Person p("홍길동", 30);
	p.printPerson();
								// 복사 생성자를 디폴트로 생성해줌 - "Constructor call!!" 출력이 나오지 않음
	Person p2(p);				// 복사 생성자 방식 호출 1
	p2.printPerson();
	
	Person p3 = p;				// 복사 생성자 방식 호출 2
	p3.printPerson();

	
	return 0;
}
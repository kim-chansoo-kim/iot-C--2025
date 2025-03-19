/*
	MyClass 3
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class MyClass
{
private:
	int id;
	char* name;
	int age;
public:
	MyClass() : id(0), age(0), name(nullptr) {}		// 기본생성자 초기화 까지

	MyClass(int _id, const char* _name, int _age)	// 매개변수가 있는 생성자
	{
		id = _id;
		name = new char[strlen(_name) + 1];			// 동적 메모리 할당
		strcpy(name, _name);						// char은 무조건 초기화
		age = _age;
	}

	~MyClass()										// 소멸자(자동호출, 동적할당경우 말고는 별도로 작성할 필요없음)
	{
		delete name;								// 동적 메모리 해제 [] == 타입이 배열이 아니기 때문에 필요가 없음
	}

	void getData()
	{
		cout << "ID: " << id << endl << "이름: " << name << endl << "나이: " << age << endl;
	}
};

int main()
{
	MyClass obj2(1, "김철수", 20);
	obj2.getData();
	return 0;
}
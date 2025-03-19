/*
	
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class MyClass
{
private:
	int id;
	char name[20];
	int age;
public:
	MyClass() {} // 기본생성자

	MyClass(int _id, const char* _name, int _age) // 매개변수가 있는 생성자
	{
		this -> id = _id;
		strcpy(this -> name, _name);
		this -> age = _age;
	}

	void getData()
	{
		cout << "ID: " << id << endl;
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

int main()
{
	MyClass obj;
	MyClass obj2(1, "김철수", 20);
	obj2.printData();
	return 0;
}
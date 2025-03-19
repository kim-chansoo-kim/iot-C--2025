/*
	문자열 출력할때 복사로 출력하는게 킥
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
	void setData(int _id, const char* _name, int _age)
	{
		id = _id;
		strcpy(name, _name);
		age = _age;
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
	obj.setData(1, "김철수", 20);
	obj.getData();
	return 0;
}
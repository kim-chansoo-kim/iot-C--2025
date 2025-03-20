/* 
	copyconstructor - ���� name�� ���� �Ҵ����� �ޱ�
	�����Ҵ� ������� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ �����Ͽ� ������ �Ǿ�� �Ѵ�.
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
	// ������
	Person(const char* name, int age)
	{
		cout << "constructor call!!" << endl;
		this->name = new char[strlen(name) + 1];		// ���� �Ҵ�
		strcpy(this->name, name);
		this->age = age;
	}
	// ���� ������
	Person(const Person& other)
	{
		cout << "copy constructor!!" << endl;
		this->name = new char[strlen(other.name) + 1];	// ���� �����ڿ��� �����Ҵ��� �ϸ� ���� ����(���ϸ� ���� ����)
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	// ����Լ�
	void printPerson()
	{
		cout << "name: " << this->name << ", " << "age: " << this->age << endl;
	}

	~Person() { delete[] this->name; }
};

int main()
{
	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();
	return 0;
}
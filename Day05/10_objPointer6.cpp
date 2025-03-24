/*
	�ٿ�ĳ����: �ڽ� �����ͷ� �θ� ��ü�� ����ų �� ����.
*/
#include <iostream>

class Base
{
public:
	void show() { std::cout << "Base Class" << std::endl; }
};

class Derived : public Base
{
public:
	void show() { std::cout << "Derived Class" << std::endl; }
};

int main()
{
	Base bobj();
	Derived* dptr = nullptr;
	/*Derived* dptr = &bobj;
	dptr = (Base*) & bobj;
	dptr->show();*/

	dptr = (Derived*)&bobj;
	dptr->show();

	return 0;
}
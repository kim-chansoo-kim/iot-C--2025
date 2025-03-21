/*
	���� ������ �����ε�: ��ȯ�� operator������()
*/
#include <iostream>

class Money
{
private:
	int money;
public:
	Money(int m = 0) : money(m){}
	int operator()()
	{
		return money;
	}
	void operator()(int m)
	{
		money += m;
	}
};

int main() 
{
	Money m;
	std::cout << "money: " << m.operator()() << std::endl;
	m(1000);
	std::cout << "money: " << m.operator()() << std::endl;
	m.operator()(1000);
	std::cout << "money: " << m.operator()() << std::endl;
	return 0;
}
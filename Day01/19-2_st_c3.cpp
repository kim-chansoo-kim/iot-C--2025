/*
	c++ class
*/
#include <iostream>
using namespace std;

class Human {
public:
	char name[20];
	int age;
	char job[10];

	Human() {}	// ����Ʈ ������ - �����ڴ� ���(Ÿ��)�� ���� - Ŭ������ �̸��� ����

	void showHuman()
	{
		printf("�̸�: %s, ����: %d, ����: %s", name, age, job);
	}
};

int main()
{
	Human h = { "��ö��", 30, "���" };
	h.showHuman();

	return 0;
}
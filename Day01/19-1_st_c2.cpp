/*
	c++ ����ü
*/
#include <iostream>
using namespace std;

typedef struct human{
	char name[20];
	int age;
	char job[10];

	void showHuman()
	{
		printf("�̸�: %s, ����: %d, ����: %s", name, age, job);
	}
}Human;


int main()
{
	Human h = { "��ö��", 30, "���" };
	h.showHuman();

	return 0;
}
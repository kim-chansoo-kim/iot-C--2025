/* 
	c ����ü 
*/
#include <iostream>

typedef struct
{
	char name[20];
	int age;
	char job[10];
}Human;

void showHuman(Human ah)
{
	printf("�̸�: %s, ����: %d, ����: %s", ah.name, ah.age, ah.job);
}

int main()
{
	Human h = { "��ö��", 30, "���" };
	showHuman(h);
	return 0;
}
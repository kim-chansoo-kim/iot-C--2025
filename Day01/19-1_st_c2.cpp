/*
	c++ 구조체
*/
#include <iostream>
using namespace std;

typedef struct human{
	char name[20];
	int age;
	char job[10];

	void showHuman()
	{
		printf("이름: %s, 나이: %d, 직업: %s", name, age, job);
	}
}Human;


int main()
{
	Human h = { "김철수", 30, "백수" };
	h.showHuman();

	return 0;
}
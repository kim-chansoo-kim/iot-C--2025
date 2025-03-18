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

	Human() {}	// 디폴트 생성자 - 생성자는 출력(타입)이 없음 - 클래스와 이름이 같음

	void showHuman()
	{
		printf("이름: %s, 나이: %d, 직업: %s", name, age, job);
	}
};

int main()
{
	Human h = { "김철수", 30, "백수" };
	h.showHuman();

	return 0;
}
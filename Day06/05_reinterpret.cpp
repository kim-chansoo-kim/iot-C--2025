/*
	reinterpret_cast
	포인터->포인터, 포인터->변수, 변수->포인터 로 하는 주로 포인터 관련 연산자.
*/
#include <iostream>

int main()
{
	int* ip = new int{ 10 };
	long  lg = reinterpret_cast<long>(ip);			// int* -> long
	unsigned int ui = reinterpret_cast<int>(ip);	// int* -> unit
	printf("ip: %p, lg: %p, ui: %p\n", ip, lg, ui);

	//int* p = reinterpret_cast<int*>(lg);
	int* p1 = reinterpret_cast<int*>(ui);
	printf("p1: %d\n", *p1);

	int* p = new int{ 100 };
	char* pc = reinterpret_cast<char*>(p);
	printf("c: %c\n", *pc);

	int* p2 = reinterpret_cast<int*>(pc);
	printf("p: %d\n", *p2);
	return 0;
}
/*
	
*/
#include <iostream>
#include "10_scope.h" // 내가만든 헤더파일을 사용하겠다

A::A(int aa) {
	a = aa;
}
void A::AInfo() {
	std::cout << "a: " << a << std::endl;
}
int main()
{
	A a(10);
	a.AInfo();

	return 0;
}
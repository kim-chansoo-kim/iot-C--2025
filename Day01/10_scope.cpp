/*
	
*/
#include <iostream>
#include "10_scope.h" // �������� ��������� ����ϰڴ�

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
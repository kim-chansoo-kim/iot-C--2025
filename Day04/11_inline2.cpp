/*
	��ũ�δ� ��ó���Ⱑ ó��������, inline �Լ��� �����̷��� ó���Ѵ�.
*/
#include <iostream>

#define SQUARE(X) ((X)*(X))
// �� �Ʒ� ���� ����
inline int func(int x)
{
	return x * x;
}

int main()
{
	// ���� �Ȱ����
	std::cout << SQUARE(2) << std::endl;
	std::cout << func(2) << std::endl;


	return 0;
}
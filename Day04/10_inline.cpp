/*
	
*/
#include <iostream>

#define ADD(a, b)		#a "+" #b		// ��ũ�� �Լ� - ���� ģ���� �ڿ� ������ �ٲ��
#define PI				3.14
#define MSG(x, y, z)	x ## y ## z

int main()
{
	std::cout << "ADD(a, b): " << ADD(10, 20) << std::endl;;
	std::cout << "PI: " << PI << std::endl;
	std::cout << "MSG(x, y, z): " << MSG("macro+", "operator+", "test") << std::endl;

	return 0;
}
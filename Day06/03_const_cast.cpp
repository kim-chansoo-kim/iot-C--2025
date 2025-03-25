/*
	
*/
#include <iostream>

int main()
{
	int num = 10;
	std::cout << "num + 1: " << ++num << std::endl;

	const int num2 = 10;
	//std::cout << ++num2 << std::endl;	// 상수 값변환 못함

	//int* np = const_cast<int*>(&num2);
	//*np = *np + 1;
	//std::cout << "num2: " << num2 << std::endl;

	const char str[] = "orange";
	char* cp = const_cast<char*>(str);
	cp[0] = '0';
	std::cout << str << std::endl;

	return 0;
}
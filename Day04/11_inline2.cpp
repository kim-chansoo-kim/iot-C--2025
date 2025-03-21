/*
	메크로는 전처리기가 처리하지만, inline 함수는 컴파이러가 처리한다.
*/
#include <iostream>

#define SQUARE(X) ((X)*(X))
// 위 아래 둘이 같음
inline int func(int x)
{
	return x * x;
}

int main()
{
	// 둘이 똑같어용
	std::cout << SQUARE(2) << std::endl;
	std::cout << func(2) << std::endl;


	return 0;
}
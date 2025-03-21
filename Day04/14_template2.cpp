/*
	템플릿은 선언과 함수정의가 분리될 수 없다.
*/
#include <iostream>
using namespace std;
template <typename 티>	// 템플릿 선언(일반화)

티 func(티 a, 티 b)		// 템플릿 함수
{
	cout << "Type: 티" << endl;
	return a + b;
}

template <>				// 템플릿 특수화 - 템플릿 일반화중 특별한 타입만 처리할 경우
int func<int>(int a, int b)
{
	cout << "Type: int" << endl;
	return a + b;
}


int main()
{
	cout << func(10, 20) << endl;
	cout << func(10.5, 20.5) << endl;

	cout << func<double>(10.1, 20.2) << endl;
	cout << func<int>(100, 10) << endl;

	return 0;
}
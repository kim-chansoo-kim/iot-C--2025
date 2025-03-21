/*
	템플릿의 typename이 여러개인 경우
*/
#include <iostream>
using namespace std;

template <typename T, typename T2>
void func(T a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}

int main()
{
	func(10, 3.14);			// 타입내용 생략				// 두개의 타입이 다름 템플릿을 두개 선언해야함 Line.7
	func("Template", 3.14);
	func<const char*, double>("Hello", 3.1415);

	return 0;
}
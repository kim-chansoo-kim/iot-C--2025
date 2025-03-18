/*
	함수 오버로딩(다중정의) : 이름은 같지만 매개변수의 타입, 갯수 등이 다르면 다른 함수이다.
*/
#include <iostream>
using namespace std;

int func() { return 10; }
int func(char c) { return c; }
int func(int n) { return 10 + n; }
int func(int n1, int n2) { return n1 + n2; }
//char func(char c) { return c; } - 8line과 충돌 // 타입과 상관없이 변수가 같을 수는 없다

int main()
{
	cout << func() << endl;			// int func() { return 10; }
	cout << func('a') << endl;		// 97 아스키코드로 a - func(char c)의 출력
	cout << func(10) << endl;		// int func(int n) { return 10 + n; }
	cout << func(10, 20) << endl;	// int func(int n1, int n2) { return n1 + n2; }


	return 0;
}
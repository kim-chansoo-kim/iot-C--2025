/*
	변수 초기화
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 3;			// 복사 초기화 - 대입연산자 사용
	int num2(30);			// 직접 초기화
	int num3{ 300 };		// 중괄호 직접 초기화. c++ v.11부터
	int num4 = { 3000 };	// 중괄호 복사 초기화

	int x = 3.14;
	int x1{ 3.14 };			// 불가능

	cout << num << endl << num2 << endl << num3 << endl << num4 << endl;
	cout << x1 << endl;


	return 0;
}
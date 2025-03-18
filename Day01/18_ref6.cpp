/*
	출력인 경우: 레퍼런스
*/
#include <iostream>
using namespace std;

int& func(int& ref)
{
	ref++;
	return ref;	// lvalue
	// return ref++; Rvelue 이렇게 사용 할 수 없음
}

int main()
{
	int n = 10;
	int& ref = func(n);		// 출력되는 타입과 같다면 문제가 없음
	int ref = func(n);
	cout << ref << endl;

	return 0;
}
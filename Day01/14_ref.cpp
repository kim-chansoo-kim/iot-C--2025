/*
	다른 함수에 선언된 지역변수의 값을 바꾸는 방법1
*/
#include <iostream>
using namespace std;

void chFunc(int* _n)
{
	*_n = 20;
}

int main()
{
	int n = 10;
	cout << "호출 전 n: " << n << endl;

	chFunc(&n);
	// 호출 후 n = 20
	
	cout << "호출 후 n: " << n << endl;
	return 0;
}
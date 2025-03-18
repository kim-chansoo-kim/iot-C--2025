/*
	상수레퍼런스 : 상수도 참조 가능하다.
*/
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	// int& ref = n;
	// int& ref = 10; - 원래는 참조기 때문에 메모리를 저장할 수 없다
	const int& ref = 10;	// 상수레퍼런스로 선언하면 리터럴도 참조할 수 있다
							// 임시객체를 저장할 수 있는 공간이 생성된다.

	cout << "ref: " << ref << endl;

	return 0;
}
/*
	moveconstructor(이동생성자)
*/
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int& rn = n;							// 레퍼런스 - 일반참조
	const int& ra = 10;

	int&& rrn = 10;							// 상수 참조x r-value참조

	cout << n << ", " << rn << ", " << ra << ", " << rrn << endl;

	return 0;
}
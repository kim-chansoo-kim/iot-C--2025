/*
	문자열 처리하기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// 가장 기본적인 문자열
	char str[20] = "홍길동";
	cout << str << endl;

	// str선언과 동시에 문자열 출력
	char str2[20];
	//str2 = "김영희"; (배열이름 str2는 `주소`이기 때문에 주소에는 값을 넣을 수 없음!!)
	strcpy(str2, "김영희"); 
	cout << str2 << endl;

	// 문자열의 입력
	char str3[20];
	cout << "이름 입력: ";
	cin >> str3;
	cout << "입력 받은 이름: " << str3 << endl;

	// 포인터를 통한 문자열
	const char* name; 
	name = "김철수";
	cout << name << endl;

	return 0;
}
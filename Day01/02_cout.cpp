/*
	cout - 표준화면(콘솔)출력
*/

#include <iostream>
using namespace std;						// std라는 namespace를 사용하겠다

int main()
{	
	// 변수
	int num = 100;
	char str[100] = "홍길동";
	double d = 3.14;

	// 출력 - 자료형과 상관없이 포멧팅을 할 필요가 없음(쉬프트 연산자로 그냥 밀어 넣기만하면됨)
	std:: cout << "abcdefg";				// :: - 범위를 나타내는 스코프
	std:: cout << num << std:: endl;		// endl - 개행을 시켜주는 표시(출력 후 한칸 뛰어쓰기)
	std:: cout << str << std:: endl;		// cout - 출력을 담당하는 객체
	cout << d << endl;						// using namespace std; - 이 구문을 통해 앞에 std를 안붙여도 실행

	return 0;

}
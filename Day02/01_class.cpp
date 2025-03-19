/*
	class
*/
#include <iostream>
using namespace std;

class A {				// 클래스는 대문자로 시작한다.
public:					// private으로 작성시 외부에서 클래스 사용 불가능 - public 사용
	int m_num = 0;		// 멤버 변수(속성) // 초기화를 하지 않으면 쓰레기 값이 나옴

	void set(int num)
	{
		m_num = num;
	}

	void print()		// 멤버 함수(기능), 메서드
	{
		cout << "나는 A 클래스의 인스턴스입니다." << "num: " << m_num << endl;
	}
};



int main()
{
	A obj;				// A == 사용자 정의 자료형(타입) // A obj() - ()디폴트 일때 생략가능;
						// int n; 과 같은말 // 입력이 없는 객체는 생성이 가능
	obj.print();
	obj.set(10);
	obj.print();
	return 0;
}
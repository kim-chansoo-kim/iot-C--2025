/*
	콜론 초기화
*/
#include <iostream>
using namespace std;

class CTime
{
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "기본 생성자 호출" << endl; }					// 디폴트 생성자

	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)		// 콜론 초기화(이니셜라이져 리스트)
	{
		cout << "입력 3개 받는 생성자 호출" << endl;
		/*m_hour = h;
		m_min = m;
		m_sec = s;*/
	}

	void setTime(int hour, int min, int sec)
	{
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const
	{
		printf("현재 시간은 %d:%d:%d 입니다\n", m_hour, m_min, m_sec);
	}

};

int main()
{
	//CTime now;
	//CTime now();				// now가 객체가 아닌 함수가 되버림
	CTime now = CTime();		// 임시 객체를 생성
	now.showTime();

	//CTime t(15, 30, 30);		// 가능!
	//CTime t = { 12, 12, 12 };	// 가능! 복사 초기화
	CTime t{ 10, 11, 12 };		// 가능! 즉시 초기화
	t.showTime();

	return 0;
}
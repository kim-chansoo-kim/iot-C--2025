/*
	변환 생성자 2
*/
#include <iostream>
using namespace std;

class Time
{
private:
	int hour;
	int min;
	int sec;
public:
	Time() {}			// 디폴트 생성자
	Time(int abssec)	// 변환 생성자
	{
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void printTime()
	{
		cout << "현재시간은 " << hour << "시" << min << "분" << sec << "초 입니다." << endl;
	}
};

int main()
{
	Time now = 9999;
	//Time now(6611);
	now.printTime();

	return 0;
}
/*
	��ȯ ������ 2
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
	Time() {}			// ����Ʈ ������
	Time(int abssec)	// ��ȯ ������
	{
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void printTime()
	{
		cout << "����ð��� " << hour << "��" << min << "��" << sec << "�� �Դϴ�." << endl;
	}
};

int main()
{
	Time now = 9999;
	//Time now(6611);
	now.printTime();

	return 0;
}
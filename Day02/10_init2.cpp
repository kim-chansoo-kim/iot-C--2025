/*
	Ŭ���� ��ü �ʱ�ȭ
*/
#include <iostream>
using namespace std;

class BoxClass
{
private:
	int m_width{ 0 };
	int m_height{ 0 };
	int m_lenght{ 0 };
public:
	int volume() 
	{
		return m_width * m_height * m_lenght;
	}
};

int main()
{
	BoxClass b;
	cout << "b.volume: " << b.volume() << endl;

	return 0;
}
/*
	��ü�� ���ϴ� �Լ� : add()
	��ü�� ����
*/
#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay)
	{
		cout << "constructor" << endl;
	}
	Point(const Point& other)
	{
		cout << "copy constructor" << endl;
		x = other.x;
		y = other.y;
	}
	Point add(const Point& other)
	{
		cout << "add()" << endl;
		return Point(x + other.x, y + other.y);
	}
	void showPoint()
	{
		cout << "x: " << x << ", " << "y: " << y << endl;

	}
};

int main()
{
	Point p(10, 20);
	Point p2(30, 40);
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	Point p3;
	p3 = p.add(p2);	// ��ü ���ϱ�
	p3.showPoint();

	return 0;
}
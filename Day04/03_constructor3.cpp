/*
	객체를 더하는 함수 : add()
	참조를 리턴
*/
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
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
	Point& add(const Point& other)
	{
		cout << "add()" << endl;
		/* 참조를 리턴한다. */
		x = other.x;
		y = other.y;
		return *this;
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
	
	Point p3 = p.add(p2);
	p3.showPoint();

	return 0;
}
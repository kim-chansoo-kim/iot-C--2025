/*

*/
#include <iostream>

using namespace std;

class MyClass
{
private:
	int x, y;
public:
	MyClass(int ax = 0, int ay = 0) : x(ax), y(ay) {}

	MyClass add(const MyClass& other)
	{
		return MyClass(x + y + other.x + other.y, 0);
	}

	// 연산자 오버로딩
	MyClass operator+(const MyClass& other)
	{
		return MyClass(x + y + other.x + other.y, 0);
	}

	MyClass operator+(int value)
	{
		return MyClass(x + y + value, 0);
	}

	void showMyClass()
	{
		cout << "합: " << x+y << endl;
	}
};

int main()
{
	cout << "obj" << endl;	// 10 + 20 = 30
	MyClass obj(10, 20);
	obj.showMyClass();

	cout << "obj2" << endl; // 20 + 30 = 50
	MyClass obj2(20, 30);
	obj2.showMyClass();

	cout << "obj3" << endl;	// 80
	MyClass obj3 = obj.add(obj2);
	obj3.showMyClass();

	cout << "obj4" << endl;	// 110
	MyClass obj4 = obj.operator+(obj3);
	obj4.showMyClass();

	cout << "obj5" << endl;	// 210
	MyClass obj5 = obj4 + 100;
	obj5.showMyClass();

	return 0;
}

// 오버로딩 할 수 없는 연산자 - ::, ., *, sizeof
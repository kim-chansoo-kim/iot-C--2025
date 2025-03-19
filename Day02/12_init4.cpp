/*
	멤버 초기화
	콜론 초기화가 꼭 필요한 경우 3가지
	1. 상수 멤버변수 초기화
	2. 레퍼런스
	3. 객체를 멤버로 가지는 경우
*/
#include <iostream>

class ConstClass
{
private:
	int m_value;
	const int m_value2;			// 상수 멤버 변수는 객체 생성될 때 반드시 초기화가 된어야 한다. --> 콜론 초기화
public:
	ConstClass(int value, int value2) : m_value2(value2) { m_value = value; }	
	// ConstClass(int value, int value2) { m_value = value; m_value2 = value2; } // 앞에서 상수처리를 해서 초기화가 안됨
	void showValue() 
	{
		std::cout << "value: " << m_value << std::endl << "value2: " << m_value2 << std::endl;
	}
};

class RefClass
{
private:
	int& ref;					// 레퍼런스 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야한다.
public:
	RefClass(int r) : ref(r){ ref = r; }
	void showRef()
	{
		std::cout << "ref: " << ref << std::endl;
	}

};

class Position
{
private:
	int m_x;	// 멤버 변수
	int m_y;
public:
	Position(int x, int y) 
	{
		std::cout << "Position 생성자!!" << std::endl;
		m_x = x, m_y = y; }
	void getData() 
	{
		std::cout << "m_x: " << m_x << std::endl << "m_y: " << m_y << std::endl;
	}
};

class ObjClass
{
private:
	Position pos;					// 객체를 멤버변수로 가짐
public:
	ObjClass(int x, int y) : pos(x, y) { std::cout << "ObjClass constructor!!" << std::endl; }
	void showValue() 
	{
		pos.getData();
	}
};
int main()
{
	ConstClass obj(10, 20);
	obj.showValue();

	int n = 50;
	RefClass obj2(n);
	obj2.showRef();

	std::cout << "======================================" << std::endl;
	ObjClass o(3, 6);
	o.showValue();

	return 0;
}
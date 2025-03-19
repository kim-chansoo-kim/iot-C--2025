/*
	��� �ʱ�ȭ
	�ݷ� �ʱ�ȭ�� �� �ʿ��� ��� 3����
	1. ��� ������� �ʱ�ȭ
	2. ���۷���
	3. ��ü�� ����� ������ ���
*/
#include <iostream>

class ConstClass
{
private:
	int m_value;
	const int m_value2;			// ��� ��� ������ ��ü ������ �� �ݵ�� �ʱ�ȭ�� �Ⱦ�� �Ѵ�. --> �ݷ� �ʱ�ȭ
public:
	ConstClass(int value, int value2) : m_value2(value2) { m_value = value; }	
	// ConstClass(int value, int value2) { m_value = value; m_value2 = value2; } // �տ��� ���ó���� �ؼ� �ʱ�ȭ�� �ȵ�
	void showValue() 
	{
		std::cout << "value: " << m_value << std::endl << "value2: " << m_value2 << std::endl;
	}
};

class RefClass
{
private:
	int& ref;					// ���۷��� ���� ��ü�� �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �̷�������Ѵ�.
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
	int m_x;	// ��� ����
	int m_y;
public:
	Position(int x, int y) 
	{
		std::cout << "Position ������!!" << std::endl;
		m_x = x, m_y = y; }
	void getData() 
	{
		std::cout << "m_x: " << m_x << std::endl << "m_y: " << m_y << std::endl;
	}
};

class ObjClass
{
private:
	Position pos;					// ��ü�� ��������� ����
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
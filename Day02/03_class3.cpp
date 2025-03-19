/*
	생성자 constructor
	생성자 호출로 객체가 만들어 진다.
	객체 생성시에 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다.
	생성자는 초기화기능에 사용한다.
	생성자는 오버로딩이 가능하다.
	프로그래머가 생성자를 작성하면 더 이상 디폴트 생성자는 제공되지 않는다.
*/
#include <iostream>
using namespace std;
// 객체를 생성하면서 바로 전달
class MyClass
{
private:
	int m_num1;
	int m_num2;
public:
	MyClass() {}				// 기본 생성자
	~MyClass() {}				// 소멸자
	MyClass(int num1)			// 1개 입력을 받는 생성자
	{
		m_num1 = num1;
		m_num2 = 0;
	}							
	MyClass(int num1, int num2)	// 생성자(입력을 두개 받는)
	{
		m_num1 = num1;
		m_num2 = num2;
	}
	void printData()
	{
		cout << "나는 MyClass의 인스턴스 입니다." << endl;
		cout << "m_num1: " << m_num1 << endl;
		cout << "m_num2: " << m_num2 << endl;
	}
};

int main()
{
	MyClass obj(10);
	MyClass obj2(100, 200);
	obj.printData();
	obj2.printData();
	return 0;
}
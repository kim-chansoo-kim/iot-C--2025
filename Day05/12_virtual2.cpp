/*
	virtual Class - 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 함수를 가지는 클래스
	추상클래스는 객체를 생성할 수 없다.
*/
#include <iostream>
using namespace std;

class Cinterface
{
public:
	Cinterface() { cout << "CInterface constructor" << endl; }
	virtual void getData() const = 0;		// 순수 가상 함수
};
class CinSub : public Cinterface
{
public:
	CinSub() { cout << "CinSub constructor" << endl; }
	void getData() const override
	{		
		cout << "Pure Virtual function()" << endl;
	}
};

int main()
{
	//Cinterface obj; //C++ 추상 클래스 형식의 개체를 사용할 수 없습니다. 함수은(는) 순수 가상 함수입니다.
	CinSub obj;
	obj.getData();


	return 0;
}
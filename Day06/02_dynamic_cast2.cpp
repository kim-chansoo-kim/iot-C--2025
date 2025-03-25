/*
	dynamic_cast를 이용하여 다운캐스팅하는 경우는 가상함수가 있어야 한다.
*/
#include <iostream>
using namespace std;

class Super
{
public:
	virtual void func() { cout << "Super::func()" << endl; }
	void func1() { cout << "Super::func()1" << endl; }
	void fx() { cout << "Super::fx()" << endl; }
};
class Sub : public Super
{
public:
	void func() { cout << "Sub::func()" << endl; }
	void func2() { cout << "Sub::func()2" << endl; }
	void fx() { cout << "Sub::fx()" << endl; }
};

int main()
{
	Super* sp = new Super{};
	sp->func();
	sp->func1();
	sp->fx();
	cout << "/*-------------------- Upcasting --------------------*/" << endl;

	Super* sp2 = new Sub{};
	sp2->func();
	sp2->func1();
	sp2->fx();
	cout << "---------------------- Downcasting ---------------------" << endl;
	Sub* sp3 = dynamic_cast<Sub*>(sp2);
	sp3->func();
	sp3->func1();
	sp3->func2();
	sp3->fx();

	delete sp;
	delete sp2;


	return 0;
}
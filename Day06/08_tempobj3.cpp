/*
	
*/
#include <iostream>
using namespace std;

class myclass
{
	int num;
public:
	myclass(int n) : num(n) {cout << this << ", " << num << " constructor" << endl;}
	myclass(const myclass& other) : num(other.num) { cout << this << " copy constructor" << endl; }
	~myclass() { cout << this << ", " << num << " destructor" << endl; }
	void setData(int n) { num = n; }			// 메서드는 콜론 초기화 안됩니다잉
};

myclass func(myclass obj)
{
	cout << "func()" << endl;
	return obj;
}

int main()
{
	myclass obj{ 10 };
	myclass obj2{ func(obj) };
	cout << "bye~~" << endl;

	return 0;
}
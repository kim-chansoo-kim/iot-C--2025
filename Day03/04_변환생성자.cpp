/*
	변환 생성자 - 다른 타입의 객체로 변환될때 호출되는 생성자(입력을 한개만 가지는 생성자)
*/
#include <iostream>
using namespace std;

class MyClass
{
private:
	int value;
public:
	MyClass(int value)
	{
		cout << "변환 생성자 호출!!" << endl;
		this->value = value;
	}
	void printMyClass()
	{
		cout << "value: " << value << endl;
	}

};

int main()
{
	MyClass obj = 10;
	obj.printMyClass();

	MyClass obj2(10);
	obj2.printMyClass();
	return 0;
}
/*
	변환 생성자 3
*/
#include <iostream>
using namespace std;

class MyClass
{
private:
	int value;
public:
	explicit MyClass(int value)			// explicit - 인자 하나를 가지고 있는 생성자
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
	//MyClass obj = 10;					// 변환생성자 호출 - 객체의 변환이 일어남
	//obj.printMyClass();

	MyClass obj2(10);
	obj2.printMyClass();
	return 0;
}
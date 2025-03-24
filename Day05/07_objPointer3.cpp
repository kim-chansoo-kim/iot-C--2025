/*
	
*/
#include <iostream>
using namespace std;

class MyClass
{
public:
	int value;
	MyClass(int v = 0) : value(v) {}
	void showMyClass() 
	{
		cout << "value: " << value << std::endl;
	}
};

int main()
{
	MyClass* ptr = new MyClass{10};
	ptr->showMyClass();
	printf("value: %d\n", ptr->value);

	delete ptr;

	MyClass obj{};
	ptr = &obj;

	ptr->showMyClass();
	(*ptr).showMyClass();
	printf("value: %d\n", ptr->value);

	return 0;
}
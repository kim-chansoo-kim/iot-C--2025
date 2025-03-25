/*
	
*/
#include <iostream>
using namespace std;

class MyClass
{
private:
	int num;
public:
	MyClass(int n) : num(n)
	{
		cout << num << " constructor" << endl;
	}
	~MyClass() { cout << num << " destructor" << endl; }
};

int main()
{
	MyClass obj{ 10 };
	MyClass obj2 = MyClass{ 20 };
	MyClass{ 30 };

	cout << "bye~~bye~~" << endl;

	return 0;
}
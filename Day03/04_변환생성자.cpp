/*
	��ȯ ������ - �ٸ� Ÿ���� ��ü�� ��ȯ�ɶ� ȣ��Ǵ� ������(�Է��� �Ѱ��� ������ ������)
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
		cout << "��ȯ ������ ȣ��!!" << endl;
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
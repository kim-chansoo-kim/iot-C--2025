/*
	��ȯ ������ 3
*/
#include <iostream>
using namespace std;

class MyClass
{
private:
	int value;
public:
	explicit MyClass(int value)			// explicit - ���� �ϳ��� ������ �ִ� ������
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
	//MyClass obj = 10;					// ��ȯ������ ȣ�� - ��ü�� ��ȯ�� �Ͼ
	//obj.printMyClass();

	MyClass obj2(10);
	obj2.printMyClass();
	return 0;
}
/*
	weak_ptr: ���۷��� ī��Ʈ�� ������ �����ʴ� ����Ʈ ������
*/
#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass() { cout << "MyClass constructor!!" << endl; }
	~MyClass() { cout << "~MyClass destructor!!" << endl; }
	void func() { std::cout << "Hi~ shared_ptr" << std::endl; }
};


int main()
{
	shared_ptr<MyClass> ptr = make_shared<MyClass>();			// c++14���ĺ��� ����
	weak_ptr<MyClass> weakPtr = ptr;

	// weak_ptr�� ��ȯ������ �����Ѵ�.
	shared_ptr<MyClass> ptr2 = weakPtr.lock();					// weak_ptr���� shared_ptr ��ȯ
	if (ptr2) { cout << "weak_ptr�� ��ȯ�� shared_ptr ��밡��" << endl; }


	return 0;
}
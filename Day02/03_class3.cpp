/*
	������ constructor
	������ ȣ��� ��ü�� ����� ����.
	��ü �����ÿ� ������ �´� �����ڰ� ������ ��ü�� �������� �ʴ´�.
	�����ڴ� �ʱ�ȭ��ɿ� ����Ѵ�.
	�����ڴ� �����ε��� �����ϴ�.
	���α׷��Ӱ� �����ڸ� �ۼ��ϸ� �� �̻� ����Ʈ �����ڴ� �������� �ʴ´�.
*/
#include <iostream>
using namespace std;
// ��ü�� �����ϸ鼭 �ٷ� ����
class MyClass
{
private:
	int m_num1;
	int m_num2;
public:
	MyClass() {}				// �⺻ ������
	~MyClass() {}				// �Ҹ���
	MyClass(int num1)			// 1�� �Է��� �޴� ������
	{
		m_num1 = num1;
		m_num2 = 0;
	}							
	MyClass(int num1, int num2)	// ������(�Է��� �ΰ� �޴�)
	{
		m_num1 = num1;
		m_num2 = num2;
	}
	void printData()
	{
		cout << "���� MyClass�� �ν��Ͻ� �Դϴ�." << endl;
		cout << "m_num1: " << m_num1 << endl;
		cout << "m_num2: " << m_num2 << endl;
	}
};

int main()
{
	MyClass obj(10);
	MyClass obj2(100, 200);
	obj.printData();
	obj2.printData();
	return 0;
}
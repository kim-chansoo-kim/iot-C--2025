/*
	class
*/
#include <iostream>
using namespace std;

class A {				// Ŭ������ �빮�ڷ� �����Ѵ�.
public:					// private���� �ۼ��� �ܺο��� Ŭ���� ��� �Ұ��� - public ���
	int m_num = 0;		// ��� ����(�Ӽ�) // �ʱ�ȭ�� ���� ������ ������ ���� ����

	void set(int num)
	{
		m_num = num;
	}

	void print()		// ��� �Լ�(���), �޼���
	{
		cout << "���� A Ŭ������ �ν��Ͻ��Դϴ�." << "num: " << m_num << endl;
	}
};



int main()
{
	A obj;				// A == ����� ���� �ڷ���(Ÿ��) // A obj() - ()����Ʈ �϶� ��������;
						// int n; �� ������ // �Է��� ���� ��ü�� ������ ����
	obj.print();
	obj.set(10);
	obj.print();
	return 0;
}
/*
	������۷��� : ����� ���� �����ϴ�.
*/
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	// int& ref = n;
	// int& ref = 10; - ������ ������ ������ �޸𸮸� ������ �� ����
	const int& ref = 10;	// ������۷����� �����ϸ� ���ͷ��� ������ �� �ִ�
							// �ӽð�ü�� ������ �� �ִ� ������ �����ȴ�.

	cout << "ref: " << ref << endl;

	return 0;
}
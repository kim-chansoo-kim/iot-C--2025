/*
	����� ���: ���۷���
*/
#include <iostream>
using namespace std;

int& func(int& ref)
{
	ref++;
	return ref;	// lvalue
	// return ref++; Rvelue �̷��� ��� �� �� ����
}

int main()
{
	int n = 10;
	int& ref = func(n);		// ��µǴ� Ÿ�԰� ���ٸ� ������ ����
	int ref = func(n);
	cout << ref << endl;

	return 0;
}
/*
	�Լ� �����ε�(��������) : �̸��� ������ �Ű������� Ÿ��, ���� ���� �ٸ��� �ٸ� �Լ��̴�.
*/
#include <iostream>
using namespace std;

int func() { return 10; }
int func(char c) { return c; }
int func(int n) { return 10 + n; }
int func(int n1, int n2) { return n1 + n2; }
//char func(char c) { return c; } - 8line�� �浹 // Ÿ�԰� ������� ������ ���� ���� ����

int main()
{
	cout << func() << endl;			// int func() { return 10; }
	cout << func('a') << endl;		// 97 �ƽ�Ű�ڵ�� a - func(char c)�� ���
	cout << func(10) << endl;		// int func(int n) { return 10 + n; }
	cout << func(10, 20) << endl;	// int func(int n1, int n2) { return n1 + n2; }


	return 0;
}
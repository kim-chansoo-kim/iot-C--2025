/*
	���� �ʱ�ȭ
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 3;			// ���� �ʱ�ȭ - ���Կ����� ���
	int num2(30);			// ���� �ʱ�ȭ
	int num3{ 300 };		// �߰�ȣ ���� �ʱ�ȭ. c++ v.11����
	int num4 = { 3000 };	// �߰�ȣ ���� �ʱ�ȭ

	int x = 3.14;
	int x1{ 3.14 };			// �Ұ���

	cout << num << endl << num2 << endl << num3 << endl << num4 << endl;
	cout << x1 << endl;


	return 0;
}
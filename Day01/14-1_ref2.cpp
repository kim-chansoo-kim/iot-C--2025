/*
	�ٸ� �Լ��� ����� ���������� ���� �ٲٴ� ���2
	���۷��� -  �� �ٸ� �̸�, ������ �ʴ� ������, �޸𸮸� ������� �ʴ´�.
*/
#include <iostream>
using namespace std;

void chFunc(int& rn)			// & ���۷���(��������) ����
{
	rn = 20;
}

int main()
{
	int n = 10;
	cout << "ȣ�� �� n: " << n << endl;

	chFunc(n);
	// ȣ�� �� n = 20

	cout << "ȣ�� �� n: " << n << endl;
	return 0;
}
/*
	moveconstructor(�̵�������)
*/
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int& rn = n;							// ���۷��� - �Ϲ�����
	const int& ra = 10;

	int&& rrn = 10;							// ��� ����x r-value����

	cout << n << ", " << rn << ", " << ra << ", " << rrn << endl;

	return 0;
}
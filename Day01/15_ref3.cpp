/*
	���۷��� - ����� ���ÿ� �ݵ�� �ʱ�ȭ�ؾ߸� ��.
*/
#include <iostream>
using namespace std;
int main()
{
	int num = 10, num2 = 100;
	int& ref = num;		// num�� �޸� ������ ref��� ������ �ٴ´�
	int* pn = &num;		// ������ ����
	int& rref = ref;
	rref = num2;
	cout << rref << ", " << num2 << endl;

	/*int& rref;		// ������ ���̴µ� ���� �̸��� ����
	rref = ref;*/

	num++;
	ref++;
	(*pn)++;

	cout << "num++: " << num << endl;
	cout << "ref++: " << ref << endl;
	cout << "(*pn)++: " << *pn << endl;

	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl; // ref�� �����̱� ������ ���� �ּҰ� ���´�

	return 0;
}
/*
	new�� ������ ȣ���̵ǹǷ� �ʱ�ȭ�� �����ϴ�.
	������ - ��ü�� �����ϰ�, �ʱ�ȭ��Ű�� ����� ������ Ư���� �޼����̴�.
*/
#include <iostream>
using namespace std;

int main()
{
	int* parr;
	parr = new int[3] {10, 20, 30};		// �̸����� �迭��ü �����ϰ� 10, 20, 30���� �ʱ�ȭ
	// parr = new int[3] = {10, 20, 30};
	cout << parr[0] << ", " << parr[1] << ", " << parr[2] << endl;
	delete[] parr; // new�� ������ �ݵ�� delete�� ����´�
	return 0;
}
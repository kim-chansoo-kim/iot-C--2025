/*
	���� �Ҵ���� ũ�⸦ �Է¹ް� ���Ҹ� �����Ͽ� ����Ͻÿ�.
*/
#include <iostream>
using namespace std;

// ���� �����
/*int main()
{
	int size;
	cout << "ũ�⸦ �Է��Ͻÿ�: ";
	cin >> size;

	int* ary = new int[size];

	cout << size << "���� ����� �Է��ϼ���";
	for (int i = 0; i < size; i++)
	{
		cin >> ary[i];
	}
	cout << "�Է��� ����: ";

	for (int i = 0; i < size; i++)
	{
		cout << ary[i] << " ";
	}
	delete[] ary;
	return 0;
}*/

// �����v0.1 c��Ÿ��
int main()
{
	int size;
	int* p;
	printf("ũ�⸦ �Է��Ͻÿ�: ");
	scanf_s("%d", &size);
	p = (int*)malloc(size * sizeof(int));

	printf("%d���� ����� �Է��ϼ���: ", size);
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
	cout << "�Է��� ����: ";

	for (int i = 0; i < size; i++)
	{
		cout << p[i] << " ";
	}
	free(p);
	return 0;
}
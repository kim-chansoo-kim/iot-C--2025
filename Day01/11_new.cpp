/*
	동적 할당받을 크기를 입력받고 원소를 저장하여 출력하시오.
*/
#include <iostream>
using namespace std;

// 내가 만든것
/*int main()
{
	int size;
	cout << "크기를 입력하시오: ";
	cin >> size;

	int* ary = new int[size];

	cout << size << "개의 사이즈를 입력하세요";
	for (int i = 0; i < size; i++)
	{
		cin >> ary[i];
	}
	cout << "입력한 원소: ";

	for (int i = 0; i < size; i++)
	{
		cout << ary[i] << " ";
	}
	delete[] ary;
	return 0;
}*/

// 강사님v0.1 c스타일
int main()
{
	int size;
	int* p;
	printf("크기를 입력하시오: ");
	scanf_s("%d", &size);
	p = (int*)malloc(size * sizeof(int));

	printf("%d개의 사이즈를 입력하세요: ", size);
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
	cout << "입력한 원소: ";

	for (int i = 0; i < size; i++)
	{
		cout << p[i] << " ";
	}
	free(p);
	return 0;
}
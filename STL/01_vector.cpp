/*
	vector - ���� �迭 �����̳ʷ�, ũ�Ⱑ �ڵ����� �����Ǵ� �迭�Դϴ�.
			 �迭�� �ٸ��� �������� ũ�⸦ ������ �� ������, �޸𸮸� �ڵ����� �����մϴ�.
*/
#include <iostream>
#include <vector>	// ��� ���� ����
using namespace std;

int main()
{
	vector<int> v0;	
	vector<int> v1{ 10 }; // �߰�ȣ - �Ѱ��� ���Ҹ� ������
	vector<int> v2(5); // �Ұ�ȣ - ����� ��Ÿ��
	vector<int> v3{ 1,2,3,4,5,6 };

	// vector�� ����� ����
	cout << "v0�� ������: " << v0.size() << endl;
	cout << "v1�� ������: " << v1.size() << endl;
	cout << "v2�� ������: " << v2.size() << endl;
	cout << "v3�� ������: " << v3.size() << endl;

	for (int i = 0; i < 5; i++)
	{
		printf("v[%d]: %d ", i, v2[i]);
	}

	cout << endl;
	// v3�� ���� �ϳ��� i�� ����
	for (auto i : v3) // ���� ��� for�� - �ε��� ��� �Ұ�!!
	{
		//cout << v3[i] << endl;
		cout << i << endl;
	}

	/* begin()�� end() �޼���� iterator(�ݺ���) Ÿ���� ��ȯ�Ѵ�.(������) */
	cout << "v3�� ù��° ��Ұ�: " << *v3.begin() << endl; // ���������� ������ ���� �ҷ��;��� - ������
	cout << "v3�� ������ ��Ұ�: " << *(v3.end() - 1) << endl; // -1�� ������ �������� �������� �ҷ���

	return 0;
}
/*
	vector.size(): ���� ũ��(����)�� ��ȯ
	vector.begin(): ���ͳ� ù��° ����� �ּҸ� ��ȯ
	vector.end(): ���ͳ� ������ ��� �ּ��� �����ּҸ� ��ȯ
*/
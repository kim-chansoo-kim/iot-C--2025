/*
	vector conteiner ���
	iterator - �ݺ��ڴ� �����̳��� ��Ҹ� ����Ű�� �����Ϳ� ������
	iterator Ÿ�� : iterator, begin(), end()
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//printf("%d\n", v[2]);

	/* ��� 1 - autoŸ�� */
	cout << "v[i]" << endl;
	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
		cout << v.at(i) << endl;
	}
	cout << endl << endl;

	/* ��� 2 - size_type */
	cout << "size_type" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	cout << endl << endl;

	/* ��� 3 - �ݺ��� */ 
	vector<int>::iterator iter;
	cout << "*iter - �ݺ���" << endl;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << endl << endl;

	/* ��� 4 - �ε����� ��� �� ������ */
	cout << "i" << endl;
	for (auto i : v)
	{
		cout << i << endl;
	}
	cout << endl << endl;

	return 0;
}
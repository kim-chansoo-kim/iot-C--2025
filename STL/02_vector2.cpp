/*
	v.push_back(): ������ ���� �ڿ� ���Ҹ� �߰��Ѵ�.
	v.insert(idx, val): idx��° ��ġ�� val�� �ִ´�.
	v.insert(find(v.begin(), v2.end(), val1), val2): ó������ ������ val1�� ã�� �� �ڸ��� val2�� �ִ´�.
	v.capacity(): ���� ���Ͱ� �޸𸮸� �Ҵ��� ũ��(�뷮)�� �����Ѵ�.
	v2.pop_back(): ������ ���Ҹ� ����
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	cout << "[ v[i], v.size(), v.capcity() ]" << endl;
	for (int i = 0; i < 32; i++)
	{
		v.push_back(i + 1);
		cout << "[ " << v[i] << ", " << v.size() << ", " << v.capacity() << " ]" << endl;
	}

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(11);
	v2.push_back(12);
	v2.push_back(13);
	v2.insert(v2.begin(), 1); // ù�ڸ��� 1�� ���� �׵ڴ� ��ĭ�� �ڷ�
	v2.insert(find(v2.begin(), v2.end(), 13), 20); // ó������ ������ ������ 13ã�� �׸��� ���ڸ��� 20�ֱ�

	for (auto i : v2)
	{
		cout << i << endl;
	}

	v2.pop_back();
	for (auto i : v2)
	{
		cout << i << endl;
	}

	return 0;
}
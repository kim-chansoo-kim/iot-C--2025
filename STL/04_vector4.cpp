/*
	vector conteiner - ����, ����, ����
	v.front(): ù��° ��Ҹ� ���
	v.back(): ������ ��Ҹ� ���
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> v;

	v.push_back("Tiger");
	v.push_back("Lion");
	v.push_back("Elephant");
	v.push_back("Horse");

	// ù��° ��Ҹ� ���
	cout << "v.front(): " << v.front() << endl;

	// ������ ��Ҹ� ���
	cout << "v.back(): " << v.back() << endl;
	
	//���� ���Ͱ� �޸𸮸� �Ҵ��� ũ��(�뷮)�� �����Ѵ�.
	cout << "v.capacity(): " << v.capacity() << endl;
	
	cout << endl;

	// iterator - �ݺ���
	vector<string>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << "/ ";
	}
	cout << endl;


	v.pop_back();
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << "/ ";
	}
	cout << endl;


	for (iter = v.begin(); iter != v.end(); iter++)
	{
		if (*iter == "Elephant")
		{
			v.erase(iter); 
			break;
		}
	}
	cout << endl;


	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << "/ ";
	}
	cout << endl;
	return 0;
}
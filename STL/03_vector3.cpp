/*
	vector conteiner 출력
	iterator - 반복자는 컨테이너의 요소를 가리키는 포인터와 유사함
	iterator 타입 : iterator, begin(), end()
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

	/* 출력 1 - auto타입 */
	cout << "v[i]" << endl;
	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
		cout << v.at(i) << endl;
	}
	cout << endl << endl;

	/* 출력 2 - size_type */
	cout << "size_type" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	cout << endl << endl;

	/* 출력 3 - 반복자 */ 
	vector<int>::iterator iter;
	cout << "*iter - 반복자" << endl;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << endl << endl;

	/* 출력 4 - 인덱스를 사용 할 수없다 */
	cout << "i" << endl;
	for (auto i : v)
	{
		cout << i << endl;
	}
	cout << endl << endl;

	return 0;
}
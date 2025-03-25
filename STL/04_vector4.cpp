/*
	vector conteiner - 삽입, 삭제, 참조
	v.front(): 첫번째 요소를 출력
	v.back(): 마지막 요소를 출력
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

	// 첫번째 요소를 출력
	cout << "v.front(): " << v.front() << endl;

	// 마지막 요소를 출력
	cout << "v.back(): " << v.back() << endl;
	
	//현재 벡터가 메모리를 할당한 크기(용량)를 리턴한다.
	cout << "v.capacity(): " << v.capacity() << endl;
	
	cout << endl;

	// iterator - 반복자
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
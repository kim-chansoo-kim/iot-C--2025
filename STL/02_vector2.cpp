/*
	v.push_back(): 마지막 원소 뒤에 원소를 추가한다.
	v.insert(idx, val): idx번째 위치에 val을 넣는다.
	v.insert(find(v.begin(), v2.end(), val1), val2): 처음부터 끝까지 val1을 찾고 그 자리에 val2를 넣는다.
	v.capacity(): 현재 벡터가 메모리를 할당한 크기(용량)를 리턴한다.
	v2.pop_back(): 마지막 원소를 제거
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
	v2.insert(v2.begin(), 1); // 첫자리에 1을 넣음 그뒤는 한칸씩 뒤로
	v2.insert(find(v2.begin(), v2.end(), 13), 20); // 처음부터 끝까지 뒤져서 13찾기 그리고 그자리에 20넣기

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
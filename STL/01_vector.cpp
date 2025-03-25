/*
	vector - 동적 배열 컨테이너로, 크기가 자동으로 조정되는 배열입니다.
			 배열과 다르게 동적으로 크기를 조절할 수 있으며, 메모리를 자동으로 관리합니다.
*/
#include <iostream>
#include <vector>	// 헤더 파일 포함
using namespace std;

int main()
{
	vector<int> v0;	
	vector<int> v1{ 10 }; // 중괄호 - 한개의 원소를 가지는
	vector<int> v2(5); // 소괄호 - 사이즈를 나타냄
	vector<int> v3{ 1,2,3,4,5,6 };

	// vector의 사이즈를 측정
	cout << "v0의 사이즈: " << v0.size() << endl;
	cout << "v1의 사이즈: " << v1.size() << endl;
	cout << "v2의 사이즈: " << v2.size() << endl;
	cout << "v3의 사이즈: " << v3.size() << endl;

	for (int i = 0; i < 5; i++)
	{
		printf("v[%d]: %d ", i, v2[i]);
	}

	cout << endl;
	// v3의 값을 하나씩 i에 대입
	for (auto i : v3) // 범위 기반 for문 - 인덱스 사용 불가!!
	{
		//cout << v3[i] << endl;
		cout << i << endl;
	}

	/* begin()과 end() 메서드는 iterator(반복자) 타입을 반환한다.(포인터) */
	cout << "v3의 첫번째 요소값: " << *v3.begin() << endl; // 간접참조로 데이터 값을 불러와야함 - 포인터
	cout << "v3의 마지막 요소값: " << *(v3.end() - 1) << endl; // -1이 없으면 마지막의 다음값을 불러옴

	return 0;
}
/*
	vector.size(): 원소 크기(갯수)를 반환
	vector.begin(): 벡터내 첫번째 요소의 주소를 반환
	vector.end(): 벡터내 마지막 요소 주소의 다음주소를 반환
*/
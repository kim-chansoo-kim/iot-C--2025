/*
	class2 - 생성자는 클래스와 이름이 같은 메서드(기능: 초기화)
*/
#include <iostream>
using namespace std;

// obj로 setData에서 호출 n1n2초기화 getData에서 n1n2출력
class AClass
{
private:
	int n1;
	int n2;
public:
	AClass() {}
	void setData() // 값 설정
	{
		cout << "두 개의 정수를 입려하세요: ";
		cin >> n1 >> n2;
	}
	void getData() // 값 출력
	{
		cout << "n1: " << n1 << ", n2: " << n2 << endl;
	}
};

int main()
{
	AClass obj;
	obj.setData();
	obj.getData();
	return 0;
}
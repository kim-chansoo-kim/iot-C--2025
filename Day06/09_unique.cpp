/*
	스마트 포인터: 객체의 생명 주기를 객체에 맡김으로 프로그래머의 메모리 관리 부담을 줄여준다.
	unique_ptr - ***소유권을 독점적으로 관리하는 스마트 포인터(auto_ptr을 대체)***
				 더 이상 필요하지 않을 때 자동으로 삭제(delete)하는 역할을 합니다.
				 즉, 메모리 관리 실수를 방지하고, new와 delete를 직접 사용할 필요가 없게 해줍니다.
*/
#include <iostream>
using namespace std;
class MyClass
{
public:
	MyClass() { cout << "MyClass() 호출" << endl; }
	~MyClass() { cout << "~MyClass() 호출" << endl; }

};

int main()
{
	unique_ptr<MyClass> ptr(new MyClass{});
	unique_ptr<MyClass> ptr2 = move(ptr);

	return 0;
}
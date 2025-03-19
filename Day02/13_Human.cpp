/*
	step 1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Human
{
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* _pnmae, int _age, const char* _ptel)
	{
		pname = new char[strlen(_pnmae) + 1];
		strcpy(pname, _pnmae);
		age = _age;
		ptel = new char[strlen(_ptel) + 1];
		strcpy(ptel, _ptel);
	}
	~Human() { delete pname, ptel; }

	void getData() 
	{
		cout << "이름: " << pname << endl;
		cout << "나이: " << age << endl;
		cout << "전화번호: " << ptel << endl;
	}
};

int main()
{
	Human h("홍길동", 30, "010-1234-1234");
	h.getData();
	return 0;
}
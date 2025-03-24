/*
	virtual Class - ���� �����ڸ� ������ �޼��带 ���� ���� �Լ��� �ϸ�, �� ���� ���� �Լ��� ������ Ŭ����
	�߻�Ŭ������ ��ü�� ������ �� ����.
*/
#include <iostream>
using namespace std;

class Cinterface
{
public:
	Cinterface() { cout << "CInterface constructor" << endl; }
	virtual void getData() const = 0;		// ���� ���� �Լ�
};
class CinSub : public Cinterface
{
public:
	CinSub() { cout << "CinSub constructor" << endl; }
	void getData() const override
	{		
		cout << "Pure Virtual function()" << endl;
	}
};

int main()
{
	//Cinterface obj; //C++ �߻� Ŭ���� ������ ��ü�� ����� �� �����ϴ�. �Լ���(��) ���� ���� �Լ��Դϴ�.
	CinSub obj;
	obj.getData();


	return 0;
}
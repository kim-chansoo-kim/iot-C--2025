/*
	��ü ���� ����
*/
#include <iostream>
using namespace std;

class Aclass
{
public:
	void showAclass() {
		cout << "Dynamically created object" << endl;
	}

};

int main()
{
	Aclass* ptr = new Aclass{};				// ��ü ���� �Ҵ�
	ptr->showAclass();

	delete ptr;								// ���� �޸� ����

	return 0;
}
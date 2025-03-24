/*
	按眉 悼利 积己
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
	Aclass* ptr = new Aclass{};				// 按眉 悼利 且寸
	ptr->showAclass();

	delete ptr;								// 悼利 皋葛府 秦力

	return 0;
}
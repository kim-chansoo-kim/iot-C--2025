/*
	¾î·Æ´Ù...
*/
#include <iostream>
using namespace std;

class Myclass
{
public:
	void show()
	{
		cout << "Hello!!" << endl;
	}

};

int main()
{
	Myclass* ptr = nullptr;
	//printf("ptr: %p\n", *ptr);
	if (ptr != nullptr) ptr->show();
	else printf("ptr is null\n");

	ptr = new Myclass{};
	ptr->show();

	return 0;
}
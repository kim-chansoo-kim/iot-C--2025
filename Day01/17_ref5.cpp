/*
	����� ���: �Ϲ� ����
*/
#include <iostream>
using namespace std;

int func(int anum)
{
	anum++;
	return anum;
}

int main()
{
	int num = 10;
	const int& res = func(num);
	std::cout << res << std::endl;

	return 0;
}
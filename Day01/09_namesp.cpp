/*
	
*/
#include <iostream>

namespace aName
{
	void func()
	{
		printf("aName::func()\n");
	}
}
namespace bName
{
	void func()
	{
		printf("bName::func()\n");
	}
}
namespace cName
{
	void func()
	{
		printf("cName::func()\n");
	}
}
using namespace cName;
int main()
{
	aName::func();
	bName::func();
	func(); // using�� ����� func()�� ��������� cName�� ����
	return 0;
}
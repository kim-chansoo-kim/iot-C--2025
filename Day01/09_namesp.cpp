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
	func(); // using을 사용해 func()를 사용했을때 cName이 나옴
	return 0;
}
/*
	
*/
#include <iostream>

class CTest
{
private:
	int num;
public:
	CTest(int anum) : num(anum)
	{
		std::cout << num << " CTest constructor" << std::endl;
	}
	~CTest() { std::cout << num << " CTest destructor" << std::endl; }	// °¡»ó¼Ò¸êÀÚ
	virtual void vfunc()
	{
		std::cout << "CTest virtual function()" << std::endl;
	}
	void func()
	{
		std::cout << "CTest function()" << std::endl;
	}
};
class CTestSub : public CTest
{
private:
	int subN;
public:
	CTestSub(int an1, int an2) : CTest(an1), subN(an2)
	{
		std::cout << subN << " CTestSub constructor" << std::endl;
	}
	~CTestSub() { std::cout << subN << " CTestSub destructor" << std::endl; }
	void vfunc() override{std::cout << " CTestSub function() override" << std::endl;}
};
int main()
{
	CTest obj(1);
	std::cout << "---------------------------------------------------" << std::endl;
	CTestSub obj2(2, 22);
	std::cout << "---------------------------------------------------" << std::endl;
	obj.func();
	obj.vfunc();
	std::cout << "---------------------------------------------------" << std::endl;
	obj2.func();
	obj2.vfunc();
	std::cout << "---------------------------------------------------" << std::endl;

	CTest* ptr = new CTestSub(3, 33);

	delete ptr;

	return 0;
}
/*
	
*/
#include <iostream>
// Ŭ���� ���ø��� �Ϲ�ȭ
/*----------------------------------------------------------------------*/
template <typename T>
class CTest {					
private:
	T num;
public:
	CTest(T n) : num(n){}
	T getData() {return num;}
};
/*----------------------------------------------------------------------*/

// Ŭ���� ���ø��� Ư��ȭ
/*----------------------------------------------------------------------*/
template <>						
class CTest<char>				
{
private:
	char data;
public:
	CTest(char d) : data(d) {}
	char getData() { return data; }
};
/*----------------------------------------------------------------------*/

int main()
{
	CTest<int>obj(10);// <int> �����Ұ���		// Ŭ���� ���ø��� �ν��Ͻ� ������ �ݵ�� typename�� �ۼ��ؾ���
	std::cout << obj.getData() << std::endl;

	CTest<char>obj2('a');
	std::cout << obj2.getData() << std::endl;
	return 0;
}
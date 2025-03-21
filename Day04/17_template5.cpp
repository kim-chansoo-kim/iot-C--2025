/*
	
*/
#include <iostream>
// 클래스 템플릿의 일반화
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

// 클래스 템플릿의 특수화
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
	CTest<int>obj(10);// <int> 생략불가능		// 클래스 템플릿은 인스턴스 생성시 반드시 typename을 작성해야함
	std::cout << obj.getData() << std::endl;

	CTest<char>obj2('a');
	std::cout << obj2.getData() << std::endl;
	return 0;
}
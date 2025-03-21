/*
	클래스 템플릿
*/
#include <iostream>

template <typename T>

class CTemplate
{
private:
	T data;
public:
	CTemplate(T d) 
	{
		data = d;
	}

	T getData() 
	{
		return data;
	}
};

int main()
{
	CTemplate<int> obj(100);
	std::cout << obj.getData() << std::endl;

	CTemplate<std::string> obj2("CTemplate Test");
	std::cout << obj2.getData() << std::endl;

	return 0;
}
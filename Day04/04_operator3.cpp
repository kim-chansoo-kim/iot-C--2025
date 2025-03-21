/*
	����Լ� ������ �����ε�: p1 operator������(p2) ex) p1 operator+ (p2)
*/
#include <iostream>


class MyClass
{
private:
    int value;
public:
    MyClass(int n) : value(n) {}

    MyClass operator*(const MyClass& other)     // ������ �����ε�
    {
        std::cout << "* overloading" << std::endl;
        return MyClass(value * other.value);
    } // ���� ���� Ű���� ���� ������ �簢�簢�ϳ� // �ƴ� ��������?

    void showMyClass()
    {
        std::cout << "value: " << value << std::endl;
    }
};

int main()
{
    MyClass obj(10);            // �ʱⰪ�� ������ ��ü ����
    obj.showMyClass();

    MyClass obj2(obj);          // obj�� �����ؼ� ��ü ����
    obj2.showMyClass();

    MyClass obj3 = obj2;        // obj�� �����ؼ� ��ü ����
    obj3.showMyClass();

    //MyClass obj4 = obj * obj2 * obj3;  // ��ü�� ���� ����� ������ ��ü ����
    MyClass obj4 = (obj.operator*(obj2)).operator*(obj3);
    obj4.showMyClass();

    return 0;
}
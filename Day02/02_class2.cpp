/*
	class2 - �����ڴ� Ŭ������ �̸��� ���� �޼���(���: �ʱ�ȭ)
*/
#include <iostream>
using namespace std;

// obj�� setData���� ȣ�� n1n2�ʱ�ȭ getData���� n1n2���
class AClass
{
private:
	int n1;
	int n2;
public:
	AClass() {}
	void setData() // �� ����
	{
		cout << "�� ���� ������ �Է��ϼ���: ";
		cin >> n1 >> n2;
	}
	void getData() // �� ���
	{
		cout << "n1: " << n1 << ", n2: " << n2 << endl;
	}
};

int main()
{
	AClass obj;
	obj.setData();
	obj.getData();
	return 0;
}
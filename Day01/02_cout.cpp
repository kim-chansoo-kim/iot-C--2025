/*
	cout - ǥ��ȭ��(�ܼ�)���
*/

#include <iostream>
using namespace std;						// std��� namespace�� ����ϰڴ�

int main()
{	
	// ����
	int num = 100;
	char str[100] = "ȫ�浿";
	double d = 3.14;

	// ��� - �ڷ����� ������� �������� �� �ʿ䰡 ����(����Ʈ �����ڷ� �׳� �о� �ֱ⸸�ϸ��)
	std:: cout << "abcdefg";				// :: - ������ ��Ÿ���� ������
	std:: cout << num << std:: endl;		// endl - ������ �����ִ� ǥ��(��� �� ��ĭ �پ��)
	std:: cout << str << std:: endl;		// cout - ����� ����ϴ� ��ü
	cout << d << endl;						// using namespace std; - �� ������ ���� �տ� std�� �Ⱥٿ��� ����

	return 0;

}
/*
	���ڿ� ó���ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// ���� �⺻���� ���ڿ�
	char str[20] = "ȫ�浿";
	cout << str << endl;

	// str����� ���ÿ� ���ڿ� ���
	char str2[20];
	//str2 = "�迵��"; (�迭�̸� str2�� `�ּ�`�̱� ������ �ּҿ��� ���� ���� �� ����!!)
	strcpy(str2, "�迵��"); 
	cout << str2 << endl;

	// ���ڿ��� �Է�
	char str3[20];
	cout << "�̸� �Է�: ";
	cin >> str3;
	cout << "�Է� ���� �̸�: " << str3 << endl;

	// �����͸� ���� ���ڿ�
	const char* name; 
	name = "��ö��";
	cout << name << endl;

	return 0;
}
#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
	system("chcp 1251");
	Counter* a = new Counter;

	a->GetValue();
	a->SetMin(6);
	a->SetMax(9);
	a->GetValue();
	a->Count();
	a++; // �������������� ������ ��� 3 ����������� ������
	a->GetValue();
	a++; // �������� ��������� ������ �� ���, ���� ���� ������������ �����
	a->GetValue();

	Counter* b = new Counter(*a);
	cout << "��������, �� ����������� �������� �� ������� ���������" << endl;
	cout << b; // ������������ ��������������� ������� ������
	cout << "������ 1 �� ������� ��������� �� �������� �� �������� ��� ����� �������� �������" << endl;
	a->Count();
	cout << b;
	delete a;
	delete b;
}
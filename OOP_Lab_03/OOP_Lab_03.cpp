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
	a->Count();
	a->GetValue();
	a->Count();
	a->GetValue();

	Counter* b = new Counter(*a);
	cout << "��������, �� ����������� �������� �� ������� ���������" << endl;
	b->GetValue();
	cout << "������ 1 �� ������� ��������� �� �������� �� �������� ��� ����� �������� �������" << endl;
	a->Count();
	b->GetValue();
	delete a;
	delete b;
}
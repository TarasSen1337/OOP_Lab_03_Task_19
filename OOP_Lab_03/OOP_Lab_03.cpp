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
	cout << "Дивимось, чи скопіювалось значення до другого лічильника" << endl;
	b->GetValue();
	cout << "Додаємо 1 до першого лічильника та дивимось чи змінилось при цьому значення другого" << endl;
	a->Count();
	b->GetValue();
	delete a;
	delete b;
}
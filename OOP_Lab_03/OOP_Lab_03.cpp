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
	a++; // альтернативний варіант для 3 лабораторної роботи
	a->GetValue();
	a++; // значення лічильника вийшло за межі, тому йому призначається мінімум
	a->GetValue();

	Counter* b = new Counter(*a);
	cout << "Дивимось, чи скопіювалось значення до другого лічильника" << endl;
	cout << b; // використання перезавантаженої функції виводу
	cout << "Додаємо 1 до першого лічильника та дивимось чи змінилось при цьому значення другого" << endl;
	a->Count();
	cout << b;
	delete a;
	delete b;
}
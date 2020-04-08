#pragma once
#include <iostream>
using namespace std;

class Counter {
public:
	int value, max, min;

	Counter();

	Counter(const Counter& counter);

	~Counter();

	void GetValue();
	void SetMin(int num);
	void SetMax(int num);
	void Count();
	friend ostream& operator<<(ostream& out, const Counter& c);
	friend bool operator<= (const Counter& c1, const Counter& c2);
	friend Counter operator++(Counter& c);
};
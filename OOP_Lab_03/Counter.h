#pragma once

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
};
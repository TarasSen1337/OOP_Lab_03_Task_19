#include "Counter.h"
#include <iostream>

using namespace std;

Counter::Counter() {
	cout << "Counter created, range - (0;10)" << endl;
	value = 0;
	min = 0;
	max = 10;
}

Counter::Counter(const Counter& counter)
{
	this->value = counter.value;
	this->min = counter.min;
	this->max = counter.max;
}

Counter::~Counter() {
	cout << "Counter is deleted" << endl;
}

void Counter::SetMin(int min) {
	this->min = min;
	if (value < this->min) value = min;
	cout << "Minimum set to " << this->min << endl;
}

void Counter::SetMax(int max) {
	this->max = max;
	if (value > this->max - 1) value = min;
	cout << "Maximum set to " << this->max << endl;
}

void Counter::Count() {
	value++;
	if (value > max - 1) value = min;
}

void Counter::GetValue() {
	cout << "Counter value: " << value << endl;
}
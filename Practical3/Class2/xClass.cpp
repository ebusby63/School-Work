#include "xClass.h"
#include <iostream>
using namespace std;
xClass::xClass(int length, int max_val) {
	size = length;
	data = NULL;
	if (length <= 0) {
		cout << "This is an invalid length" << endl;
		return;
	}
	if (max_val < 0) {
		cout << "This is an invalid max value" << endl;
		return;
	}
	if ((data = new int[size]) != NULL) {
		for (int i = 0; i < size; i++) {
			data[i] = rand() % max_val;
		}
	}
}

xClass::~xClass() {
	delete[] data;
}

void xClass::print_data() const {
	int* pi = data;
	int n = size;
	while (n-- > 0)
		cout << *pi++ << " ";
	cout << endl;
}

int xClass::ave_data() const {
	int av = 0;
	for (int i = 0; i < size; i++)
		av += data[i];
	av /= size;
	return av;
}

int xClass::data_at(int i) const {
	if (i > size || i < 0) {
		cout << "Position not in array" << endl;
	}
	return *(data + i);
}

int xClass::range_data(int min, int max) const
{
	int count = 0;
	for (int i = 0; 0 < size; i++) {
		if (data[i] >= min && data[i] <= max) {
			count++;
		}
	}
	return count;
}

xClass::xClass(const xClass& b)
{
	size = b.size;
	data = new int[size];
	for(int i = 0; i < size; i++) {
		data[i] = b.data[i];
	}
}

void xClass::operator+=(const xClass& b)
{
	int newSize = size + b.size;
	int* newData = new int[newSize];
	for (int i = 0; i < size; i++) {
		newData[i] = data[i];
	}
	for (int i = 0; i < b.size; i++) {
		newData[i + size] = b.data[i];
	}
	delete[] data;
	data = newData;
	size = newSize;
}



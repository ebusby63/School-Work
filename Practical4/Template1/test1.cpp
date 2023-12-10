#include <cstddef>
#include <iostream>
#include "Person.h"
using namespace std;

template<typename T>
bool bInsert(T*& pi, int& size, int pos, T val)
{
	if (pos < 0 || pos > size) {
		cout << "pos is out of range" << endl;
		return false;
	}
	// new array size after insertion
	size++;
	// new array
	T* piNew = new T[size];
	if (piNew == NULL)
		return false;
	// copt pi to piNew & insert val
	for (int i = 0; i < pos; i++)
		piNew[i] = pi[i];
	piNew[pos] = val;
	for (int i = pos + 1; i < size; i++)
		piNew[i] = pi[i - 1];
	// delete old array
	delete[] pi;
	// point pi to the new array
	pi = piNew;
	return true;
}

int main1() {
	string* pstr = new string[5];
	int size = 5;
	pstr[0] = "abc";
	pstr[1] = "def";
	pstr[2] = "jkl";
	pstr[3] = "mno";
	pstr[4] = "pqr";
	for (int i = 0; i < size; i++)
		cout << pstr[i] << " ";
	cout << endl;
	if (bInsert(pstr, size, 2, string("ghi"))){
		for (int i = 0;i < size; i++)
			cout << pstr[i] << " ";
	}
	return 0;
}

int main() {
	int size = 5;
	Person* pps = new Person[size];
	pps[0] = Person("Eoin", "Busby", "1", 2003);
	pps[1] = Person("Jack", "Sparrow", "2", 1985);
	pps[2] = Person("Homer", "Simpson", "3", 1963);
	pps[3] = Person("Hugh", "Grant", "4", 1974);
	pps[4] = Person("Magnus", "Carlson", "5", 1932);
	for (int i = 0; i < size; i++) {
		pps[i].print();
	}
	cout << endl;
	bInsert(pps, size, 2, Person("John", "Smith", "123456", 1990));
	for (int i = 0; i < size; i++) {
		pps[i].print();
	}
	cout << endl;
	return 0;
}
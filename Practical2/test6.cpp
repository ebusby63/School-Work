#include <iostream>
using namespace std;
bool bInsert(int*& pi, int& size, int pos, int val) {
	if (pos < 0 || pos > size) {
		cout << "pos is out of range" << endl;
		return false;
	}
	
	size++;
	int* piNew = new int[size];
	if (piNew == NULL) {
		return false;
	}
	for (int i = 0; i < pos; i++) 
		piNew[i] = pi[i];
	
	piNew[pos] = val;
	for (int i = pos +1; i < size; i++) 
		piNew[i] = pi[i - 1];
	
	delete[] pi; 
	pi = piNew;

	return true;
}
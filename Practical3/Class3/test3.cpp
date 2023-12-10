#include "iStack.h"
#include <iostream>
using namespace std;
int main() {
	iStack is;
	for (int i = 0; i < 100; i++) {
		is.push(rand() & 10);
	}
	is.print();
	is.search(5);
	if (is.search(20) == -1) {
		cout << "20 was not in the stack" << endl;
	}
	return 0;
}
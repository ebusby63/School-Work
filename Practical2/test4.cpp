#include <iostream>
using namespace std;
int search(char* pchs, int size,char key) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (pchs[i] == key) {
			count++;
		}
	}
	return count;
	//using pointer arithmetic
	//for (int i = 0; i < size; i++) {
		//if (*pchs++ == key) {
			//count++;
		//}
	//}
}
int main4() {
	cout << "set a char array size: " << endl;
	int size = 0;
	cin >> size;
	cout << "set a key from a-z to be searched for: " << endl;
	char key;
	cin >> key;
	if (key >= 97 && key <= 123) {
		char* pchs = new char[size];
		if (pchs != NULL) {
			for (int i = 0; i < size; i++) {
				pchs[i] = 97 + rand() % 26;
			}
			cout << endl;
			cout << "Occurence of the key: " << search(pchs, size, key);
		}
		delete[] pchs;
	}
	return 0;
}
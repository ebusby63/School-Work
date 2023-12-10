#include "myFunctions.h"
#include <corecrt_math.h>
#include <iostream>
using namespace std;

int iAdd(int a, int b)
{
	return a+b;
}

double divideXbyY(double x, double y)
{
	return x / y;
}

int divideXbyY(int x, int y)
{
	return x / y;
}

double Log(double x)
{
		return log(x);
}

double Sqrt(double x) {
	return x;
}

void sortPrint(int i, int j, int k) {
	//3,2,1 -> 2,3,1 -> 2,1,3 -> 1,2,3
	int temp;
	if (i > j) {
		temp = i;
		i = j;
		j = temp;
	}
	if (j > k) {
		temp = j;
		j = k;
		k = temp;
	}
	if (i > j) {
		temp = i;
		i = j;
		j = temp;
	}
	cout << "The numbers sorted: " << i << " " << j << " " << k << endl;
}

double myCalculator(double a, char op, double b)
{
	if (op == '+') {
		return a + b;
	}
	if (op == '-') {
		return a - b;
	}
	if (op == '*') {
		return a * b;
	}
	if (op == '/') {
		return a / b;
	}
}



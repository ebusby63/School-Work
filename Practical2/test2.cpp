#include <iostream>
using namespace std;
double* pCubeX(double x)
{
	double cube = x * x * x;
	return &cube;
}
int main2()
{
	double* px = pCubeX(3.0);
	cout << *px << endl;
	return 0;
}
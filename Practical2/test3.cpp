#include <iostream>
void mul_div(double* first, double* second) {
	double temp = *first * *second;
	*second = *first / *second;
	*first = temp;
}

int main3() {
	double f = 4;
	double s = 2;
	double* pF = &f;
	double* pS = &s;
	mul_div(pF, pS);
	std::cout << "first num is now : " << f << std::endl << "Second num is now: " << s << std::endl;
	return 0;
}
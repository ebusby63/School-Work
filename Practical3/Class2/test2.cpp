#include "xClass.h"
#include <iostream>
using namespace std;
int main()
{
	xClass x(10, 100);
	x.print_data();
	cout << x.ave_data() << endl;
	cout << x.data_at(5) << endl;
	cout << x.range_data(40, 50) << endl;
	xClass y = x;
	y.print_data();
	x += y;
	x.print_data();
	y += x;
	y.print_data();
	return 0;
}
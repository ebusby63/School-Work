#include "Person.h"
#include <iostream>
using namespace std;
int main() {
	Person eoin("Eoin", "Busby", "1", 2003);
	cout << "The second name is: " << eoin.get_family_name() << endl;
	eoin.print();

	Person* boin = new Person();
	boin->set_given_name("Boin");
	boin->set_family_name("Flusby");
	boin->set_birth_year(3002);
	boin->set_ID_number("2");
	boin->print();

	Person* boin2 = new Person("Boin", "Flusby", "2", 3002);
	if (*boin == *boin2) {
		cout << "They do be the same" << endl;
	}
	delete boin;
	delete boin2;
	return 0;
}





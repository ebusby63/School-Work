#include "myFunctions.h" // user-defined class, included using ""
#include <iostream> // system i/o class, included using <>
#include <ctime>
using namespace std;
int main1()
{
	// cout: print results to screen
	cout << iAdd(12, 13) << "\n"; // newline operator
	cout << divideXbyY(1, 2) << endl; // newline operator
	cout << divideXbyY(1.0, 2.0) << endl;
	cout << divideXbyY(16.0, 0.0) << endl;
	return 0;
}
int main2() {
	sortPrint(3,2,1);
	return 0;
}
int main3() {
	int a, b;
	char op;
	cout << "Input a formula to calculate (3+4)" << endl;
	cin >> a >> op >> b;
	cout << myCalculator(a, op, b) <<endl;
	return 0;
}
int main4()
{
	// read N, R
	int N, R;
	cout << "Input N, R: the number and range of random numbers to generate" << endl;
	cin >> N >> R;
	// set the initial point for generating the random numbers using current time
	// so each run will give you a different sequence of random numbers
	// need to #include <ctime>
	srand(time(0));
	// generate N random numbers using rand() in the range [0, R-1] inclusive, and
	// calculate their sum
	int sum = 0;
	int n = 0;
	do{
		int rn = rand() % R;
		cout << rn << endl;
		sum += rn;
		n++;
	} while (n < N);
	// output the average of these numbers
	cout << "average = " << sum / N << endl;
	/* implement the above loop operation by using while, and do...while loops */
	return 0;
}
int main() {
	int guess, rNum, guessNo;
	guessNo = 1;
	rNum = rand() % 10;
	cout << "Guess a number bewteen 0-9" << endl;
	do {
		cout << "Guess " << guessNo << ": ";
		cin >> guess;
		cout << endl;
		if (guess == rNum) {
			cout << "You guessed correctly" << endl;
			return 0;
		}
		if (guess != rNum) {
			cout << "You guessed incorrectly" << endl;
			guessNo++;
		}
	} while (guessNo < 4);
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number, x;
	bool prime = true;

	cin >> number;

	if (number > 1000 || number <=1 ) {
		prime = false;
		cout << "out of bound";
		return 0;
	}
	
	for (x = 2; x <= number / 2; x++)
	{
		if (number % x == 0 && x==2) {	// if remainder of divisor is 0, number is not prime
			prime = false;
			cout << x << " ";
		}
		if (number % x == 0 && x==3) {	
			prime = false;
			cout << x << " ";
		}
		if (number % x == 0 && x==5) {	
					prime = false;
					cout << x << " ";
				}
		if (number % x == 0 && x==7) {	
					prime = false;
					cout << x << " ";
				}
		if (number % x == 0 && x==11) {	
					prime = false;
					cout << x << " ";
				}
		if (number % x == 0 && x==13) {	
					prime = false;
					cout << x << " ";
				}
		if (number % x == 0 && x==17) {	
					prime = false;
					cout << x << " ";
				}
		if (number % x == 0 && x==19) {	
					prime = false;
					cout << x << " ";
				}
if (number % x == 0 && x==23) {	
					prime = false;
					cout << x << " ";
				}
    if (number % x == 0 && x==29) {	
					prime = false;
					cout << x << " ";
				}
    if (number % x == 0 && x==31) {	
					prime = false;
					cout << x << " ";
				}
		//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31
	}
	if (prime == true)
	cout << "Number " << number << " is prime!";

	return 0;
}

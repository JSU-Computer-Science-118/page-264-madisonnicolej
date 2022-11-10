//Madison Jones			J00964128
//Page 264 Exercise 22	11/8/22

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number, x;
	bool prime = true;
	int primeN;

	cout << "Enter a number between 1 and 1000." << endl;
	cin >> number;

	if (number > 1000) {
		prime = false;
		cout << "Out of bounds.";
		return 1;
	}

	for (x = 2; x <= number / 2; x++)
	{
		if (number % x == 0) {	// if remainder of divisor is 0, number is not prime
			prime = false;
			cout << x << " ";
		}
		
	}
	if (prime == true)
	cout << "Number " << number << " is prime!";

	return 0;
}

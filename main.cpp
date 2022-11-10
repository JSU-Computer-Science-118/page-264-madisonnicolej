//Madison Jones			J00964128
//Page 264 Exercise 22	11/8/22

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number, x;
	bool prime = true;
	
	cin >> number;

	if (number > 1000 || number <=1) {
		prime = false;
		cout << "out of bound";
		return 0;
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

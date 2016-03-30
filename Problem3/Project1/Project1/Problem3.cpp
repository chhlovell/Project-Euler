/*
* QUERY:
*	What is the largest prime factor of the number	600851475143 ?
*
* Integer max:										2147483647
*/

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

/*
* DECLARATIONS
*/
bool isPrime(double n);
bool isFactor(double fac, double num);
double getMaxPrimeFactor(double num);

/*
* DEFINITIONS
*/

int main(void){

	cout << "The largest prime factor of 600851475143 is: " << getMaxPrimeFactor(600851475143) << "\n";
	getchar();

	return 0;
}

/*
* DESC:
*	This function determines if the number 'n' is prime or not.
* RETURN:
*	true: the number is prime
*	false: the number is not prime
*/
bool isPrime(double n){
	if (n < 1) return false;
	if (n == 1) return true;
	if (n == 2) return true;
	
	if (isFactor(2, n)){
		return false;
	}

	for (double it = 3; it < (n / 2); it+=2){
		if (isFactor(it, n)){
			return false;
		}
	}

	return true;
}

/*
* This function returns true if fac is a factor of num.  Otherwise false is returned.
*/
bool isFactor(double fac, double num){
	if (fmod(num, fac) == 0){
		return true;
	}

	return false;
}

/*
* RETURN:
*	the largest prime factor of a given number 'n'
*/
double getMaxPrimeFactor(double n){
	if (n < 1) return 0;
	if (n == 1) return 1;

	double limit = sqrt(n);
	//double lprime = 1;
	double it;

	for (it = floor(limit); (it > 1) && !(isFactor(it, n) && isPrime(it)); it--){
	}

	return it;
}
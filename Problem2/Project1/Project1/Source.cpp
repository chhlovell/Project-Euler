#include <iostream>
#include <vector>

using namespace std;

bool		isFactor(int, int);
int			sumFibonacci(int);

int main(void){
	
	int sum = sumFibonacci(4000000);

	cout << sum << "\n";
	getchar();

	return 0;
}

/*
* This function returns true if fac is a factor of num.  Otherwise false is returned.
*/
bool isFactor(int fac, int num){
	if (num % fac == 0){
		return true;
	}

	return false;
}

/*
* This function returns the sum of the fibonacci numbers up to the max integer provided
*/
int sumFibonacci(int max){
	int a		= 1;
	int b		= 2;
	int sum		= 2;

	cout << a << " " << b << " ";

	int tmp = 0;
	while((a+b) < max){
		tmp = a + b;
		cout << tmp << " ";
		a = b;
		b = tmp;

		if (isFactor(2, tmp)){
			sum += tmp;
		}
	}
	cout << "\n";
	cout << sum << "\n";

	return sum;
}
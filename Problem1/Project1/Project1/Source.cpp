#include <iostream>

using namespace std;

bool isFactor(int fac, int num);

int main(void){
	int sum = 0;

	for (int it = 0; it < 1000; it++){
		if (isFactor(3, it) || isFactor(5, it)){
			sum += it;
		}
	}

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
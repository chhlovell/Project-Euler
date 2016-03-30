/*
* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
*
* Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <vector>

using namespace std;


bool isPalindrome(int p);

int main(void){
	int min = 1;
	int max = 99;

	int a = 999;
	int b = 999;
	int palindrome = 0;
	for (; a > 99 && !isPalindrome(a*b); a--){
		for (b = a; b > 99 && !isPalindrome(a*b); b--){
		}
		if (isPalindrome(a*b)){
			cout << a*b << "\n";
			if ((a*b) > palindrome){
				palindrome = (a*b);
			}
		}
	}
	cout << "---------------------------------\n";
	cout << 999 * 999 << "\n";
	cout << palindrome << "\n";

	getchar();
}

/*
* DESC
*	This function determines if the given integer 'p' is a palindrome or not.
* RETURN
*	ture: the integer 'p' is a palindrome
*	false: the integer 'p' is not a palindrome
*/
bool isPalindrome(int p){
	vector<int> palindrome;

	while (p > 0){
		palindrome.push_back(p % 10);
		p = p / 10;
	}

	int a = palindrome.size() - 1;
	int b = 0;
	for (; a >= b && (palindrome[a] == palindrome[b]); a--, b++){
	}

	if (a > b){
		return false;
	} 
	return true;
}	
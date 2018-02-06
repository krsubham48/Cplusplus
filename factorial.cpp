#include <iostream>

using namespace std;

int factorial(int n);

int factorial(int n){
	if(n == 0){
		return 1;
	}
	else{
		return (n*factorial(n-1));
	}
}

int main(){
	int x;
	cout << "Enter a number: \n";
	cin >> x;
	cout << "Factorial: " << factorial(x) << "\n";

	return 0;
}
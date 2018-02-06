#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float x;
	cout << "Enter a number:\n";
	cin >> x;
	cout << "log(x): " << log10(x) << "\n";
	cout << "ln(x): " << log(x) << "\n";
	cout << "sin(x): " << sin(x) << "\n";
	cout << "cos(x): " << cos(x) << "\n";
	cout << "tan(x): " << tan(x) << "\n";
	cout << "square(x): " << pow(x, 2) << "\n";
	cout << "sqrt(x): " << sqrt(x) << "\n";

	return 0;
}
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int *arr;
	int size;

	cout << "Size of array: \n";
	cin >> size;

	arr = new int[size];
	delete arr;
	return 0;
}
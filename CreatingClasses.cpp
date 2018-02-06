#include <iostream>

using namespace std;

class item{ // defining class item
private: // private variables and functions, available within class only
	int number;
	float cost;
public: // public variables and functions, accessible to outside functions as well
	void getdata(int a, float b); // function prototyping, to be defined outside the class
	void putdata(void){ // function defined inside class
		cout << "number: " << number << "\n";
		cout << "cost: " << cost << "\n";
	}
};

void item :: getdata(int a, float b){ // member function defination
	number = a;
	cost = b;
}

int main(){ // main function
	item x;
	cout << "\nObject x\n";

	x.getdata(100, 299.95);
	x.putdata();

	item y;
	cout << "\nObject y\n";

	x.getdata(200, 175.95);
	x.putdata();

	return 0;
}
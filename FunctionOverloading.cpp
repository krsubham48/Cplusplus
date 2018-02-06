#include <iostream>

using namespace std;

int area(int);
int area(int, int);
float area(float);

int area(int side){
	return (side*side);
}

int area(int length, int breadth){
	return (length*breadth);
}

float area(float radius){
	return (3.14*radius*radius);
}

int main(){
	int x, y;
	cout << "Enter side:\n";
	cin >> x;
	cout << "Area of square is: " << area(x) << "\n";
	cout << "Enter length and breadth:\n";
	cin >> x >> y;
	cout << "Area of rectangle is: " << area(x, y) << "\n";
	cout << "Enter radius upto 2 decimal points:\n";
	cin >> x;
	cout << "Area of circle is: " << area(x) << "\n";

	return 0;
}
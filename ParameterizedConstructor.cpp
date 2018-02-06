#include <iostream>

using namespace std;

class point{
	private:
		int x, y;
	
	public:
		point(int a, int b){ // inline parameterized constructor
			x = a;
			y = b;
		}
		void display(){
			cout << x << "\n";
			cout << y << "\n";
		}
};

int main(){
	point p1(1, 1);
	point p2(5, 10);
	cout << "Point p1 = \n";
	p1.display();
	cout << "Point p2 = \n";
	p2.display();

	return 0;
}
#include <iostream>

using namespace std;

class employee{
private:
	char name[30];
	float age;

public:
	void getdata(void);
	void putdata(void);
};

void employee :: getdata(void){
	cout << "Enter name:\n";
	cin >> name;
	cout << "Age:\n";
	cin >> age;
}

void employee :: putdata(void){
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << "\n";
}

const int size=3;

int main(){
	employee manager[size];
	for(int i=0; i<size; i++){
		cout << "Detais of manager " << i+1 << "\n";
		manager[i].getdata();
	}
	for(int i=0; i<size; i++){
		cout << "Manager " << i+1 << "\n";
		manager[i].putdata();
	}

	return 0;
}
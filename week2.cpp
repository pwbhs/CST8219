// week2.cpp : Defines the entry point for the application.
//

#include<iostream>

using namespace std;

class Vehicle {
private:
	int numWheels;
	int numDoors;


public: 
	Vehicle(int w, int d) {
		numWheels = w;
		numDoors = d;
		cout << "In constructor with 2 parameters" << endl;
	}
	Vehicle(int w): Vehicle(w,4) {
		cout << "In constructor with 1 parameters, wheels = " << w << endl;
	}
	Vehicle(): Vehicle(4) { 
		cout << "In constructor with 0 parameters" << endl;
	}

	~Vehicle() {
		cout << "in destructor" << endl;
	}
};

int main() {
	cout << "Hello CMake" << endl;
	return 0 ;
}

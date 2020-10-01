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

int main(int argc, char **argv) {
	Vehicle* pVehicle = NULL;
	char temp;
	int d, w;
	Vehicle veh1;
	Vehicle veh2(4);
	Vehicle veh3(4, 2);

	do
	{	
		
			delete pVehicle;
		
		cout << "enter number of doors" << endl;
		while (!(cin >> d) || d <= 0) {
			cout << "Error! Please type in a number" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
		cout << "enter number of wheels" << endl;
		while (!(cin >> w) || w <= 0) {
			cout << "Error! Please type in a number" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
		pVehicle = new Vehicle(w, d);
		cout << "To create a new vehicle enter any character. Otherwise, enter 'q' to quit" << endl;
		cin >> temp;
		
	} while ( temp != 'q' );
	delete pVehicle;

	cout << "vehicle takes " << sizeof(veh1) << endl;
	cout << "vehicle takes " << sizeof(veh2) << endl;
	cout << "vehicle takes " << sizeof(veh3) << endl;
	cout << "i made a vehicle!" << endl;

	return 0 ;
}

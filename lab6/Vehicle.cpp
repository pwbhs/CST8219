#include<iostream>
#include "Vehicle.h"

using namespace std;


Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;
	cout << "In constructor with 2 parameters" << endl;
}
Vehicle::Vehicle(int w) : Vehicle(w, 4) {
	cout << "In constructor with 1 parameters, wheels = " << w << endl;
}
Vehicle::Vehicle() : Vehicle(4) {
	cout << "In constructor with 0 parameters" << endl;
}

Vehicle::~Vehicle() {
	cout << "in destructor" << endl;
}
void Vehicle::printVehicle() {
	cout << "Wheels: " << numWheels << " Doors: " << numDoors << endl;
}
Vehicle::Vehicle(Vehicle &copy) : Vehicle(copy.getNumWheels(), copy.getNumDoors()){
	Vehicle::numWheels = copy.getNumWheels();
	Vehicle::numDoors = copy.getNumDoors();
}
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {
	Vehicle::numWheels = copy->numWheels;
	Vehicle::numDoors = copy->numDoors;
}
int Vehicle::getNumWheels() {
	return Vehicle::numDoors;
}
int Vehicle::getNumDoors() {
	return Vehicle::numDoors;
}
void Vehicle::setNumWheels(int w) {
	Vehicle::numWheels = w;
}
void Vehicle::setNumDoors(int d) {
	Vehicle::numDoors = d;
}


ostream& operator<<(ostream& out,  const Vehicle& v)
{
	out << "Wheels: " << v.numWheels << " Doors: " << v.numDoors << endl;
	return out;
}






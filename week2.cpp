// week2.cpp : Defines the entry point for the application.
//
#include "Vehicle.h";
#include<iostream>

using namespace std;

void CreateVehicle(Vehicle& v, int w = 4, int d = 2);

int main(int argc, char **argv) {
	
	Vehicle original;

	Vehicle copy(original);

	Vehicle secondCopy(&original);
	copy.printVehicle();
	CreateVehicle(copy, 2);
	copy.printVehicle();
	CreateVehicle(copy, 2, 3);
	copy.printVehicle();
	copy = secondCopy;
	copy.printVehicle();
	

	return 0 ;
}

void CreateVehicle(Vehicle& v, int w, int d)
{
	v.setNumWheels(w);
	v.setNumDoors(d);
}

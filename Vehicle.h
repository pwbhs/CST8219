#pragma once
#include<iostream>;
using namespace std;
class Vehicle {
private:
	int numWheels;
	int numDoors;

	
public:
	Vehicle(int, int);
	Vehicle(int);
	Vehicle(void);
	~Vehicle(void);
	void printVehicle(void);
	Vehicle(Vehicle&);
	Vehicle(Vehicle*);
	int getNumWheels(void);
	int getNumDoors(void);
	void setNumWheels(int);
	void setNumDoors(int);
	Vehicle& Vehicle::operator= (const Vehicle&);
	bool Vehicle::operator==(const Vehicle&);
	bool Vehicle::operator!=(const Vehicle&);
	Vehicle operator++();
	Vehicle operator++(int i);
	Vehicle operator--();
	Vehicle operator--(int i);
	friend ostream& operator<<(ostream&, const Vehicle&);


};
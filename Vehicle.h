#pragma once
#include<iostream>;
using namespace std;
class Vehicle {
protected:
	int numWheels;
	int numDoors;
	float engineEfficiency;

	
public:
	virtual float calculateRange() = 0;
	virtual float percentEnergyRemaining() = 0;
	virtual void drive(float km) = 0;
	Vehicle(int, int);
	Vehicle(int);
	Vehicle(void);
	virtual ~Vehicle(void);
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
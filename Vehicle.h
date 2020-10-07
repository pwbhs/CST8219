#pragma once
	
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
};
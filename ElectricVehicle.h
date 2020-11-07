#include "Vehicle.h"

class ElectricVehicle : public Vehicle {
public:
	float currentCharge;
	float maximumCharge;

	ElectricVehicle(float a, float b);

	~ElectricVehicle();
	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);
};
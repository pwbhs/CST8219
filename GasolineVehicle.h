#include "Vehicle.h"

class GasolineVehicle : public Vehicle {
public:
	float currentGasoline;
	float maximumGasoline;

	GasolineVehicle(float a, float b);
	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);
	~GasolineVehicle();


};
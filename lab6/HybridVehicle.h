#pragma once
#include "GasolineVehicle.h"
#include "ElectricVehicle.h"
#include "Vehicle.h"

class HybridVehicle : public ElectricVehicle, public GasolineVehicle {
public:

	HybridVehicle(float a, float b, float c, float d);
	~HybridVehicle();
	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);
};
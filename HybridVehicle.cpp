#include "HybridVehicle.h"

HybridVehicle::HybridVehicle(float a, float b, float c, float d) : ElectricVehicle(c, d), GasolineVehicle(a, b) {

}

	float HybridVehicle::calculateRange() {

		return currentCharge * 100 / ElectricVehicle::engineEfficiency + currentGasoline * 100 / GasolineVehicle::engineEfficiency;

}
	float HybridVehicle::percentEnergyRemaining() {
		return ((currentCharge / maximumCharge * 100) + (currentGasoline / maximumGasoline * 100)) / 2;
	}
	void HybridVehicle::drive(float km) {
		if (km > ElectricVehicle::calculateRange()) {
			km -= ElectricVehicle::calculateRange();
			currentCharge = 0;
		}
		if (currentCharge > 0) {
			currentCharge -= (km / 100) * ElectricVehicle::engineEfficiency;
		}
		else {
			currentGasoline -= (km / 100) * GasolineVehicle::engineEfficiency;
			if (currentGasoline < 0) {
				cout << "Your car has run out of energy!" << endl;
			}
		}
	}
	
		HybridVehicle::~HybridVehicle() {
			cout << "In HybridVehicle Destructor" << endl;
		}
	


#include "ElectricVehicle.h"

ElectricVehicle::ElectricVehicle(float _maximumElectric, float _electricEfficiency) {
	maximumCharge = _maximumElectric;
	currentCharge = _maximumElectric;
	engineEfficiency = _electricEfficiency;
}


float ElectricVehicle::calculateRange() {
	return currentCharge * 100 / engineEfficiency;

}
float ElectricVehicle::percentEnergyRemaining() {
	return currentCharge * 100.0f / maximumCharge;

}
void ElectricVehicle::drive(float km) {
	currentCharge -= (km / 100) * engineEfficiency;


}
ElectricVehicle::~ElectricVehicle() {
	cout << "In ElectricVehicle Destructor" << endl;
}
# CMakeList.txt : CMake project for week2, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 2.8.9)

project (hello)

add_executable(hello week2.cpp  "Vehicle.h" "Vehicle.cpp" "GasolineVehicle.h" "GasolineVehicle.cpp" "ElectricVehicle.h" "ElectricVehicle.cpp" "HybridVehicle.h" "HybridVehicle.cpp")

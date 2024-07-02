#pragma once
#include <iostream>
#include "Vehiculo.h"
class Camioneta : public Vehiculo
{
public:
	
	Camioneta(double vel, int cap): Vehiculo(vel, cap){}

	string obtenerTipo() const override {
		return "Camioneta";
	}
};


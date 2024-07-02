#pragma once
#include <iostream>
#include "Vehiculo.h"
class Automovil : public Vehiculo
{
public:
	Automovil(double vel, int cap):Vehiculo(vel,cap){}

	string obtenerTipo() const override {
		return "Automovil";
	}
};


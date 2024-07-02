#pragma once
#include <iostream>
#include "Vehiculo.h"
class Autobus : public Vehiculo
{
private:
	int asientos;

public:
	Autobus(double vel, int cap, int as): Vehiculo(vel, cap), asientos(as){}

	string obtenerTipo() const override {
		return "Autobus";
	}

	void mostrarInfo() const override {
		Vehiculo::mostrarInfo();
		cout << "Numero de asientos: " << asientos << endl; 
	}
};


#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehiculo
{
protected:
	double velocidad;
	int capacidad;

public:
	Vehiculo(double vel, int cap): velocidad(vel), capacidad(cap){}

	virtual string obtenerTipo() const = 0;

	virtual void mostrarInfo() const {
		cout << "Tipo: " << obtenerTipo() << endl;
		cout << "Velocidad: " << velocidad << " k/h " << endl;
		cout << "Capacidad " << capacidad << " personas " << endl;
	}
};


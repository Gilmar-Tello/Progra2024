#pragma once
#include <iostream>

using namespace std;
class Empleado
{
protected:
	string nombre;
	double salario;

public: 
	Empleado( string nombre, double salario): nombre(nombre), salario(salario){}

	//metodo virtual
	virtual double calcularSalario()const = 0;

	const string obtenerNombre() const {
		return nombre;
	}
};


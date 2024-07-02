#pragma once
#include <iostream>
#include "Empleado.h"
class Gerente:public Empleado
{


public:
	Gerente(const string nombre, double salario): Empleado(nombre, salario){}

	double calcularSalario()const override {
		double bono = 2500;
		return salario + bono;
	}
};


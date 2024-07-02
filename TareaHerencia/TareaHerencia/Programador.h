#pragma once
#include <iostream>
#include "Empleado.h"
class Programador:public Empleado
{

public:
	Programador(const string nombre, double salario):Empleado(nombre, salario){}

	double calcularSalario()const override {
		double bono = 1500;
		return salario + bono;
	}
};


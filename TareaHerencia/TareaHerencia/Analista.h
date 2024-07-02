#pragma once
#include <iostream>
#include "Empleado.h"
class Analista:public Empleado
{

public:
	Analista(const string&nombre, double salario):Empleado(nombre, salario){}

	double calcularSalario() const override {
		double bono = 500;
		return salario + bono;
	}
};


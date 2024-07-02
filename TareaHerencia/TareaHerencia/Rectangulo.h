#pragma once
#include "Figura.h"

class Rectangulo:public Figura 
{
private:
	double lado1;
	double lado2;

public:
	Rectangulo(double l1, double l2): lado1(l1), lado2(l2){}

	double Area()const override {
		return lado1 * lado2;
	}

	double Perimetro()const override {
		return 2 * (lado1 + lado2);
	}
};


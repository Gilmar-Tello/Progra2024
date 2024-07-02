#pragma once
#include "Figura.h"

class Triangulo:public Figura{
private:
	double altura;
	double base;
	
public:
	Triangulo(double a, double b): altura(a), base(b){}
	
	double Area() const override {
		return (base * altura) / 2.0;
	}

	double Perimetro()const override {
		return base * 3;
	}
};


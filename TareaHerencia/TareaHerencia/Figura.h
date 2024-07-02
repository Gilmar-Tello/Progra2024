#pragma once
#include <iostream>
class Figura
{
public:
	//metodo virtual
	virtual double Area() const = 0;
	virtual double Perimetro() const = 0;
};


#include <iostream>

class Circulo
{
private:
	double base;
	double altura;
	double pi;
	double radio;

public:
	Circulo(double b, double h, double p, double r) : base(b), altura(h), pi(p), radio(r) {}

	double obtenerArea() {
		return pi * (radio * radio);
	}

	double obtenerPerimetro() {
		return 2 * pi * radio;
	}
};


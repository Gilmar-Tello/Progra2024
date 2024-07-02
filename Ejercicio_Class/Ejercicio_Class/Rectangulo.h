#include <iostream>

class Rectangulo
{
private:
	double base;
	double altura;

public:
	Rectangulo(double b, double h) : base(b), altura(h) {}

	double obtenerArea() {
		return base * altura;
	}

	double obtenerPerimetro() {
		return 2 * (base + altura);
	}
};


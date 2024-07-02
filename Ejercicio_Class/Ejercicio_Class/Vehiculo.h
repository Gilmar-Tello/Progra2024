#include <iostream>
#include <string>
using namespace std;
class Vehiculo
{
private:
	string marca;
	string modelo;
	double precio;

public:
	Vehiculo(string ma, string mo, double p) : marca(ma), modelo(mo), precio(p) {}

	void establecerMarca(string ma) {
		marca = ma;
	}

	void establecerModelo(string mo) {
		modelo = mo;
	}

	void establecerPrecio(double p) {
		precio = p;
	}

	string obtenerMarca() {
		return marca;
	}

	string obtenerModelo() {
		return modelo;
	}

	double obtenerPrecio() {
		return precio;
	}

};
#include <iostream>
class Fecha
{
private:
	int dia;
	int mes;
	int anio;

public:
	Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

	void establecerDia(int d) {
		dia = d;
	}

	void establecerMes(int m) {
		mes = m;
	}

	void establecerAnio(int a) {
		anio = a;
	}

	int obtenerDia() {
		return dia;
	}

	int obtenerMes() {
		return mes;
	}

	int obtenerAnio() {
		return anio;
	}

};


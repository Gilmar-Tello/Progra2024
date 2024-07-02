#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Material
{
protected:
	string titulo;
	int aniopublicacion;
	bool prestado;

public:
	Material(const string& t, int anio): titulo(t), aniopublicacion(anio), prestado(false){}

	virtual void mostrarInfo() const = 0;
	virtual void prestar() {
		if (!prestado) {
			prestado = true;
			cout << "Material Prestado" << endl;
		}
		else {
			cout << "Este material ya ha sido prestado" << endl;
		}
	}

	virtual void devolver() {
		if (prestado) {
			prestado = false;
			cout << "Material devuelto" << endl;
		}
		else {
			cout << "Este material no esta prestado actualmente" << endl;
		}
	}
};


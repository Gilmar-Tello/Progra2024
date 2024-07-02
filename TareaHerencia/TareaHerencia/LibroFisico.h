#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Libro.h"
using namespace std;
class LibroFisico : public Libro
{
private:
	int numPaginas;

public: 
	LibroFisico(const string& t, const string& a, int anio, int paginas):Libro(t, a, anio), numPaginas(paginas){}

	void mostrarInfo() const override {
		Libro::mostrarInfo();
		cout << "Numero de paginas: " << numPaginas << endl;
	}
};

class Usuario {
private:
	string nombre;

public:
	Usuario(const string& n): nombre (n){}

	void prestarMaterial(Material& material) {
		material.prestar();
	}

	void devolverMaterial(Material& material) {
		material.devolver();
	}
};


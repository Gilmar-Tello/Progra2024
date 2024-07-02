#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Libro.h"
using namespace std;
class LibroDigital : public Libro

{
private:
	string formato;

public: 
	LibroDigital(const string& t, const string& a, int anio, const string& f): Libro(t, a, anio), formato(f){}

	void mostrarInfo() const override {
		Libro::mostrarInfo();
		cout << "Formato: " << formato << endl;
	}
};


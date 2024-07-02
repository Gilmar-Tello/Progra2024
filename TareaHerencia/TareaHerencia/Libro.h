#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Material.h"
using namespace std;
class Libro : public Material 
{
protected:
	string autor;

public:
	Libro(const string& t, const string& a, int anio): Material(t, anio), autor(a){}
	
	void mostrarInfo()const override {
		cout << "Titulo: " << titulo << endl;
		cout << "Autor: " << autor << endl;
		cout << "Anio de publicacion: " << aniopublicacion << endl;
	}
};


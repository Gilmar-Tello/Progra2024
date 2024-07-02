#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
	string nombre;
	int edad;
	string sexo;

public:
	Persona(string n, int e, string s): nombre(n), edad(e), sexo(s){}

	void establecerNombre(string n) {
		nombre = n;
	}

	void establecerEdad(int e) {
		edad = e;
	}

	void establecerSexo(string s) {
		sexo = s;
	}

	string obtenerNombre() {
		return nombre;
	}

	int obtenerEdad() {
		return edad;
	}

	string obtenerSexo() {
		return sexo;
	}

};


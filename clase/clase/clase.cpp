#include<iostream>
using namespace std;

class Perro {
public:
	string nombre;
	int edad;
	string raza;

	void ladrar()
	{
		cout << "Gua, Gua" << endl;
	}
	void correr()
	{
		cout << "corriendo a toda velocidad" << endl;
	}
	void getNombre()
	{
		cout << "el nombre del perro es " << nombre << endl;
	}
	void getEdad()
	{
		cout << "la edad del perro es " << edad << endl;;
	}
	void getRaza()
	{
		cout << "La raza del perro es " << raza << endl;
	}
};
int main()
{
	Perro miPerro;
	miPerro.nombre = "Firulais";
	miPerro.edad = 5;
	miPerro.raza = "Ladrador";

	miPerro.ladrar();
	miPerro.correr();
	miPerro.getNombre();
	miPerro.getEdad();
	miPerro.getRaza();

	Perro chusin;
	chusin.nombre = "Chusin Meza ";
	chusin.edad = 12;
	chusin.raza = "salchica";

	chusin.ladrar();
	chusin.correr();
	chusin.getNombre();
	chusin.getEdad();
	chusin.getRaza();


	return 0;
}
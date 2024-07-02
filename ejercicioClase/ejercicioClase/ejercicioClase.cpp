#include<iostream>
using namespace std;

class Estudiante {
public:
	string nombre;
	int edad;
	string nivel;

	
	void getNombre()
	{
		cout << "el nombre es " << nombre << endl;
	}
	void getEdad()
	{
		cout << "la edad es " << edad << endl;;
	}
	void getNivel()
	{
		cout << "el esta " << nivel << endl;
	}
};
int main()
{
	Estudiante nivelBasico;
	nivelBasico.nombre = "Fredy Meza";
	nivelBasico.edad = 15;
	nivelBasico.nivel = "segundo basico";

	
	nivelBasico.getNombre();
	nivelBasico.getEdad();
	nivelBasico.getNivel();

	cout << endl;

	Estudiante diversificado;
	diversificado.nombre = "Sergio Meza";
	diversificado.edad = 22;
	diversificado.nivel = "quinto perito";

	diversificado.getNombre();
	diversificado.getEdad();
	diversificado.getNivel();


	return 0;
}
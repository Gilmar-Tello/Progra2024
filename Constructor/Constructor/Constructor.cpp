#include <String>
#include <iostream>
using namespace std;

class Cliente {
	int ID;
	string Nombre;
public:
	Cliente()
	{


	}
	Cliente(int _id, string _nombre)
	{
		ID = _id;
		Nombre = _nombre;
	}
};

int main()
{
	Cliente;
}
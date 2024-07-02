
#include <iostream>
#include <string>  
using namespace std;

int main()
{
    string nombre;
    string curso;
    int edad;
    cout << "ingrese su nombre" << endl;
    getline(cin, nombre);
    cout << "ingrese el curso" << endl;
    cin >> curso;
    cout << "ingrese su edad" << endl;
    cin >> edad;

    if (edad >= 18) {
        cout << "Usted " << nombre << " que cursa " << curso << " es " << " mayor de edad." << endl;
    }
    else {
        cout << "Usted " << nombre << " que cursa " << curso << " es " << " menor de edad." << endl;
    }
}


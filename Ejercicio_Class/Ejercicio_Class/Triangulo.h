#include <iostream>

using namespace std;

class Triangulo {
private:
    float lado1, lado2, lado3;

public:
    // Constructor
    Triangulo(float l1, float l2, float l3) {
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
    }

    // M�todo para obtener el per�metro
    float obtenerPerimetro() {
        return lado1 + lado2 + lado3;
    }

    // M�todo para obtener el tipo de tri�ngulo
    string obtenerTipo() {
        if (lado1 == lado2 && lado2 == lado3) {
            return "Equil�tero";
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            return "Is�sceles";
        }
        else {
            return "Escaleno";
        }
    }
};


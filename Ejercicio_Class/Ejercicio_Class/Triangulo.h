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

    // Método para obtener el perímetro
    float obtenerPerimetro() {
        return lado1 + lado2 + lado3;
    }

    // Método para obtener el tipo de triángulo
    string obtenerTipo() {
        if (lado1 == lado2 && lado2 == lado3) {
            return "Equilátero";
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            return "Isósceles";
        }
        else {
            return "Escaleno";
        }
    }
};


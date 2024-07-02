#include <iostream>

using namespace std;

class Rectangulo2 {
protected:
    float largo;
    float ancho;

public:
    // Constructor
    Rectangulo2(float l, float a) {
        largo = l;
        ancho = a;
    }

    // Método para obtener el área
    float obtenerArea() {
        return largo * ancho;
    }

    // Método para obtener el perímetro
    float obtenerPerimetro() {
        return 2 * (largo + ancho);
    }
};

class Cuadrado : public Rectangulo2 {
public:
    // Constructor
    Cuadrado(float lado) : Rectangulo2(lado, lado) {}

    // Método para obtener el área (método heredado)
    // No es necesario volver a implementarlo aquí ya que el método de Rectangulo funciona para el cuadrado

    // Método para obtener el perímetro (método heredado)
    // No es necesario volver a implementarlo aquí ya que el método de Rectangulo funciona para el cuadrado
};


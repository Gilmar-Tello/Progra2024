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

    // M�todo para obtener el �rea
    float obtenerArea() {
        return largo * ancho;
    }

    // M�todo para obtener el per�metro
    float obtenerPerimetro() {
        return 2 * (largo + ancho);
    }
};

class Cuadrado : public Rectangulo2 {
public:
    // Constructor
    Cuadrado(float lado) : Rectangulo2(lado, lado) {}

    // M�todo para obtener el �rea (m�todo heredado)
    // No es necesario volver a implementarlo aqu� ya que el m�todo de Rectangulo funciona para el cuadrado

    // M�todo para obtener el per�metro (m�todo heredado)
    // No es necesario volver a implementarlo aqu� ya que el m�todo de Rectangulo funciona para el cuadrado
};


#include <iostream>

using namespace std;

class Caja {
private:
    float largo;
    float ancho;
    float alto;

public:
    // Constructor
    Caja(float largo, float ancho, float alto) {
        this->largo = largo;
        this->ancho = ancho;
        this->alto = alto;
    }

    // Método para obtener el volumen
    float obtenerVolumen() {
        return largo * ancho * alto;
    }

    // Método para obtener el area superficial
    float obtenerAreaSuperficial() {
        return 2 * (largo * ancho + largo * alto + ancho * alto);
    }
};

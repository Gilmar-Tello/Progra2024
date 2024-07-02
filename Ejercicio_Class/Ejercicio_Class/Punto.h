#include <iostream>

using namespace std;

class Punto {
private:
    float x;
    float y;

public:
    // Constructor
    Punto(float x, float y) {
        this->x = x;
        this->y = y;
    }

    // M�todos para establecer las coordenadas
    void establecerX(float x) {
        this->x = x;
    }

    void establecerY(float y) {
        this->y = y;
    }

    // M�todos para obtener las coordenadas
    float obtenerX() {
        return x;
    }

    float obtenerY() {
        return y;
    }
};

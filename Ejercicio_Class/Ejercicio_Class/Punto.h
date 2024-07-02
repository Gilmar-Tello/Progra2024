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

    // Métodos para establecer las coordenadas
    void establecerX(float x) {
        this->x = x;
    }

    void establecerY(float y) {
        this->y = y;
    }

    // Métodos para obtener las coordenadas
    float obtenerX() {
        return x;
    }

    float obtenerY() {
        return y;
    }
};

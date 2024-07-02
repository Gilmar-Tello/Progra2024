#include <iostream>
#include <cmath>

using namespace std;

class FiguraGeometrica {
public:
    virtual float calcularArea() = 0; // Método virtual puro
};

class FCuadrado : public FiguraGeometrica {
private:
    float lado;

public:
    FCuadrado(float lado) {
        this->lado = lado;
    }

    float calcularArea() override {
        return lado * lado;
    }
};

class FCirculo : public FiguraGeometrica {
private:
    float radio;

public:
    FCirculo(float radio) {
        this->radio = radio;
    }

    float calcularArea() override {
        return 3.1416 * radio * radio;
    }
};

class FTriangulo : public FiguraGeometrica {
private:
    float base;
    float altura;

public:
    FTriangulo(float base, float altura) {
        this->base = base;
        this->altura = altura;
    }

    float calcularArea() override {
        return 0.5 * base * altura;
    }
};

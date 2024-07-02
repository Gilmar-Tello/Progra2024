#include <iostream>

using namespace std;

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    // Constructor
    Fraccion(int num, int den) {
        numerador = num;
        denominador = den;
    }

    // Método para sumar fracciones
    Fraccion sumar(Fraccion otraFraccion) {
        int nuevoNumerador = numerador * otraFraccion.denominador + otraFraccion.numerador * denominador;
        int nuevoDenominador = denominador * otraFraccion.denominador;
        return Fraccion(nuevoNumerador, nuevoDenominador);
    }

    // Método para restar fracciones
    Fraccion restar(Fraccion otraFraccion) {
        int nuevoNumerador = numerador * otraFraccion.denominador - otraFraccion.numerador * denominador;
        int nuevoDenominador = denominador * otraFraccion.denominador;
        return Fraccion(nuevoNumerador, nuevoDenominador);
    }

    // Método para multiplicar fracciones
    Fraccion multiplicar(Fraccion otraFraccion) {
        int nuevoNumerador = numerador * otraFraccion.numerador;
        int nuevoDenominador = denominador * otraFraccion.denominador;
        return Fraccion(nuevoNumerador, nuevoDenominador);
    }

    // Método para dividir fracciones
    Fraccion dividir(Fraccion otraFraccion) {
        int nuevoNumerador = numerador * otraFraccion.denominador;
        int nuevoDenominador = denominador * otraFraccion.numerador;
        return Fraccion(nuevoNumerador, nuevoDenominador);
    }

    // Método para simplificar la fracción (opcional)
    void simplificar() {
        int divisor = gcd(numerador, denominador);
        numerador /= divisor;
        denominador /= divisor;
    }

    // Función para calcular el máximo común divisor (mcd)
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Método para imprimir la fracción
    void imprimir() {
        cout << numerador << "/" << denominador << endl;
    }
};

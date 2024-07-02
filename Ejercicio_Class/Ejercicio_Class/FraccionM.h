#include <iostream>

using namespace std;

class FraccionM {
private:
    int numerador;
    int denominador;

public:
    // Constructor
    FraccionM(int num, int den) {
        numerador = num;
        denominador = den;
    }

    // M�todo para sumar fracciones
    FraccionM sumar(FraccionM otraFraccion) {
        int nuevoNumerador = numerador * otraFraccion.denominador + otraFraccion.numerador * denominador;
        int nuevoDenominador = denominador * otraFraccion.denominador;
        return FraccionM(nuevoNumerador, nuevoDenominador);
    }

    // M�todo para restar fracciones
    FraccionM restar(FraccionM otraFraccion) {
        int nuevoNumerador = numerador * otraFraccion.denominador - otraFraccion.numerador * denominador;
        int nuevoDenominador = denominador * otraFraccion.denominador;
        return FraccionM(nuevoNumerador, nuevoDenominador);
    }

    // M�todo para multiplicar fracciones
    FraccionM multiplicar(FraccionM otraFraccion) {
        int nuevoNumerador = numerador * otraFraccion.numerador;
        int nuevoDenominador = denominador * otraFraccion.denominador;
        return FraccionM(nuevoNumerador, nuevoDenominador);
    }

    // M�todo para dividir fracciones
    FraccionM dividir(FraccionM otraFraccion) {
        int nuevoNumerador = numerador * otraFraccion.denominador;
        int nuevoDenominador = denominador * otraFraccion.numerador;
        return FraccionM(nuevoNumerador, nuevoDenominador);
    }

    // M�todo para simplificar la fracci�n (opcional)
    void simplificar() {
        int divisor = gcd(numerador, denominador);
        numerador /= divisor;
        denominador /= divisor;
    }

    // Funci�n para calcular el m�ximo com�n divisor (mcd)
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // M�todo para imprimir la fracci�n
    void imprimir() {
        cout << numerador << "/" << denominador << endl;
    }
};

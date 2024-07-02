#include <iostream>
#include <vector>

using namespace std;

class CuentaBancariaM {
private:
    int NumeroCuenta;
    float saldo;

public:
    // Constructor
    CuentaBancariaM(int numCuenta, float saldoInicial) {
        NumeroCuenta = numCuenta;
        saldo = saldoInicial;
    }

    // Método para depositar en la cuenta
    void depositar(float cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            cout << "Deposito: Q. " << cantidad << " Su saldo actual es: Q. " << saldo << endl;
        }
        else {
            cout << "La cantidad a depositar debe ser mayor a cero" << endl;
        }
    }

    // Método para retirar de la cuenta
    void retirar(float cantidad) {
        if (cantidad > 0 && saldo >= cantidad) {
            saldo -= cantidad;
            cout << "Se retiro: Q. " << cantidad << " Su nuevo saldo es: Q. " << saldo << endl;
        }
        else {
            cout << "Saldo Insuficiente" << endl;
        }
    }

    // Método para obtener el saldo de la cuenta
    float obtenerSaldo() {
        return saldo;
    }

    // Método para obtener el número de cuenta
    int obtenerNumeroCuenta() {
        return NumeroCuenta;
    }
};
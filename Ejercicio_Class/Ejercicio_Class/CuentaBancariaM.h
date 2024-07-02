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

    // M�todo para depositar en la cuenta
    void depositar(float cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            cout << "Deposito: Q. " << cantidad << " Su saldo actual es: Q. " << saldo << endl;
        }
        else {
            cout << "La cantidad a depositar debe ser mayor a cero" << endl;
        }
    }

    // M�todo para retirar de la cuenta
    void retirar(float cantidad) {
        if (cantidad > 0 && saldo >= cantidad) {
            saldo -= cantidad;
            cout << "Se retiro: Q. " << cantidad << " Su nuevo saldo es: Q. " << saldo << endl;
        }
        else {
            cout << "Saldo Insuficiente" << endl;
        }
    }

    // M�todo para obtener el saldo de la cuenta
    float obtenerSaldo() {
        return saldo;
    }

    // M�todo para obtener el n�mero de cuenta
    int obtenerNumeroCuenta() {
        return NumeroCuenta;
    }
};
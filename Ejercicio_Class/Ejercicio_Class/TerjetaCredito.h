#include <iostream>
#include <string>

using namespace std;

class TerjetaCredito {
private:
    string numeroTarjeta;
    float saldo;
    float limiteCredito;

public:
    // Constructor
    TerjetaCredito(string numeroTarjeta, float limiteCredito) {
        this->numeroTarjeta = numeroTarjeta;
        this->limiteCredito = limiteCredito;
        this->saldo = 0.0; // Inicialmente el saldo es cero
    }

    // M�todos para establecer los atributos
    void establecerNumeroTarjeta(string numeroTarjeta) {
        this->numeroTarjeta = numeroTarjeta;
    }

    void establecerLimiteCredito(float limiteCredito) {
        this->limiteCredito = limiteCredito;
    }

    // M�todo para realizar un pago
    void realizarPago(float monto) {
        if (monto > 0 && monto <= saldo + limiteCredito) {
            saldo -= monto;
            cout << "Pago realizado correctamente." << endl;
        }
        else {
            cout << "No se pudo realizar el pago. El monto excede el saldo disponible y el l�mite de credito." << endl;
        }
    }

    // M�todo para consultar el saldo disponible
    float consultarSaldo() {
        return saldo;
    }

    // M�todo para obtener el l�mite de cr�dito
    float obtenerLimiteCredito() {
        return limiteCredito;
    }
};

#include<iostream>
using namespace std; 
class CuentaBancaria
{
private:
	int NumeroCuenta;
	float saldo;

public:
	CuentaBancaria(int numCuenta, float saldoInicial) {
		NumeroCuenta = numCuenta;
		saldo = saldoInicial;

	}
	void depositar(float cantidad) {
		if (cantidad > 0) {
			saldo += cantidad;
			cout << "Deposito: Q. " << cantidad << " Su saldo Acutal es: Q. " << saldo << endl;
		}
		else {
			cout << "La cantidad a depositar debe ser mayor a cero" << endl;
		}
	}

	void retirar(float cantidad) {
		if (cantidad > 0 && saldo >= cantidad) {
			saldo -= cantidad;
			cout << "Se retiro: Q. " << cantidad << " Su nuevo saldo es: Q. " << saldo << endl;
		}
		else {
			cout << "Saldo Insuficiente" << endl; 
		}
	}

	float obtenerSaldo() {
		return saldo;
	}
};


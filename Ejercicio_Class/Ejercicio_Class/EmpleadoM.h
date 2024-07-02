#include <iostream>
#include <vector>
#include <string>

using namespace std;

class EmpleadoM {
private:
    string nombre;
    float salario;
    string cargo;

public:
    // Constructor
    EmpleadoM() {}  // Constructor vac�o

    // M�todos para establecer los atributos
    void establecerNombre(string nombre) {
        this->nombre = nombre;
    }

    void establecerSalario(float salario) {
        this->salario = salario;
    }

    void establecerCargo(string cargo) {
        this->cargo = cargo;
    }

    // M�todos para obtener los atributos
    string obtenerNombre() {
        return nombre;
    }

    float obtenerSalario() {
        return salario;
    }

    string obtenerCargo() {
        return cargo;
    }
};

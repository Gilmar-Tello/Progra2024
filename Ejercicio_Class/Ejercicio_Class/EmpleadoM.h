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
    EmpleadoM() {}  // Constructor vacío

    // Métodos para establecer los atributos
    void establecerNombre(string nombre) {
        this->nombre = nombre;
    }

    void establecerSalario(float salario) {
        this->salario = salario;
    }

    void establecerCargo(string cargo) {
        this->cargo = cargo;
    }

    // Métodos para obtener los atributos
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

#include <iostream>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    string carrera;
    float promedio;

public:
    // Constructor
    Estudiante(string nombre, int edad, string carrera, float promedio) {
        this->nombre = nombre;
        this->edad = edad;
        this->carrera = carrera;
        this->promedio = promedio;
    }

    // Métodos para establecer los atributos
    void establecerNombre(string nombre) {
        this->nombre = nombre;
    }

    void establecerEdad(int edad) {
        this->edad = edad;
    }

    void establecerCarrera(string carrera) {
        this->carrera = carrera;
    }

    void establecerPromedio(float promedio) {
        this->promedio = promedio;
    }

    // Métodos para obtener los atributos
    string obtenerNombre() {
        return nombre;
    }

    int obtenerEdad() {
        return edad;
    }

    string obtenerCarrera() {
        return carrera;
    }

    float obtenerPromedio() {
        return promedio;
    }
};
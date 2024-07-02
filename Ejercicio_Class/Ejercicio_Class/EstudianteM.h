#include <iostream>
#include <vector>
#include <string>

using namespace std;

class EstudianteM {
private:
    string nombre;
    int edad;
    string carrera;
    float promedio;

public:
    // Constructor
    EstudianteM(string nombre, int edad, string carrera, float promedio) {
        this->nombre = nombre;
        this->edad = edad;
        this->carrera = carrera;
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
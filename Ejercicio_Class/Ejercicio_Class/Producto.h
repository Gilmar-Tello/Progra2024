#include <iostream>
#include <string>

using namespace std;

class Producto {
private:
    string nombre;
    float precio;
    int cantidad;

public:
    // Constructor
    Producto(string nombre, float precio, int cantidad) {
        this->nombre = nombre;
        this->precio = precio;
        this->cantidad = cantidad;
    }

    // Métodos para establecer los atributos
    void establecerNombre(string nombre) {
        this->nombre = nombre;
    }

    void establecerPrecio(float precio) {
        this->precio = precio;
    }

    void establecerCantidad(int cantidad) {
        this->cantidad = cantidad;
    }

    // Métodos para obtener los atributos
    string obtenerNombre() {
        return nombre;
    }

    float obtenerPrecio() {
        return precio;
    }

    int obtenerCantidad() {
        return cantidad;
    }
};
